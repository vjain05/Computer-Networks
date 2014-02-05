#include "../../packet.h"
#include "../../socket.h"
#include "../../appData.h"
#include "../../transport.h"
#include "../../command.h"
module TransportP{
	provides interface Transport;
	uses interface FloodSend;
	uses interface Timer<TMilli> as synTimer;
	uses interface Appy;
	//uses interface BusyWait<TMilli, uint16_t> as BS1;
	//uses interface List<socket_storage_t> as SocketList;
	//uses interface List()
}

implementation{
	//appData buffers[12];
	appData *buffers;
	uint8_t congPack=1;
	transport tcpPack;
	socket_addr_t tempAddr;
	socket_t sock;
	pack sendPackage;
	pair one;
	uint16_t transfer;
	socket_t newSock;
	socket_storage_t sockList[12];
	uint8_t size=0;
	uint32_t EstimatedRTT=3000;
	uint32_t SampleRTT=3000;
	uint8_t numSent=0;
	uint8_t numRec=0;
	error_t handle;
	uint8_t repeat[12]={0,0,0,0,0,0,0,0,0,0,0,0};
	uint8_t repeat2[12]={0,0,0,0,0,0,0,0,0,0,0,0};
	task void update();
	void printSendBuffer(uint16_t fd);
	void printRecBuffer(uint16_t fd);
	//void endlessWrite(uint16_t location, uint16_t length);
	void makeTcpPacket(transport *tcpPacket, uint8_t srcPort,uint8_t destPort,uint16_t seq, uint16_t ack,uint8_t flags,uint8_t window,uint8_t length,uint8_t* payload);
	void makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t* payload, uint8_t length);
	socket_t searchNewSock_listen(socket_addr_t *addr);
	//socket_t searchNewSock_default(socket_addr_t *addr);
	command error_t Transport.bind(socket_t fd, socket_addr_t *addr){
		
		
		socket_storage_t *ptr;
		//socket_addr_t *ptr2;
		dbg("Project3TDbg","fd %d\n",(uint16_t)fd);
		//ptr2->srcAddr=addr->srcAddr;
		//ptr2->destAddr=addr->destAddr;
		//ptr2->srcPort=addr->srcPort;
		//ptr2->destPort=addr->destPort;
		//memcpy(ptr->sockAddr,addr,sizeof(socket_addr_t));
		//dbg("Project3TDbg","srcIP %d\n",sockList[(uint16_t)fd].sockAddr);
		sockList[(uint16_t)fd].sockAddr=*addr;
		//dbg("Project3TDbg","fd %d\n",(uint16_t)fd);
		ptr=sockList+(uint16_t)fd;
		//dbg("Project3TDbg","fd %d\n",(uint16_t)fd);
		//dbg("Project3TDbg","fd %d\n",(uint16_t)fd);
		//dbg("Project3TDbg","srcIP %d\n",(ptr->sockAddr).srcAddr);
		//dbg("Project3TDbg","srcPort %d\n",(ptr->sockAddr).srcPort);
		//dbg("Project3TDbg","destIP %d\n",(ptr->sockAddr).destAddr);
		//dbg("Project3TDbg","destPort %d\n",(ptr->sockAddr).destPort);
		sockList[(uint16_t)fd].state=SOCK_CLOSED;
		sockList[(uint16_t)fd].lastByteSent=0;
		sockList[(uint16_t)fd].lastByteWritten=0;
		sockList[(uint16_t)fd].lastByteAck=0;
		sockList[(uint16_t)fd].lastByteRec=0;
		sockList[(uint16_t)fd].lastByteRead=0;
		sockList[(uint16_t)fd].lastByteExpected=32;
		//sockList[(uint16_t)fd].firstTime=1;
		sockList[(uint16_t)fd].isnA_native=0;//lastByteSent
		sockList[(uint16_t)fd].isnB_native=0;//lastByteAck
		sockList[(uint16_t)fd].isnA_foreign=0;//lastByteRec
		sockList[(uint16_t)fd].isnB_foreign=0;//lastByteRead
		sockList[(uint16_t)fd].effectiveWindow=128;
		buffers=(call Appy.getBufferAddr());
		buffers[(uint16_t)fd].length=0;
		buffers[(uint16_t)fd].marker=0;
		buffers[(uint16_t)fd].lengthRec=0;
		buffers[(uint16_t)fd].markerRec=0;
		//buffers[(uint16_t)fd].markerTransmit=0;
		return SUCCESS;	
	}
   command socket_t Transport.accept(socket_t fd, socket_addr_t * addr){
   	//dbg("Project3TDbg","fd %d\n",(uint16_t)fd);
   	transport tcpPack3;
   	pack sendPackage3;
   	if(fd==(uint16_t)-1){
   		makeTcpPacket(&tcpPack3,addr->srcPort,addr->destPort,0,0,TRANSPORT_FIN,0,0,&repeat);
   		makePack(&sendPackage3, TOS_NODE_ID, addr->srcAddr, MAX_TTL,
                     PROTOCOL_TCP, tcpPack3.seq, &tcpPack3, sizeof(tcpPack3));
               		
               		call FloodSend.HistoryPushBack(one);

               		//call FS.SimpleSendSend(sendPackage,AM_BROADCAST_ADDR);
               		call FloodSend.handlePingReply(&sendPackage3,one);
   		return NULL_SOCKET;
   	}
   	//dbg("Project3TDbg","fd %d\n",(uint16_t)fd);
   	if(sockList[(uint16_t)fd].state==SOCK_LISTEN){
   		newSock=call Transport.socket();
   		handle=call Transport.bind(newSock, addr);
   		sockList[(uint16_t)newSock].state=SOCK_SYN_RCVD;
   		makeTcpPacket(&tcpPack3,addr->srcPort,addr->destPort,0,0,(TRANSPORT_SYN|TRANSPORT_ACK),0,0,&repeat);
   		makePack(&sendPackage3, TOS_NODE_ID, addr->srcAddr, MAX_TTL,
                     PROTOCOL_TCP, tcpPack3.seq, &tcpPack3, sizeof(tcpPack3));
               		
               		call FloodSend.HistoryPushBack(one);

               		//call FS.SimpleSendSend(sendPackage,AM_BROADCAST_ADDR);
               		call Appy.insertFD((uint16_t)newSock);
               		call FloodSend.handlePingReply(&sendPackage3,one);
   		return newSock;	
   	}
   	
   	makeTcpPacket(&tcpPack3,addr->srcPort,addr->destPort,0,0,TRANSPORT_FIN,0,0,&repeat);
   	makePack(&sendPackage3, TOS_NODE_ID, addr->srcAddr, MAX_TTL,
                     PROTOCOL_TCP, tcpPack3.seq, &tcpPack3, sizeof(tcpPack3));
               		
               		call FloodSend.HistoryPushBack(one);

               		//call FS.SimpleSendSend(sendPackage,AM_BROADCAST_ADDR);
               		call FloodSend.handlePingReply(&sendPackage3,one);
   	return NULL_SOCKET;	
   }
   command uint16_t Transport.write(uint16_t fd, uint8_t *buff, uint16_t bufflen){//write to send buffer
   	uint16_t numBytesWritten;
   	uint16_t i;
   	uint16_t pos;
   	//uint8_t *ptr;
   	/*if(sockList[(uint16_t)fd].lastByteAck==sockList[(uint16_t)fd].lastByteWritten 
   	//&& sockList[(uint16_t)fd].lastByteAck==sockList[(uint16_t)fd].lastByteSent 
   	&& sockList[(uint16_t)fd].firstTime==0){return 0;}*/
   	pos=sockList[fd].lastByteWritten;
   	dbg("Project3TDbg","buff len %d\n",bufflen);
   	//dbg("Project3TDbg","last byte written in write() %d\n",pos);
   	i=0;
   	do{
   		sockList[fd].sendBuff[pos]=buff[i];
   		//sockList[(uint16_t)fd].firstTime=0;
   		dbg_clear("Project3TDbg"," %d ",buff[i]);
   		i++;
   		pos++;
   		pos=pos%SOCKET_SEND_BUFFER_SIZE;
   		/*if(pos==SOCKET_SEND_BUFFER_SIZE){
   			pos=0;
   		}*/   		
   	}while((pos!=sockList[fd].lastByteAck/*|buffers[(uint16_t)fd].length>buffers[(uint16_t)fd].markerTransmit*/) && i<bufflen);
   	dbg("Project3TDbg","\n lastByteAck %d\n",sockList[fd].lastByteAck);   	
   	numBytesWritten=i;
   	//dbg("Project3TDbg","ending Pos %d\n",pos);
   	sockList[fd].lastByteWritten=pos;
   	//dbg("Project3TDbg","numBytesWritten %d\n",numBytesWritten);
   	printSendBuffer(fd);
   	return numBytesWritten;	
   }
   
   command error_t Transport.receive(pack* package){
   	appData* operator;
   	transport *analyze;
   	uint8_t *cmdParams;
   	uint8_t portSrc;
   	uint8_t portDest;
   	uint8_t dest;
   	socket_addr_t tempAddr2;
   	socket_t sock2;
   	transport tcpPack2;
   	pack sendPackage2;
   	uint8_t advertisedWindow;
   	//socket_t sock;
   	//socket_addr_t tempAddr;
   	//error_t handle;
   	//pair one;
   	//transport tcpPack;
   	//pack sendPackage;
   	uint16_t listenHandle;
   	uint16_t reference;
   	uint8_t *buffIter;
   	uint16_t minimum;
   	
   	numRec++;
   	if(package->protocol==PROTOCOL_CMD){
   		switch(getCMD((uint8_t *) &package->payload, sizeof(package->payload))){
   			case CMD_TEST_SERVER:
   					call Appy.handleTestServer(package);   					
                  	return SUCCESS;
                  	break;
                  case CMD_TEST_CLIENT:
                  	call Appy.handleTestClient(package);
                  	return SUCCESS;
                  break;
                  case CMD_TEST_CLIENT_END:
                  	call Appy.handleTestClientEnd(package);
                  	return SUCCESS;
                  	break;
                  case CMD_HELLO:
                  	call Appy.handleHello(package);
                  	return SUCCESS;
                  	break;
                  case CMD_WISP:
                  	call Appy.handleWisp(package);
                  	return SUCCESS;
                  	break;
                  case CMD_MSG:
                  	call Appy.handleMsg(package);
                  	return SUCCESS;
                  	break;
                  case CMD_LISTUSR:
                  	call Appy.handleListUsr(package);
                  	return SUCCESS;
                  	break;
   		}
   		return FAIL;
   	}
   	else{
   		analyze=package->payload;
   		//dbg("Project3TDbg","transport message length %d\n",analyze->length);
   		//dbg("Project3TDbg","case %d\n",analyze->flags);
   		switch(analyze->flags){
   			case TRANSPORT_SYN:
   				dbg("Project3TDbg","Got SYN SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n",package->src,analyze->srcPort,package->dest,analyze->destPort);
   				tempAddr2.srcPort=analyze->srcPort;
   				tempAddr2.destPort=analyze->destPort;
   				tempAddr2.srcAddr=package->src;
   				tempAddr2.destAddr=package->dest;
   				sock2=call Transport.searchNewSock_default(&tempAddr2);
   				//dbg("Project3TDbg","exiting 2\n");
   				//sock=searchNewSock_listen(&tempAddr);
   				//dbg("Project3TDbg","sock %d\n",(uint16_t)sock);
   				//dbg("Project3TDbg","mySock %d\n",sock);
   				if(sock2==(uint16_t)-1){//if not found in accept
   					sock2=searchNewSock_listen(&tempAddr2);
   					sock2=call Transport.accept(sock2,&tempAddr2);
   					//if(sock2!=NULL_SOCKET){
   						//call Appy.insertFD((uint16_t)sock2);
   						//feed fd here for user mapping into last element
   					//}
   					
   					/*
   					dbg("Project3TDbg","Calling accept() for new socket YOLO %d\n",sock2);
   					if(sock2!=NULL_SOCKET){
   						analyze->flags=TRANSPORT_SYN|TRANSPORT_ACK;
               			dbg("Project3TDbg", "Sending SYN ACK SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n",TOS_NODE_ID,tempAddr2.srcPort,package->src,tempAddr2.destPort);
               		}
               		else{
               			analyze->flags=TRANSPORT_FIN;
               			dbg("Project3TDbg", "Sending FIN Rejection SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n",TOS_NODE_ID,tempAddr2.srcPort,package->src,tempAddr2.destPort);
               		}//add makeTCPack syn ack
               		
               		makeTcpPacket(&tcpPack2,tempAddr2.srcPort,tempAddr2.destPort,0,0,analyze->flags,0,1,&repeat);
               		makePack(&sendPackage2, TOS_NODE_ID, package->src, MAX_TTL,
                     PROTOCOL_TCP, package->seq, (uint8_t *) package->payload, sizeof(package->payload));
               		
               		call FloodSend.HistoryPushBack(one);

               		//call FS.SimpleSendSend(sendPackage,AM_BROADCAST_ADDR);
               		call FloodSend.handlePingReply(&sendPackage2,one);*/
               	}
               	else if(sockList[(uint16_t)sock2].state==SOCK_SYN_RCVD){
               		analyze->flags=TRANSPORT_SYN|TRANSPORT_ACK;
               		dbg("Project3TDbg", "Sending SYN ACK already accepted\n");//add makeTCPack syn ack
               		
               		makeTcpPacket(&tcpPack2,tempAddr2.srcPort,tempAddr2.destPort,0,0,(TRANSPORT_SYN|TRANSPORT_ACK),0,1,&repeat);
               		makePack(&sendPackage2, TOS_NODE_ID, package->src, MAX_TTL,
                     PROTOCOL_TCP, tcpPack2.seq, &tcpPack2, sizeof(tcpPack2));
               		
               		call FloodSend.HistoryPushBack(one);

               		//call FS.SimpleSendSend(sendPackage,AM_BROADCAST_ADDR);
               		call FloodSend.handlePingReply(&sendPackage2,one);
               	}	
   			break;
   			case TRANSPORT_FIN:
   				dbg("Project3TDbg","Got FIN SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n",package->src,analyze->srcPort,package->dest,analyze->destPort);
   				
   				tempAddr2.srcPort=analyze->srcPort;
   				tempAddr2.destPort=analyze->destPort;
   				tempAddr2.srcAddr=package->src;
   				tempAddr2.destAddr=package->dest;
   				sock2=call Transport.searchNewSock_default(&tempAddr2);
   				
   				//do condition checking here
   				if((uint16_t)sock2==(uint16_t)-1){
   					
   				}
   				else if(sockList[(uint16_t)sock2].state==SOCK_ESTABLISHED){
   					//handle=call Transport.close(sock);
   					sockList[(uint16_t)sock2].state=SOCK_FIN_WAIT_2;
   					//dbg("Project3TDbg","changed state to SOCK_FIN_WAIT yolo\n");
   					analyze->flags=TRANSPORT_FIN|TRANSPORT_ACK;
               		dbg("Project3TDbg","Sending FIN ACK SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n",TOS_NODE_ID,tempAddr2.srcPort,package->src,tempAddr2.destPort);//add makeTCPack fin ack
               		makeTcpPacket(&tcpPack2,tempAddr2.srcPort,tempAddr2.destPort,0,0,(TRANSPORT_FIN|TRANSPORT_ACK),0,1,&repeat);
               		makePack(&sendPackage2, TOS_NODE_ID, package->src, MAX_TTL,
                     PROTOCOL_TCP, tcpPack2.seq, &tcpPack2, sizeof(tcpPack2));
               		
               		call FloodSend.HistoryPushBack(one);

               		//call FS.SimpleSendSend(sendPackage,AM_BROADCAST_ADDR);
               		call FloodSend.handlePingReply(&sendPackage2,one);
               	}
               	else if(sockList[(uint16_t)sock2].state==SOCK_SYN_SENT){
               		dbg("Project3TDbg","Connection Rejected YOLO\n");
               		handle=call Transport.release(sock2);
               	}
               	else if(sockList[(uint16_t)sock2].state==SOCK_FIN_WAIT_2){
               		analyze->flags=TRANSPORT_FIN|TRANSPORT_ACK;
               		dbg("Project3TDbg","Sending FIN ACK Again SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n",TOS_NODE_ID,tempAddr2.srcPort,package->src,tempAddr2.destPort);//add makeTCPack fin ack
               		makeTcpPacket(&tcpPack2,tempAddr2.srcPort,tempAddr2.destPort,0,0,(TRANSPORT_FIN|TRANSPORT_ACK),0,1,&repeat);
               		makePack(&sendPackage2, TOS_NODE_ID, package->src, MAX_TTL,
                     PROTOCOL_TCP, tcpPack2.seq, &tcpPack2, sizeof(tcpPack2));
               		
               		call FloodSend.HistoryPushBack(one);

               		//call FS.SimpleSendSend(sendPackage,AM_BROADCAST_ADDR);
               		call FloodSend.handlePingReply(&sendPackage2,one);
               	}
   			break;
   			case TRANSPORT_ACK:
   				dbg("Project3TDbg","Got ACK SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n",package->src,analyze->srcPort,package->dest,analyze->destPort);
   				
   				tempAddr2.srcPort=analyze->srcPort;
   				tempAddr2.destPort=analyze->destPort;
   				tempAddr2.srcAddr=package->src;
   				tempAddr2.destAddr=package->dest;
   				sock2=call Transport.searchNewSock_default(&tempAddr2);
   				//dbg("Project3TDbg","exiting 4\n");
   				//dbg("Project3TDbg","state %d\n",sockList[(uint16_t)sock].state);
   				if((uint16_t)sock2!=(uint16_t)-1){
   					if(sockList[(uint16_t)sock2].state==SOCK_SYN_RCVD){
   						sockList[(uint16_t)sock2].state=SOCK_ESTABLISHED;
   						dbg("Project3TDbg","Server Connection Established: SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n",package->src,analyze->srcPort,package->dest,analyze->destPort);
   						//dbg("Project3TDbg","state %d\n",sockList[(uint16_t)sock].state);
   					}
   					else if(sockList[(uint16_t)sock2].state==SOCK_FIN_WAIT_2){
   						//sockList[(uint16_t)sock].state=SOCK_CLOSED;
   						handle=call Transport.release(sock2);
   						dbg("Project3TDbg","Server Connection Terminated: SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n",package->src,analyze->srcPort,package->dest,analyze->destPort);
   					}	
   				}
   			break;
   			case (TRANSPORT_SYN|TRANSPORT_ACK):
   				analyze->flags=TRANSPORT_ACK;
   				dbg("Project3TDbg","Got SYN ACK SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n",package->dest,analyze->srcPort,package->src,analyze->destPort);
               	
               
                tempAddr2.srcPort=analyze->srcPort;
   				tempAddr2.destPort=analyze->destPort;
   				tempAddr2.srcAddr=package->dest;
   				tempAddr2.destAddr=package->src;
   				sock2=call Transport.searchNewSock_default(&tempAddr2);
   				//dbg("Project3TDbg","exiting 5\n");
                //dbg("Project3TDbg","sock is again %d\n",(uint16_t)sock);
                if((uint16_t)sock2!=(uint16_t)-1){
                	if(sockList[(uint16_t)sock2].state==SOCK_SYN_SENT){
                		dbg("Project3TDbg","Client Connection Established: SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n",package->dest,analyze->srcPort,package->src,analyze->destPort);
                		sockList[(uint16_t)sock2].state=SOCK_ESTABLISHED;
                	}
                	if(sockList[(uint16_t)sock2].state==SOCK_ESTABLISHED | sockList[(uint16_t)sock2].state==SOCK_FIN_WAIT_1|sockList[(uint16_t)sock2].state==SOCK_CLOSE_WAIT){
                		dbg("Project3TDbg","Sending ACK SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n",TOS_NODE_ID,tempAddr2.srcPort,package->src,tempAddr2.destPort);
                		
                		//add makeTCPack ack
                		//dbg("Project3TDbg","tempAddr2.srcPort %d\n",tempAddr2.srcPort);
                		//dbg("Project3TDbg","tempAddr2.destPort %d\n",tempAddr2.destPort);
                		makeTcpPacket(&tcpPack2,tempAddr2.srcPort,tempAddr2.destPort,0,0,(TRANSPORT_ACK),0,1,&repeat);
               			//dbg("Project3TDbg","got here before before before\n");
               			makePack(&sendPackage2, TOS_NODE_ID, package->src, MAX_TTL,
                     PROTOCOL_TCP, tcpPack2.seq, &tcpPack2, sizeof(tcpPack2));
               			//dbg("Project3TDbg","got here before before\n");
               			call FloodSend.HistoryPushBack(one);
						//dbg("Project3TDbg","got here before\n");
               			//call FS.SimpleSendSend(sendPackage,AM_BROADCAST_ADDR);
               			call FloodSend.handlePingReply(&sendPackage2,one);
               			//dbg("Project3TDbg","got hjere\n");
               		}
                }
               
                
               	
               	//do data delivery here
               	
   			break;
   			case TRANSPORT_DATA:
   				dbg("Project3TDbg","Got DATA SrcAddr %d SrcPort %d DestAddr %d DestPort %d length %d\n",package->src,analyze->srcPort,package->dest,analyze->destPort,analyze->length);
   				//send ack back confirming data
   				//read to app buffer from receive buffer
   				//if tos node id is dest addr, swap with src addr, meaning data came from server to client
   				tempAddr2.srcPort=analyze->srcPort;
   				tempAddr2.destPort=analyze->destPort;
   				tempAddr2.srcAddr=package->src;
   				tempAddr2.destAddr=package->dest;
   				
   				sock2=call Transport.searchNewSock_default(&tempAddr2);
   				if((uint16_t)sock2!=(uint16_t)-1){//data from client/server
   					//lastbyterec is isnaforeign, lastbyteread is isnbforeign
   					//
   					//dbg("Project3TDbg","analyze->seq %d isnA_foreign %d analyze->length %d\n",analyze->seq,sockList[(uint16_t)sock2].isnA_foreign,analyze->length);
   					dbg("Project3TDbg","before seq %d isnA_foreign %d\n",analyze->seq,sockList[(uint16_t)sock2].isnA_foreign);
   					printRecBuffer((uint16_t)sock2);
   					if(analyze->seq-sockList[(uint16_t)sock2].isnA_foreign<=32 && analyze->seq-sockList[(uint16_t)sock2].isnA_foreign>0){//new data to receive
   						reference=sockList[(uint16_t)sock2].lastByteRec;
   						buffIter=sockList[(uint16_t)sock2].recBuff;
   						listenHandle=0;
   						while(listenHandle< analyze->length){
   							buffIter[reference%SOCKET_RECEIVE_BUFFER_SIZE]=analyze->payload[listenHandle];
   							reference++;
   							listenHandle++;
   							sockList[(uint16_t)sock2].lastByteRec++;
   							sockList[(uint16_t)sock2].lastByteRec=sockList[(uint16_t)sock2].lastByteRec%SOCKET_RECEIVE_BUFFER_SIZE;
   							sockList[(uint16_t)sock2].isnA_foreign++;
   							sockList[(uint16_t)sock2].lastByteExpected++;
   							sockList[(uint16_t)sock2].lastByteExpected=sockList[(uint16_t)sock2].lastByteExpected%SOCKET_RECEIVE_BUFFER_SIZE;
   						}
   						dbg("Project3TDbg","check for here\n");
   						sockList[(uint16_t)sock2].isnB_foreign+=(call Transport.read((uint16_t)sock2,buffers[(uint16_t)sock2].dataRec+buffers[(uint16_t)sock2].lengthRec,analyze->length));
   						buffers[(uint16_t)sock2].lengthRec=sockList[(uint16_t)sock2].isnB_foreign/2;
   						dbg("Project3TDbg","after\n");
   						printRecBuffer((uint16_t)sock2);
   						advertisedWindow=SOCKET_RECEIVE_BUFFER_SIZE-((sockList[(uint16_t)sock2].isnA_foreign+32-32)-sockList[(uint16_t)sock2].isnB_foreign);
   						//process buffers here
   						
   						
   						dbg("Project3TDbg","advertisedWindow %d\n",advertisedWindow);
   						dbg("Project3TDbg","Sending DATA ACK SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n",TOS_NODE_ID,analyze->srcPort,package->src,analyze->destPort);
   						makeTcpPacket(&tcpPack,analyze->srcPort,analyze->destPort,0,sockList[(uint16_t)sock2].isnA_foreign,(TRANSPORT_DATA|TRANSPORT_ACK),advertisedWindow,analyze->length,&repeat);
   						makePack(&sendPackage,TOS_NODE_ID,package->src,MAX_TTL,PROTOCOL_TCP,tcpPack.seq,&tcpPack,sizeof(tcpPack));
   						
   						call Appy.processData(tempAddr2,package->seq);
   						call FloodSend.handlePing(&sendPackage,one);
   					}
   					else if(analyze->seq-sockList[(uint16_t)sock2].isnA_foreign<=0){//process the packets anyways to ensure acks get through
   						//dbg("Project3TDbg","after\n");
   						//printRecBuffer((uint16_t)sock2);
   						advertisedWindow=SOCKET_RECEIVE_BUFFER_SIZE-((sockList[(uint16_t)sock2].isnA_foreign+32-32)-sockList[(uint16_t)sock2].isnB_foreign);
   						dbg("Project3TDbg","advertisedWindow %d\n",advertisedWindow);
   						dbg("Project3TDbg","Sending DATA ACK SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n",TOS_NODE_ID,analyze->srcPort,package->src,analyze->destPort);
   						makeTcpPacket(&tcpPack,analyze->srcPort,analyze->destPort,0,sockList[(uint16_t)sock2].isnA_foreign,(TRANSPORT_DATA|TRANSPORT_ACK),advertisedWindow,analyze->length,&repeat);
   						makePack(&sendPackage,TOS_NODE_ID,package->src,MAX_TTL,PROTOCOL_TCP,tcpPack.seq,&tcpPack,sizeof(tcpPack));
   						call FloodSend.handlePing(&sendPackage,one);
   					} 					
   				}
   				
   				tempAddr2.srcAddr=package->dest;
   				tempAddr2.destAddr=package->src;
   				sock2=call Transport.searchNewSock_default(&tempAddr2);
                if((uint16_t)sock2!=(uint16_t)-1){//data from server/client
   					//lastbyterec is isnaforeign, lastbyteread is isnbforeign
   					//
   					//dbg("Project3TDbg","analyze->seq %d isnA_foreign %d analyze->length %d\n",analyze->seq,sockList[(uint16_t)sock2].isnA_foreign,analyze->length);
   					dbg("Project3TDbg","before\n");
   					printRecBuffer((uint16_t)sock2);
   					if(analyze->seq-sockList[(uint16_t)sock2].isnA_foreign<=32 && analyze->seq-sockList[(uint16_t)sock2].isnA_foreign>0){//new data to receive
   						reference=sockList[(uint16_t)sock2].lastByteRec;
   						buffIter=sockList[(uint16_t)sock2].recBuff;
   						listenHandle=0;
   						while(listenHandle< analyze->length){
   							buffIter[reference%SOCKET_RECEIVE_BUFFER_SIZE]=analyze->payload[listenHandle];
   							reference++;
   							listenHandle++;
   							sockList[(uint16_t)sock2].lastByteRec++;
   							sockList[(uint16_t)sock2].lastByteRec=sockList[(uint16_t)sock2].lastByteRec%SOCKET_RECEIVE_BUFFER_SIZE;
   							sockList[(uint16_t)sock2].isnA_foreign++;
   							sockList[(uint16_t)sock2].lastByteExpected++;
   							sockList[(uint16_t)sock2].lastByteExpected=sockList[(uint16_t)sock2].lastByteExpected%SOCKET_RECEIVE_BUFFER_SIZE;
   						}
   						sockList[(uint16_t)sock2].isnB_foreign+=(call Transport.read((uint16_t)sock2,buffers[(uint16_t)sock2].dataRec+buffers[(uint16_t)sock2].lengthRec,analyze->length));
   						buffers[(uint16_t)sock2].lengthRec=sockList[(uint16_t)sock2].isnB_foreign/2;
   						dbg("Project3TDbg","after\n");
   						printRecBuffer((uint16_t)sock2);
   						advertisedWindow=SOCKET_RECEIVE_BUFFER_SIZE-((sockList[(uint16_t)sock2].isnA_foreign+32-32)-sockList[(uint16_t)sock2].isnB_foreign);
   						//process buffers here
   						
   						
   						dbg("Project3TDbg","advertisedWindow %d\n",advertisedWindow);
   						dbg("Project3TDbg","Sending DATA ACK SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n",TOS_NODE_ID,analyze->srcPort,package->src,analyze->destPort);
   						makeTcpPacket(&tcpPack,analyze->srcPort,analyze->destPort,0,sockList[(uint16_t)sock2].isnA_foreign,(TRANSPORT_DATA|TRANSPORT_ACK),advertisedWindow,analyze->length,&repeat);
   						makePack(&sendPackage,TOS_NODE_ID,package->src,MAX_TTL,PROTOCOL_TCP,tcpPack.seq,&tcpPack,sizeof(tcpPack));
   						
   						call Appy.processData(tempAddr2,package->seq);
   						call FloodSend.handlePing(&sendPackage,one);
   					}
   					else if(analyze->seq-sockList[(uint16_t)sock2].isnA_foreign<=0){//process the packets anyways to ensure acks get through
   						//dbg("Project3TDbg","after\n");
   						//printRecBuffer((uint16_t)sock2);
   						advertisedWindow=SOCKET_RECEIVE_BUFFER_SIZE-((sockList[(uint16_t)sock2].isnA_foreign+32-32)-sockList[(uint16_t)sock2].isnB_foreign);
   						dbg("Project3TDbg","advertisedWindow %d\n",advertisedWindow);
   						dbg("Project3TDbg","Sending DATA ACK SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n",TOS_NODE_ID,analyze->srcPort,package->src,analyze->destPort);
   						makeTcpPacket(&tcpPack,analyze->srcPort,analyze->destPort,0,sockList[(uint16_t)sock2].isnA_foreign,(TRANSPORT_DATA|TRANSPORT_ACK),advertisedWindow,analyze->length,&repeat);
   						makePack(&sendPackage,TOS_NODE_ID,package->src,MAX_TTL,PROTOCOL_TCP,tcpPack.seq,&tcpPack,sizeof(tcpPack));
   						call FloodSend.handlePing(&sendPackage,one);
   					} 					
   				}
   			break;	
   			case (TRANSPORT_DATA|TRANSPORT_ACK):
   				//write to send buffer from app buffer
   				dbg("Project3TDbg","Got DATA ACK SrcAddr %d SrcPort %d DestAddr %d DestPort %d ack %d\n",package->src,analyze->srcPort,package->dest,analyze->destPort,analyze->ack);
   				tempAddr2.srcPort=analyze->srcPort;
   				tempAddr2.destPort=analyze->destPort;
   				tempAddr2.srcAddr=package->dest;
   				tempAddr2.destAddr=package->src;
   				sock2=call Transport.searchNewSock_default(&tempAddr2);
   				if((uint16_t)sock2!=(uint16_t)-1){//data ack from client/server
   					//dbg("Project3TDbg","analyze->ack %d isnB_native %d analyze->length %d\n",analyze->ack,sockList[(uint16_t)sock2].isnB_native,analyze->length);
   					//dbg("Project3TDbg","before\n");
   					//printSendBuffer((uint16_t)sock2);
   					
   					if(analyze->ack>sockList[(uint16_t)sock2].isnB_native){//add new ack
   						//do minimum here with buffer length for end case
   						//if(analyze->ack-sockList[(uint16_t)sock2].isnB_native < buffers[(uint16_t)sock2].length*2-sockList[(uint16_t)sock2].isnB_native){
   							minimum=analyze->ack-sockList[(uint16_t)sock2].isnB_native;	
   							buffers[(uint16_t)sock2].marker+=(call Transport.write((uint16_t)sock2,buffers[(uint16_t)sock2].data+buffers[(uint16_t)sock2].marker,minimum))/2;
   							sockList[(uint16_t)sock2].isnB_native=analyze->ack;
   							sockList[(uint16_t)sock2].lastByteAck=sockList[(uint16_t)sock2].isnB_native;
   						
   							sockList[(uint16_t)sock2].lastByteAck=sockList[(uint16_t)sock2].lastByteAck%SOCKET_SEND_BUFFER_SIZE;
   							
   						//}
   						//else{
   							//minimum=buffers[(uint16_t)sock2].length-sockList[(uint16_t)sock2].isnB_native;
   							//buffers[(uint16_t)sock2].marker+=(call Transport.write(sock2,buffers[(uint16_t)sock2].data+buffers[(uint16_t)sock2].marker,minimum))/2;
   							//sockList[(uint16_t)sock2].isnB_native=buffers[(uint16_t)sock2].length*2;
   							//sockList[(uint16_t)sock2].lastByteAck=sockList[(uint16_t)sock2].isnB_native;
   						
   							//sockList[(uint16_t)sock2].lastByteAck=sockList[(uint16_t)sock2].lastByteAck%SOCKET_SEND_BUFFER_SIZE;
   						//}
   						
   						
   					}
   					dbg("Project3TDbg","comparing isnbnative %d length %d\n",sockList[(uint16_t)sock2].isnB_native,buffers[(uint16_t)sock2].length*2);
   							if(sockList[(uint16_t)sock2].isnB_native>=buffers[(uint16_t)sock2].length*2){
   								call Transport.resetSendBuff((uint16_t)sock2);
   							}
   							
   					sockList[(uint16_t)sock2].effectiveWindow=analyze->window-(sockList[(uint16_t)sock2].isnA_native-sockList[(uint16_t)sock2].isnB_native);
   					dbg("Project3TDbg","after effective window size %d\n",sockList[(uint16_t)sock2].effectiveWindow);
   					//printSendBuffer((uint16_t)sock2);
   					
   				}
   				
   				tempAddr2.srcAddr=package->src;
   				tempAddr2.destAddr=package->dest;
   				sock2=call Transport.searchNewSock_default(&tempAddr2);
   				if((uint16_t)sock2!=(uint16_t)-1){//data ack from server/client
   					//dbg("Project3TDbg","analyze->ack %d isnB_native %d analyze->length %d\n",analyze->ack,sockList[(uint16_t)sock2].isnB_native,analyze->length);
   					//dbg("Project3TDbg","before\n");
   					//printSendBuffer((uint16_t)sock2);
   					
   					if(analyze->ack>sockList[(uint16_t)sock2].isnB_native){//add new ack
   						//do minimum here with buffer length for end case
   						//if(analyze->ack-sockList[(uint16_t)sock2].isnB_native < buffers[(uint16_t)sock2].length*2-sockList[(uint16_t)sock2].isnB_native){
   							minimum=analyze->ack-sockList[(uint16_t)sock2].isnB_native;	
   							buffers[(uint16_t)sock2].marker+=(call Transport.write((uint16_t)sock2,buffers[(uint16_t)sock2].data+buffers[(uint16_t)sock2].marker,minimum))/2;
   							sockList[(uint16_t)sock2].isnB_native=analyze->ack;
   							sockList[(uint16_t)sock2].lastByteAck=sockList[(uint16_t)sock2].isnB_native;
   						
   							sockList[(uint16_t)sock2].lastByteAck=sockList[(uint16_t)sock2].lastByteAck%SOCKET_SEND_BUFFER_SIZE;
   							
   						//}
   						//else{
   							//minimum=buffers[(uint16_t)sock2].length-sockList[(uint16_t)sock2].isnB_native;
   							//buffers[(uint16_t)sock2].marker+=(call Transport.write(sock2,buffers[(uint16_t)sock2].data+buffers[(uint16_t)sock2].marker,minimum))/2;
   							//sockList[(uint16_t)sock2].isnB_native=buffers[(uint16_t)sock2].length*2;
   							//sockList[(uint16_t)sock2].lastByteAck=sockList[(uint16_t)sock2].isnB_native;
   						
   							//sockList[(uint16_t)sock2].lastByteAck=sockList[(uint16_t)sock2].lastByteAck%SOCKET_SEND_BUFFER_SIZE;
   						//}
   						
   						
   					}
   					dbg("Project3TDbg","comparing isnbnative %d length %d\n",sockList[(uint16_t)sock2].isnB_native,buffers[(uint16_t)sock2].length*2);
   							if(sockList[(uint16_t)sock2].isnB_native>=buffers[(uint16_t)sock2].length*2){
   								call Transport.resetSendBuff((uint16_t)sock2);
   							}
   							
   					sockList[(uint16_t)sock2].effectiveWindow=analyze->window-(sockList[(uint16_t)sock2].isnA_native-sockList[(uint16_t)sock2].isnB_native);
   					dbg("Project3TDbg","after effective window size %d\n",sockList[(uint16_t)sock2].effectiveWindow);
   					//printSendBuffer((uint16_t)sock2);
   					
   				}
   			break;
   			case (TRANSPORT_FIN|TRANSPORT_ACK):
   				analyze->flags=TRANSPORT_ACK;
   				dbg("Project3TDbg","Got FIN ACK SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n",package->dest,analyze->srcPort,package->src,analyze->destPort);
               	//dbg("Project3TDbg", "Sending ACK \n");
               	
               	tempAddr2.srcPort=analyze->srcPort;
   				tempAddr2.destPort=analyze->destPort;
   				tempAddr2.srcAddr=package->dest;
   				tempAddr2.destAddr=package->src;
   				sock2=call Transport.searchNewSock_default(&tempAddr2);
   				//dbg("Project3TDbg","exiting 6\n");
   				//dbg("Project3TDbg","sock2 %d\n",(uint16_t)sock2);
   				//dbg("Project3TDbg","termination sock %d flag %d\n",(uint16_t)sock,sockList[(uint16_t)sock].state);
   				if((uint16_t)sock2!=(uint16_t)-1){
   					if(sockList[(uint16_t)sock2].state==SOCK_FIN_WAIT_1){
   						sockList[(uint16_t)sock2].state=SOCK_CLOSE_WAIT;
   						//wait for a bit using wait, and then do this:
   						//release();
   						//handle=call Transport.release(sock);
   						//dbg("Project3TDbg","connection terminated on client end\n");
   					}
   					if(sockList[(uint16_t)sock2].state==SOCK_CLOSE_WAIT){//add makeTCPack ack
   						dbg("Project3TDbg","Sending ACK SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n",TOS_NODE_ID,tempAddr2.srcPort,package->src,tempAddr2.destPort);
   						makeTcpPacket(&tcpPack2,tempAddr2.srcPort,tempAddr2.destPort,0,0,(TRANSPORT_ACK),0,1,&repeat);
   						makePack(&sendPackage2, TOS_NODE_ID, package->src, MAX_TTL,
                     PROTOCOL_TCP, tcpPack2.seq, &tcpPack2, sizeof(tcpPack2));
               		
               			call FloodSend.HistoryPushBack(one);

               			//call FS.SimpleSendSend(sendPackage,AM_BROADCAST_ADDR);
               			call FloodSend.handlePingReply(&sendPackage2,one);
   					}
   				}
               	
               	
   			break;
   		}
   	}
   	return SUCCESS;	
   }
   command uint16_t Transport.read(uint16_t fd, uint8_t *buff, uint16_t bufflen){//read from the receive buffer
   	uint16_t i;
   	uint16_t pos;
   	i=0;
   	pos=sockList[fd].lastByteRead;
   	dbg("Project3TDbg","lastByteRead in read() %d\n",sockList[fd].lastByteRead);
   	while(pos!=sockList[fd].lastByteRec && i<bufflen){
   		buff[i]=sockList[fd].recBuff[pos];
   		dbg_clear("Project3TDbg"," %d ",buff[i]);
   		i++;
   		pos++;
   		pos=pos%SOCKET_RECEIVE_BUFFER_SIZE;
   	}
   	
   	sockList[fd].lastByteRead=pos;
   	dbg("Project3TDbg","\n lastByteRec %d\n",sockList[fd].lastByteRec);
   	//dbg("Project3TDbg","final pos %d\n",pos);
   	//dbg("Project3TDbg","number of bytes read %d\n",i);
   	return i;	
   }
   
   command uint16_t Transport.listen(socket_t fd){
   	sockList[(uint16_t)fd].state=SOCK_LISTEN;
   	return 0;	
   }

   command error_t Transport.connect(socket_t fd, socket_addr_t * addr){
   	transport tcpPack3;
   	pack sendPackage3;
   	//uint8_t eye;
   	//put data into send buffer
   	sockList[(uint16_t)fd].state=SOCK_SYN_SENT;
   	//eye=0;
   	//dbg("Project3TDbg","srcPort %d destPort %d srcAddr %d destAddr %d\n",addr->srcPort,addr->destPort,addr->srcAddr,addr->destAddr);
   	makeTcpPacket(&tcpPack3,addr->srcPort,addr->destPort,0,0,TRANSPORT_SYN,0,0,fd);
   	//dbg("Project3TDbg","urp?\n");
    makePack(&sendPackage3,addr->srcAddr,addr->destAddr,MAX_TTL,PROTOCOL_TCP,tcpPack3.seq,&tcpPack3,sizeof(tcpPack3));
	//dbg("Project3TDbg","urp2\n");
	call FloodSend.handlePing(&sendPackage3,one);
   	
   	return SUCCESS;	
   }
   command error_t Transport.close(socket_t fd){
   	transport tcpPack3;
   	pack sendPackage3;
   	if(fd==(uint16_t)-1){return FAIL;}
   	else{
   		sockList[(uint16_t)fd].state=SOCK_FIN_WAIT_1;
   		makeTcpPacket(&tcpPack3,sockList[(uint16_t)fd].sockAddr.srcPort,sockList[(uint16_t)fd].sockAddr.destPort,0,0,TRANSPORT_FIN,0,0,fd);
        makePack(&sendPackage3,TOS_NODE_ID,sockList[(uint16_t)fd].sockAddr.destAddr,MAX_TTL,PROTOCOL_TCP,tcpPack3.seq,&tcpPack3,sizeof(tcpPack3));
        call FloodSend.handlePing(&sendPackage3,one);	
   	}
   	return SUCCESS;	
   }

   command socket_t Transport.socket(){
   	uint16_t i;
   	//dbg("Project3TDbg","size in socket() is %d\n",size);
   	if(size==0){
   		size++;	
   		return (socket_t)0;
   	}
   	else{
   		for(i=0;i<size;i++){
   			//dbg("Project3TDbg","socket() iteration %d",i);
   			if(sockList[i].state==SOCK_CLOSED){
   				return (socket_t)i;
   			}
   		}
   		size++;
   		return (socket_t)(size-1);
   	}
   	//return SUCCESS;	
   }
   command error_t Transport.release(socket_t fd){
   	if(fd==(uint16_t)-1){return FAIL;}
   	else{
   		sockList[(uint16_t)fd].state=SOCK_CLOSED;	
   	}
   	return SUCCESS;	
   }
   
   command void Transport.initUpdateTimer(){
   	uint16_t i;
   	
   	for(i=0;i<12;i++){
			sockList[i].sockAddr.srcPort=0;
			sockList[i].sockAddr.srcAddr=0;
			sockList[i].sockAddr.destPort=0;
			sockList[i].sockAddr.destAddr=0;	
	}
   	//call synTimer.startPeriodic(6000);
   	call Appy.initializeUsers();
   	call synTimer.startOneShot(6000);
   }
   
   void makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t* payload, uint8_t length){
      Package->src = src;
      Package->dest = dest;
      Package->TTL = (uint8_t)TTL;
      Package->seq = seq;
      Package->protocol = (uint8_t)protocol;
      memcpy(Package->payload, payload, length);
   }
   void makeTcpPacket(transport *tcpPacket, uint8_t srcPort,uint8_t destPort,uint16_t seq, uint16_t ack,uint8_t flags,uint8_t window,uint8_t length,uint8_t* payload){
   	tcpPacket->srcPort=srcPort;
   	tcpPacket->destPort=destPort;
   	tcpPacket->seq=seq;
   	tcpPacket->ack=ack;
   	tcpPacket->flags=flags;
   	tcpPacket->window=window;
   	tcpPacket->length=length;
   	memcpy(tcpPacket->payload,payload,length);
   	numSent++;
   }
   
   socket_t searchNewSock_listen(socket_addr_t *addr){
   	uint16_t i;
   	//dbg("Project3TDbg","size %d\n",size);
   	//dbg("Project3TDbg","destPort %d\n",addr->destPort);
   	if(size==0){
   		return -1;	
   	}
   	for(i=0;i<size;i++){
   		
   		if(sockList[i].sockAddr.srcPort==0 && sockList[i].sockAddr.srcAddr==0 && sockList[i].sockAddr.destPort==addr->destPort){
   			return (socket_t)i;
   		}
   	}
   	return -1;	
   }
   
   command socket_t Transport.searchNewSock_default(socket_addr_t *addr){
   	uint16_t i;
   	if(size==0){
   		return -1;	
   	}
   	//dbg("Project3TDbg","the size is %d\n",size);
   	for(i=0;i<size;i++){
   		
   		if(sockList[i].sockAddr.srcAddr==addr->srcAddr && sockList[i].sockAddr.srcPort==addr->srcPort && sockList[i].sockAddr.destPort==addr->destPort){
   			return (socket_t)i;
   		}
   }
   //dbg("Project3TDbg","exiting searchnewsocketdefault\n");
   return -1;
	}
	/*void endlessWrite(uint16_t location, uint16_t length){
		uint16_t i;
		for(i=0;i<length;i++){
			buffers[location].data[i]=i;	
		}
	}*/
	task void update(){
		uint16_t i;
		uint8_t *locator;
		uint16_t j;
		uint16_t *locator2;
		uint8_t numPackets;
		uint16_t temp;
		uint8_t locatorz[32];
		//dbg("Project3TDbg","YOLO size %d\n",size);
		if(size>0){
			for(i=0;i<size;i++){
				switch(sockList[i].state){
					case SOCK_ESTABLISHED://send data
						
						if(TOS_NODE_ID==sockList[i].sockAddr.destAddr){//server end
							
							
							dbg("Project3TDbg","Server: SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n",sockList[i].sockAddr.srcAddr,sockList[i].sockAddr.srcPort,sockList[i].sockAddr.destAddr,sockList[i].sockAddr.destPort);
							//printRecBuffer(i);
                  			dbg("Project3TDbg","isnA_foreign %d isnB_foreign %d\n",sockList[i].isnA_foreign,sockList[i].isnB_foreign);
                  			//dbg("Project3TDbg","server app buffer length %d\n",buffers[i].lengthRec);
                  			//dbg("Project3TDbg","the message: %s\n",buffers[i].dataRec);
                  			/*locator2=buffers[i].dataRec;
                  			while(locator2<buffers[i].dataRec+buffers[i].lengthRec){
                  				dbg_clear("Project3TDbg"," %d ",locator2[0]);
                  				locator2++;
                  			}*/
                  			//dbg_clear("Project3TDbg","\n");
                  			
                  			//dbg("Project3TDbg","Server: SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n",sockList[i].sockAddr.srcAddr,sockList[i].sockAddr.srcPort,sockList[i].sockAddr.destAddr,sockList[i].sockAddr.destPort);
							//printSendBuffer(i);
							dbg("Project3TDbg","isnA_native %d isnB_native %d buffers[i].length %d i %d\n",sockList[i].isnA_native,sockList[i].isnB_native,buffers[i].length,i);
							//printSendBuffer(i);
							//dbg("Project3TDbg","effective window size before sending %d\n",sockList[i].effectiveWindow);
							
							if(sockList[i].isnB_native<buffers[i].length*2){//if ack # <message length
								dbg("Project3TDbg","We are sending something from the server\n");
								if(sockList[i].isnA_native>sockList[i].isnB_native){//didn't get the acks from the sends
									if(congPack>1){congPack--;}
									sockList[i].isnA_native=sockList[i].isnB_native;
									sockList[i].lastByteSent=sockList[i].isnA_native%SOCKET_SEND_BUFFER_SIZE;
									//sockList[i].effectiveWindow=sockList[i].effectiveWindow-(sockList[i].isnA_native-sockList[i].isnB_native);
   									//dbg("Project3TDbg","after effective window size %d\n",sockList[i].effectiveWindow);
									numPackets=0;
									dbg("Project3TDbg","congPack adjusted to %d\n",congPack);
									do{
										j=0;
										//temp=sockList[i].lastByteSent;
										do{
											locatorz[j]=sockList[i].sendBuff[sockList[i].lastByteSent];
											j++;
											sockList[i].lastByteSent++;
											sockList[i].lastByteSent=sockList[i].lastByteSent%SOCKET_SEND_BUFFER_SIZE;
											sockList[i].isnA_native++;
										}while(j<32 && sockList[i].lastByteSent!=sockList[i].lastByteWritten && sockList[i].isnA_native<buffers[i].length*2);
										//we will retransmit packets
										//please wrap around when you go back j
										dbg("Project3TDbg","sending Data Packet %d SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n",numPackets,sockList[i].sockAddr.srcAddr,sockList[i].sockAddr.srcPort,sockList[i].sockAddr.destAddr,sockList[i].sockAddr.destPort);
										makeTcpPacket(&tcpPack,sockList[i].sockAddr.srcPort,sockList[i].sockAddr.destPort,sockList[i].isnA_native,0,TRANSPORT_DATA,0,j,locatorz);//change last byte ack to last byte sent
                  						makePack(&sendPackage,TOS_NODE_ID,sockList[i].sockAddr.srcAddr,MAX_TTL,PROTOCOL_TCP,tcpPack.seq,&tcpPack,sizeof(tcpPack));
										numPackets++;
										dbg("Project3TDbg","do we seg fault here?\n");
										call FloodSend.handlePing(&sendPackage,one);
										
									}while(numPackets<congPack && sockList[i].lastByteSent!=sockList[i].lastByteWritten && sockList[i].isnA_native<buffers[i].length*2);//change numpackets here
								}
								else{
									congPack++;
									numPackets=0;
									dbg("Project3TDbg","congPack adjusted to %d\n",congPack);
									do{
										j=0;
										//temp=sockList[i].lastByteSent;
										do{
											locatorz[j]=sockList[i].sendBuff[sockList[i].lastByteSent];
											j++;
											sockList[i].lastByteSent++;
											sockList[i].lastByteSent=sockList[i].lastByteSent%SOCKET_SEND_BUFFER_SIZE;
											sockList[i].isnA_native++;
										}while(j<32 && sockList[i].lastByteSent!=sockList[i].lastByteWritten && sockList[i].isnA_native<buffers[i].length*2);
										//please wrap around when you go back j
										dbg("Project3TDbg","sending Data Packet %d SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n",numPackets,TOS_NODE_ID,sockList[i].sockAddr.srcPort,sockList[i].sockAddr.destAddr,sockList[i].sockAddr.destPort);
										makeTcpPacket(&tcpPack,sockList[i].sockAddr.srcPort,sockList[i].sockAddr.destPort,sockList[i].isnA_native,0,TRANSPORT_DATA,0,j,locatorz);//change last byte ack to last byte sent
                  						makePack(&sendPackage,TOS_NODE_ID,sockList[i].sockAddr.srcAddr,MAX_TTL,PROTOCOL_TCP,tcpPack.seq,&tcpPack,sizeof(tcpPack));
										numPackets++;
										call FloodSend.handlePing(&sendPackage,one);
									}while(numPackets<congPack && sockList[i].lastByteSent!=sockList[i].lastByteWritten && sockList[i].isnA_native<buffers[i].length*2);//change numpackets here
								}
								
							}
							else{
								sockList[i].isnB_native=0;
								sockList[i].isnA_native=0;
								buffers[i].length=0;
								buffers[i].marker=0;
								sockList[i].lastByteSent=0;
								sockList[i].lastByteWritten=0;
								sockList[i].lastByteAck=0;
								dbg("Project3TDbg","done sending!\n");	
							}
						}
						else if(TOS_NODE_ID==sockList[i].sockAddr.srcAddr){//client end
							
							dbg("Project3TDbg","Client: SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n",sockList[i].sockAddr.srcAddr,sockList[i].sockAddr.srcPort,sockList[i].sockAddr.destAddr,sockList[i].sockAddr.destPort);
							//printSendBuffer(i);
							dbg("Project3TDbg","isnA_native %d isnB_native %d buffers[i].length %d\n",sockList[i].isnA_native,sockList[i].isnB_native,buffers[i].length);
							//printSendBuffer(i);
							dbg("Project3TDbg","effective window size before sending %d\n",sockList[i].effectiveWindow);
							if(sockList[i].isnB_native<buffers[i].length*2){//if ack # <message length
								if(sockList[i].isnA_native>sockList[i].isnB_native){//didn't get the acks from the sends
									if(congPack>1){congPack--;}
									sockList[i].isnA_native=sockList[i].isnB_native;
									sockList[i].lastByteSent=sockList[i].isnA_native%SOCKET_SEND_BUFFER_SIZE;
									//sockList[i].effectiveWindow=sockList[i].effectiveWindow-(sockList[i].isnA_native-sockList[i].isnB_native);
   									//dbg("Project3TDbg","after effective window size %d\n",sockList[i].effectiveWindow);
									numPackets=0;
									dbg("Project3TDbg","congPack adjusted to %d\n",congPack);
									do{
										j=0;
										//temp=sockList[i].lastByteSent;
										do{
											locatorz[j]=sockList[i].sendBuff[sockList[i].lastByteSent];
											j++;
											sockList[i].lastByteSent++;
											sockList[i].lastByteSent=sockList[i].lastByteSent%SOCKET_SEND_BUFFER_SIZE;
											sockList[i].isnA_native++;
										}while(j<32 && sockList[i].lastByteSent!=sockList[i].lastByteWritten && sockList[i].isnA_native<buffers[i].length*2);
										//we will retransmit packets
										//please wrap around when you go back j
										dbg("Project3TDbg","sending Data Packet %d SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n",numPackets,TOS_NODE_ID,sockList[i].sockAddr.srcPort,sockList[i].sockAddr.destAddr,sockList[i].sockAddr.destPort);
										makeTcpPacket(&tcpPack,sockList[i].sockAddr.srcPort,sockList[i].sockAddr.destPort,sockList[i].isnA_native,0,TRANSPORT_DATA,0,j,locatorz);//change last byte ack to last byte sent
                  						makePack(&sendPackage,TOS_NODE_ID,sockList[i].sockAddr.destAddr,MAX_TTL,PROTOCOL_TCP,call Appy.getCN(),&tcpPack,sizeof(tcpPack));
										numPackets++;
										call FloodSend.handlePing(&sendPackage,one);
										
									}while(numPackets<congPack && sockList[i].lastByteSent!=sockList[i].lastByteWritten && sockList[i].isnA_native<buffers[i].length*2);//change numpackets here
								}
								else{
									congPack++;
									numPackets=0;
									dbg("Project3TDbg","congPack adjusted to %d\n",congPack);
									do{
										j=0;
										//temp=sockList[i].lastByteSent;
										do{
											locatorz[j]=sockList[i].sendBuff[sockList[i].lastByteSent];
											j++;
											sockList[i].lastByteSent++;
											sockList[i].lastByteSent=sockList[i].lastByteSent%SOCKET_SEND_BUFFER_SIZE;
											sockList[i].isnA_native++;
										}while(j<32 && sockList[i].lastByteSent!=sockList[i].lastByteWritten && sockList[i].isnA_native<buffers[i].length*2);
										//please wrap around when you go back j
										dbg("Project3TDbg","sending Data Packet %d SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n",numPackets,TOS_NODE_ID,sockList[i].sockAddr.srcPort,sockList[i].sockAddr.destAddr,sockList[i].sockAddr.destPort);
										makeTcpPacket(&tcpPack,sockList[i].sockAddr.srcPort,sockList[i].sockAddr.destPort,sockList[i].isnA_native,0,TRANSPORT_DATA,0,j,locatorz);//change last byte ack to last byte sent
                  						makePack(&sendPackage,TOS_NODE_ID,sockList[i].sockAddr.destAddr,MAX_TTL,PROTOCOL_TCP,call Appy.getCN(),&tcpPack,sizeof(tcpPack));
										numPackets++;
										call FloodSend.handlePing(&sendPackage,one);
									}while(numPackets<congPack && sockList[i].lastByteSent!=sockList[i].lastByteWritten && sockList[i].isnA_native<buffers[i].length*2);//change numpackets here
								}
								
							}
							else{
								sockList[i].isnB_native=0;
								sockList[i].isnA_native=0;
								buffers[i].length=0;
								buffers[i].marker=0;
								sockList[i].lastByteSent=0;
								sockList[i].lastByteWritten=0;
								sockList[i].lastByteAck=0;
								dbg("Project3TDbg","done sending!\n");	
							}
						}
						
					break;
					case SOCK_CLOSED://make sock_addr 0's, and bytes 0
						sockList[i].sockAddr.srcAddr=0;
						sockList[i].sockAddr.srcPort=0;
						sockList[i].sockAddr.destAddr=0;
						sockList[i].sockAddr.destPort=0;
						sockList[i].lastByteSent=0;
						sockList[i].lastByteWritten=0;
						sockList[i].lastByteAck=0;
						sockList[i].lastByteRec=0;
						sockList[i].lastByteRead=0;
						sockList[i].lastByteExpected=0;
					break;
					case SOCK_SYN_SENT://repeatedly send syn packets, done near connect
						makeTcpPacket(&tcpPack,sockList[i].sockAddr.srcPort,sockList[i].sockAddr.destPort,0,0,TRANSPORT_SYN,0,1,&repeat);
                  		makePack(&sendPackage,TOS_NODE_ID,sockList[i].sockAddr.destAddr,MAX_TTL,PROTOCOL_TCP,tcpPack.seq,&tcpPack,sizeof(tcpPack));
                  		dbg("Project3TDbg","sending SYN Again: SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n\n",sockList[i].sockAddr.srcAddr,sockList[i].sockAddr.srcPort,sockList[i].sockAddr.destAddr,sockList[i].sockAddr.destPort);
                  		call FloodSend.handlePing(&sendPackage,one);
					break;
					case SOCK_SYN_RCVD://repeatedly send syn ack packets
						makeTcpPacket(&tcpPack,sockList[i].sockAddr.srcPort,sockList[i].sockAddr.destPort,0,0,(TRANSPORT_SYN|TRANSPORT_ACK),0,1,&repeat);
                  		makePack(&sendPackage,TOS_NODE_ID,sockList[i].sockAddr.srcAddr,MAX_TTL,PROTOCOL_TCP,tcpPack.seq,&tcpPack,sizeof(tcpPack));
                  		dbg("Project3TDbg","sending SYN ACK Again: SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n\n",sockList[i].sockAddr.srcAddr,sockList[i].sockAddr.srcPort,sockList[i].sockAddr.destAddr,sockList[i].sockAddr.destPort);
                  		call FloodSend.handlePing(&sendPackage,one);
					break;
					case SOCK_FIN_WAIT_1://repeatedly send fin packets, done near closed
						makeTcpPacket(&tcpPack,sockList[i].sockAddr.srcPort,sockList[i].sockAddr.destPort,0,0,TRANSPORT_FIN,0,1,&repeat);
                  		makePack(&sendPackage,TOS_NODE_ID,sockList[i].sockAddr.destAddr,MAX_TTL,PROTOCOL_TCP,tcpPack.seq,&tcpPack,sizeof(tcpPack));
                  		dbg("Project3TDbg","sending FIN Again: SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n\n",sockList[i].sockAddr.srcAddr,sockList[i].sockAddr.srcPort,sockList[i].sockAddr.destAddr,sockList[i].sockAddr.destPort);
                  		call FloodSend.handlePing(&sendPackage,one);
					break;
					case SOCK_FIN_WAIT_2://repeatedly send fin ack packets
						if(repeat2[i]==8){	
							handle=call Transport.release((socket_t)i);
							dbg("Project3TDbg","Server Connection Terminated: SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n",sockList[i].sockAddr.srcAddr,sockList[i].sockAddr.srcPort,sockList[i].sockAddr.destAddr,sockList[i].sockAddr.destPort);
							repeat2[i]=0;
                  		}
                  		else{
                  			makeTcpPacket(&tcpPack,sockList[i].sockAddr.srcPort,sockList[i].sockAddr.destPort,0,0,(TRANSPORT_FIN|TRANSPORT_ACK),0,1,&repeat);
                  			makePack(&sendPackage,TOS_NODE_ID,sockList[i].sockAddr.srcAddr,MAX_TTL,PROTOCOL_TCP,tcpPack.seq,&tcpPack,sizeof(tcpPack));
                  			dbg("Project3TDbg","sending FIN ACK Again: SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n\n",sockList[i].sockAddr.srcAddr,sockList[i].sockAddr.srcPort,sockList[i].sockAddr.destAddr,sockList[i].sockAddr.destPort);
                  			//repeat2=0;
                  			call FloodSend.handlePing(&sendPackage,one);
                  			repeat2[i]++;	
                  		}	
					break;
					case SOCK_CLOSE_WAIT://release the connection
						if(repeat[i]==3){
							handle=call Transport.release((socket_t)i);
							//sockList[i].state=SOCK_CLOSED;
							dbg("Project3TDbg","Client Connection Terminated: SrcAddr %d SrcPort %d DestAddr %d DestPort %d\n",sockList[i].sockAddr.srcAddr,sockList[i].sockAddr.srcPort,sockList[i].sockAddr.destAddr,sockList[i].sockAddr.destPort);
							repeat[i]=0;
						}
						else{
							repeat[i]++;	
						}
					break;
				}	
			}
		}
		//dbg("Project3TDbg","finished checking\n");
	}
	event void synTimer.fired(){
		//uint16_t i;
		// TODO Auto-generated method stub
		//repeat=1;
		
		SampleRTT=EstimatedRTT;
		SampleRTT+=(numSent-numRec)*50;
		EstimatedRTT=(9*EstimatedRTT+1*SampleRTT)/10;
		//dbg("Project3TDbg","Firing time %d\n",2*EstimatedRTT);
		post update();
		//call synTimer.startOneShot(2*EstimatedRTT);
		call synTimer.startOneShot(6000);
		
		
		
		
		numSent=0;
		numRec=0;
        
	}
	void printSendBuffer(uint16_t fd){
		uint16_t i;
		i=0;
		dbg("Project3TDbg","SendBuffer\n");
		dbg("Project3TDbg","lastByteWritten %d\n",sockList[fd].lastByteWritten);
		dbg("Project3TDbg","lastByteSent %d\n",sockList[fd].lastByteSent);
		dbg("Project3TDbg","lastByteAck %d\n",sockList[fd].lastByteAck);
		dbg("Project3TDbg","fd %d\n",fd);
		for(i=0;i<SOCKET_SEND_BUFFER_SIZE;i++){
			dbg_clear("Project3TDbg"," %d ",sockList[fd].sendBuff[i]);
		}
		dbg_clear("Project3TDbg","\n");
	}
	void printRecBuffer(uint16_t fd){
		uint16_t i;
		i=0;
		dbg("Project3TDbg","ReceiveBuffer\n");
		dbg("Project3TDbg","lastByteExp %d\n",sockList[fd].lastByteExpected);
		dbg("Project3TDbg","lastByteRec %d\n",sockList[fd].lastByteRec);
		dbg("Project3TDbg","lastByteRead %d\n",sockList[fd].lastByteRead);
		for(i=0;i<SOCKET_RECEIVE_BUFFER_SIZE;i++){
			dbg_clear("Project3TDbg"," %d ",sockList[fd].recBuff[i]);
		}
		dbg_clear("Project3TDbg","\n");
	}
	command void Transport.resetRecBuff(uint16_t fd){
		sockList[fd].isnA_foreign=0;
		sockList[fd].isnB_foreign=0;
		sockList[fd].lastByteRec=0;
		sockList[fd].lastByteRead=0;
		sockList[fd].lastByteExpected=32;
		buffers[fd].lengthRec=0;
		buffers[fd].markerRec=0;
	}
	command void Transport.resetSendBuff(uint16_t fd){
		//if(sockList[(uint16_t)fd].isnB_native>=buffers[(uint16_t)fd].length*2){
			sockList[fd].isnA_native=0;
			sockList[fd].isnB_native=0;
			sockList[fd].lastByteAck=0;
			sockList[fd].lastByteSent=0;
			sockList[fd].lastByteWritten=0;
			buffers[fd].length=0;
			buffers[fd].marker=0;
		//}	
	}
}