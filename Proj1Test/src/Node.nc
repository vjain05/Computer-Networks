/**
 * ANDES Lab - University of California, Merced
 * This class provides the basic functions of a network node.
 *
 * @author UCM ANDES Lab
 * @date   2013/09/03
 * 
 */ 
#include <Timer.h>
#include "command.h"
#include "packet.h"
#include "sendInfo.h"
#include "ping.h"
#include "pair.h"
#include "dvr.h"
#include "transport.h"
#include "socket.h"
//#include "transport.h"

module Node{
   uses interface Boot;

   uses interface Random as Random;
   uses interface SplitControl as AMControl;
   uses interface Receive;

	uses interface Timer<TMilli> as periodicTimer;
	uses interface Timer<TMilli> as RTtimer;

   uses interface FloodSend as FS;
   uses interface Transport as TR;
}

implementation{
	uint8_t iteration;
   pack sendPackage;
   //pack sendPackage2;
   pack routingPackage;
   pack ngbrPackage;
	//transport tcpPack;
	pair one;
	pair two;
	uint16_t randNum;
	uint16_t seqNO;
	char someNum;
	//uint8_t isSrvr;
	//socket_t sock;
	error_t handle;
	//socket_addr_t tempAddr;

   void makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t Protocol, uint16_t seq, uint8_t *payload, uint8_t length);
	void makePair(pair * pear, uint8_t src, uint8_t seq);
	//void makeTcpPacket(transport *tcpPacket, uint8_t srcPort,uint8_t destPort,uint16_t seq, uint16_t ack,uint8_t flags,uint8_t window,uint8_t length,uint8_t* payload);
		
   event void Boot.booted(){
	//isSrvr=0;
   	iteration=0;
      call AMControl.start();
      dbg("genDebug", "Booted\n");
      //randNum=(call Random.rand16())/16+3000;
      //randNum=(((call Random.rand16())%20)*700+4000);
      //randNum=10000+(call Random.rand16()%20)*500;
      randNum=7000+call Random.rand16()%20*100;
      seqNO=0;
      dbg("genDebug","periodic checker set to %d\n",randNum);
      call FS.NeighborsClearAll();
   }

   event void AMControl.startDone(error_t err){
      //uint8_t foozball;
	    //uint8_t ar1[7];
	    //dvr dvrSamp[2];
	    //uint16_t i;
	    //dvr* iterat;
	    
      if(err == SUCCESS){
         dbg("genDebug", "Radio On\n");
         call periodicTimer.startPeriodic(randNum);
         call RTtimer.startPeriodic(randNum+7000);
         call TR.initUpdateTimer();
         //call RTtimer.startPeriodicAt((call RTtimer.getNow())+30000, randNum+10000);
        
	    
      }else{
         //Retry until successful
         call AMControl.start();
      }
   }

   event void AMControl.stopDone(error_t err){}

   event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len){
   	//uint16_t temp;
   	//uint8_t port;
   	//uint8_t dest;
   	//transport* analyze;
   	//uint8_t *cmdParams;
		//dbg("genDebug","len %d sizeofpack %d\n",len,sizeof(pack));
		
      if(len==sizeof(pack)){
         pack* myMsg=(pack*) payload;
		if(myMsg->dest==AM_BROADCAST_ADDR){
			dbg("proj1N"," TTL no %d, src no %d, seq no %d, dest no %d time no %d\n",myMsg->TTL,myMsg->src,myMsg->seq,myMsg->dest,call periodicTimer.getNow());
		}
		else{
			dbg("genDebug"," TTL no %d, src no %d, seq no %d, dest no %d time no %d\n",myMsg->TTL,myMsg->src,myMsg->seq,myMsg->dest,call periodicTimer.getNow());
		}
		makePair(&one,(uint8_t)(myMsg->src),(uint8_t)(myMsg->seq));
         if((TOS_NODE_ID==myMsg->dest /*&*/ /*(*//*!listContains(&one)*//*!(call FS.HistoryListContains(one))|myMsg->dest==myMsg->src*/ /*)*/)){
            dbg("genDebug", "Packet from %d has arrived! Msg: %s \n", myMsg->src, myMsg->payload);
            switch(myMsg->protocol){
               uint8_t createMsg[PACKET_MAX_PAYLOAD_SIZE];
               uint16_t dest;
				
				case PROTOCOL_TCP:
					handle=call TR.receive(myMsg);
				break;
				
               case PROTOCOL_PING:
               if(((myMsg->TTL >= 1) )){
               		/*
               		handle=call TR.receive(myMsg);
               		
               		analyze=myMsg->payload;
               		if(analyze->flags==TRANSPORT_DATA){
               			dbg("genDebug","Data received\n");
               		}
               		else{
               			if(analyze->flags==TRANSPORT_SYN){
               				analyze->flags=TRANSPORT_SYN|TRANSPORT_ACK;
               				dbg("genDebug", "Sending SYN ACK \n");	
               			}
               			else if(analyze->flags==TRANSPORT_FIN){
               				analyze->flags=TRANSPORT_FIN|TRANSPORT_ACK;
               				dbg("genDebug", "Sending FIN ACK \n");
               			}
               			*/
               			dbg("genDebug", "Sending Ping Reply to %d! \n", myMsg->src);
               			
               			//dbg("genDebug","srcPort %d destPort %d \n",analyze->srcPort,analyze->destPort);
               			makePack(&sendPackage, TOS_NODE_ID, myMsg->src, MAX_TTL,
                     PROTOCOL_PINGREPLY, myMsg->seq, (uint8_t *) myMsg->payload, sizeof(myMsg->payload));
               		
               			call FS.HistoryPushBack(one);

               			//call FS.SimpleSendSend(sendPackage,AM_BROADCAST_ADDR);
               			call FS.handlePingReply(&sendPackage,one);
               		/*	
               			if(isSrvr==1 && analyze->flags==(TRANSPORT_FIN|TRANSPORT_ACK)){
               				analyze->flags=TRANSPORT_FIN;	
               				makePack(&sendPackage, TOS_NODE_ID, myMsg->src, MAX_TTL,
                     PROTOCOL_PING, myMsg->seq, (uint8_t *) myMsg->payload, sizeof(myMsg->payload));
                     		dbg("genDebug","sending FIN from server side to dest %d\n",myMsg->src);
                     		
                     		//call FS.HistoryPushBack(one);	
                     		call FS.handlePing(&sendPackage,one);
                     		//call FS.SimpleSendSend(sendPackage,myMsg->dest);
               			}
               		}
               		*/
               }
               
               break;

               case PROTOCOL_PINGREPLY:
				/*
				analyze=myMsg->payload;
				if(analyze->flags==(TRANSPORT_SYN|TRANSPORT_ACK)){
					dbg("genDebug","SYN ACK received, now send data\n");
					makeTcpPacket(&tcpPack,port,port,0,0,TRANSPORT_DATA,0,2,&randNum);
                  	makePack(&sendPackage,TOS_NODE_ID,myMsg->src,MAX_TTL,PROTOCOL_PING,tcpPack.seq,&tcpPack,sizeof(tcpPack));
                  	call FS.SimpleSendSend(sendPackage, myMsg->src);
				}
				else if(analyze->flags==(TRANSPORT_FIN|TRANSPORT_ACK)){
					if(isSrvr==0){
						dbg("genDebug","FIN ACK received, now terminate client side connection\n");
					}
					else if(isSrvr==1){
						dbg("genDebug","FIN ACK received, now terminate server side connection\n");
						isSrvr=0;
					}
				}*/
               makePair(&one,(uint8_t)(myMsg->src),(uint8_t)(myMsg->seq));
               	dbg("genDebug", "Received a Ping Reply from %d!\n", myMsg->src);
               	call FS.HistoryPushBack(one);
               
               break;

               case PROTOCOL_CMD:
               handle=call TR.receive(myMsg);
               if(handle==FAIL){
               switch(getCMD((uint8_t *) &myMsg->payload, sizeof(myMsg->payload))){

                  case CMD_PING:
                     memcpy(&createMsg, (myMsg->payload) + CMD_LENGTH+1, sizeof(myMsg->payload) - CMD_LENGTH+1);
                     memcpy(&dest, (myMsg->payload)+ CMD_LENGTH, sizeof(uint8_t));
                     makePack(&sendPackage, TOS_NODE_ID, (dest-48)&(0x00FF),
                           MAX_TTL, PROTOCOL_PING, /*call FS.HistoryIncrementSeq((uint8_t)(myMsg->src))*/seqNO++, (uint8_t *)createMsg, sizeof(createMsg));	

                     call FS.HistoryPushBack(one);
                     //call FS.SimpleSendSend(sendPackage,AM_BROADCAST_ADDR);//edit dis
                     call FS.handlePing(&sendPackage,one);
                     break;

                  case CMD_NEIGHBOR_DUMP:
                  	call FS.NeighborPrintNeighbors();

                  	break;
                  case CMD_ROUTETABLE_DUMP:
                  	call FS.printRT();
                  	break;
                  //case CMD_TEST_SERVER:
                  	//handle=call TR.receive(myMsg);
                  	/*
                  	cmdParams=(myMsg->payload)+CMD_LENGTH;
                  	port=(cmdParams[0]-48)&(0x00FF);
                  	dbg("genDebug","Start server port %d\n",port);
                  	isSrvr=1;
                  	
                  	sock=call TR.socket();
                  	
                  	tempAddr.destAddr=TOS_NODE_ID;
                  	tempAddr.destPort=port;
                  	tempAddr.srcAddr=0;
                  	tempAddr.srcPort=0;
                  	
                  	handle=call TR.bind(sock,&tempAddr);
                  	//randNum=call TR.listen(sock);
                  	//socket()
                  	//bind()
                  	//listen()
                  	//makeTcpPacket(&tcpPack,port,port,0,0,TRANSPORT_SYN,0,2,&randNum);
                  	*/
                  	//break;
                  //case CMD_TEST_CLIENT:
                  	//handle=call TR.receive(myMsg);
                  	/*
                  	cmdParams=(myMsg->payload)+CMD_LENGTH;
                  	dest=(cmdParams[0]-48)&(0x00FF);
                  	port=(cmdParams[1]-48)&(0x00FF);
                  	cmdParams=cmdParams+2;//the data is in this location
                  	dbg("genDebug","sending SYN dest %d port %d\n",dest,port);
                  	
                  	sock=call TR.socket();
                  	
                  	tempAddr.srcAddr=TOS_NODE_ID;
                  	tempAddr.destAddr=dest;
                  	tempAddr.srcPort=port;
                  	tempAddr.destPort=port;
                  	
                  	handle=call TR.bind(sock,&tempAddr);
                  	handle=call TR.connect(sock,&tempAddr);
                  	
                  	makeTcpPacket(&tcpPack,port,port,0,0,TRANSPORT_SYN,0,1,&randNum);
                  	makePack(&sendPackage,TOS_NODE_ID,dest,MAX_TTL,PROTOCOL_TCP,tcpPack.seq,&tcpPack,sizeof(tcpPack));
                  	//call FS.SimpleSendSend(sendPackage, dest);
                  	call FS.handlePing(&sendPackage,one);
                  	*/
                  //break;
                  //case CMD_TEST_CLIENT_END:
                  	//handle=call TR.receive(myMsg);
                  	/*
                  	//dbg("genDebug","get here end\n");
                  	cmdParams=(myMsg->payload)+CMD_LENGTH;
                  	dest=(cmdParams[0]-48)&(0x00FF);
                  	port=(cmdParams[1]-48)&(0x00FF);
                  	dbg("genDebug","sending FIN dest %d port %d\n",dest,port);
                  	makeTcpPacket(&tcpPack,port,port,0,0,TRANSPORT_FIN,0,1,&randNum);
                  	makePack(&sendPackage,TOS_NODE_ID,dest,MAX_TTL,PROTOCOL_TCP,tcpPack.seq,&tcpPack,sizeof(tcpPack));
                  	//call FS.SimpleSendSend(sendPackage, dest);
                  	call FS.handlePing(&sendPackage,one);
                  	*/
                  	//break;
                  default:
                     break;
               }
               }
               break;
             
             default:
               break;
            }

         }else{
         	switch(myMsg->protocol){
         		//dbg("genDebug","handling ping\n");
	         	case PROTOCOL_PING:
	         		call FS.handlePing(myMsg,one);
	         	break;
	         	case PROTOCOL_PINGREPLY:
	         		call FS.handlePingReply(myMsg,one);
	            break;
	            case PROTOCOL_DISTANCE_VECTOR:
	            	call FS.handleDV(myMsg);
	            	//dbg("genDebug","received %d\n",myMsg->payload[0]);
	            	//dbg("genDebug","received %d\n",myMsg->payload[1]);
	            break;
	            case PROTOCOL_TCP:
	            	call FS.handlePing(myMsg,one);
	            break;
	            default:
	            	dbg("genDebug","protocol %s\n",myMsg->protocol);
	            break;
	        }
            //dbg("genDebug","done here");	
         }
         return msg;
      }

      dbg("genDebug", "Unknown Packet Type \n");
      return msg;
   }

	//this stays
   void makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t* payload, uint8_t length){
      Package->src = src;
      Package->dest = dest;
      Package->TTL = (uint8_t)TTL;
      Package->seq = seq;
      Package->protocol = (uint8_t)protocol;
      memcpy(Package->payload, payload, length);
   }
   /*void makeTcpPacket(transport *tcpPacket, uint8_t srcPort,uint8_t destPort,uint16_t seq, uint16_t ack,uint8_t flags,uint8_t window,uint8_t length,uint8_t* payload){
   	tcpPacket->srcPort=srcPort;
   	tcpPacket->destPort=destPort;
   	tcpPacket->seq=seq;
   	tcpPacket->ack=ack;
   	tcpPacket->flags=flags;
   	tcpPacket->window=window;
   	tcpPacket->length=length;
   	memcpy(tcpPacket->payload,payload,length);
   }*/
   
   //this stays
   void makePair(pair *pear, uint8_t src, uint8_t seq){
   	pear->src=src;
   	pear->seq=seq;
   	}

	event void periodicTimer.fired(){
		//dbg("genDebug","fired 2\n");		
		//call FS.NeighborPrintNeighbors();
		call FS.NeighborRefreshNeighbors();
		call FS.NeighborDecrementNeighborPing();
		someNum=-1;
		makePack(&ngbrPackage, TOS_NODE_ID,AM_BROADCAST_ADDR, 2,
	                     PROTOCOL_PING, 0, &someNum, sizeof(uint8_t));		
	    call FS.SimpleSendSend(ngbrPackage,AM_BROADCAST_ADDR);
	    	                      
	}
	
	event void RTtimer.fired(){
		//uint8_t* tmp;
		
		uint16_t i;
		//dbg("genDebug","fired\n");
			call FS.populateRtngTabl();

		for(i=0;i<call FS.neighborSize();i++){
			//tmp=sendPackage.payload;
			call FS.writeToPayloadFromRT(routingPackage.payload, call FS.getNeighbor(i));

			makePack(&routingPackage, TOS_NODE_ID,AM_BROADCAST_ADDR, 2,
	                     PROTOCOL_DISTANCE_VECTOR, 0, routingPackage.payload, sizeof(routingPackage.payload));
	    	call FS.SimpleSendSend(routingPackage,call FS.getNeighbor(i));
	    }
	}
}
