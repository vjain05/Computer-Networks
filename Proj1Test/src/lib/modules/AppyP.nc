#include "../../userMap.h"
#include "../../packet.h"
#include "../../socket.h"
#include "../../appData.h"
#include "../../transport.h"
#include "../../command.h"
#include "../../cmdHist.h"
module AppyP{
	provides interface Appy;
	uses interface Transport;
}
implementation{
	appData buffers[12];
	cmdHist commandHistory[10];
	userMap users[7];
	uint16_t usrSiz=0;
	uint16_t chSiz=0;
	uint16_t commandNum=0;
	void endlessWrite(uint16_t location, uint16_t length);
	uint16_t addUser(uint8_t *user, uint16_t fd);
	uint16_t findFDFromUsr(uint8_t *usr);
	uint16_t findCNHist(uint16_t inputFd, uint16_t inputSN);
	void insertCNHist(uint16_t inputFd, uint16_t inputSN);
	//uint16_t findAddrFromUsr(uint8_t *usr);
	command void Appy.writeToBuffer(uint16_t location, uint16_t length){}
	command void Appy.setLength(uint16_t location, uint16_t length){}
	command appData* Appy.getBufferAddr(){
		return buffers;
	}
	command uint16_t Appy.getLength(uint16_t location){return 0;}
	command uint16_t Appy.getMarker(uint16_t location){return 0;}
	command void Appy.setMarker(uint16_t location, uint16_t mark){}
	command void Appy.handleTestServer(pack* package){
		uint8_t *cmdParams;
		uint8_t portDest;
		socket_t sock2;
		socket_addr_t tempAddr2;
		uint16_t listenHandle;
		error_t handle;	
					cmdParams=(package->payload)+CMD_LENGTH;
                  	portDest=(cmdParams[0]-48)&(0x00FF);
                  	dbg("Project3TDbg","Start server port %d\n",portDest);
                  	//isSrvr=1;
                  	
                  	sock2=call Transport.socket();
                  	
                  	tempAddr2.destAddr=TOS_NODE_ID;
                  	tempAddr2.destPort=portDest;
                  	tempAddr2.srcAddr=0;
                  	tempAddr2.srcPort=0;
                  	
                  	handle=call Transport.bind(sock2,&tempAddr2);
                  	listenHandle=call Transport.listen(sock2);
                  	//socket()
                  	//bind()
                  	//listen()
                  	//makeTcpPacket(&tcpPack,port,port,0,0,TRANSPORT_SYN,0,2,&randNum);
                  	//return SUCCESS;
	}
	
	command void Appy.handleTestClient(pack* package){
		uint8_t *cmdParams;
		uint8_t portDest;
		uint8_t portSrc;
		uint8_t dest;
		socket_t sock2;
		socket_addr_t tempAddr2;
		error_t handle;
		uint16_t transfer;
		appData *operator;
		uint16_t reference;
					cmdParams=(package->payload)+CMD_LENGTH;
                  	dest=(cmdParams[0]-48)&(0x00FF);
                  	portSrc=(cmdParams[1]-48)&(0x00FF);
                  	portDest=(cmdParams[2]-48)&(0x00FF);
                  	cmdParams=cmdParams+3;//the data is in this location
                  	transfer=0;
                  	while(cmdParams[0]!=32){
                  		//dbg("Project3TDbg","cmdParams value %d \n",cmdParams[0]);
                  		transfer=transfer*10;
                  		transfer=transfer+((cmdParams[0]-48)&(0x00FF));
                  		cmdParams=cmdParams+1;	
                  	}
                  	dbg("Project3TDbg","sending SYN dest %d port %d transfer %d\n",dest,portDest,transfer);
                  	
                  	sock2=call Transport.socket();
                  	
                  	tempAddr2.srcAddr=TOS_NODE_ID;
                  	tempAddr2.destAddr=dest;
                  	tempAddr2.srcPort=portSrc;
                  	tempAddr2.destPort=portDest;
                  	
                  	handle=call Transport.bind(sock2,&tempAddr2);
                  	
                  	buffers[(uint16_t)sock2].length=transfer;
                  	
                  	
                  	
                  	operator=buffers+(uint16_t)sock2;
                  	endlessWrite((uint16_t)sock2,transfer);
                  	
                  	buffers[(uint16_t)sock2].marker=(call Transport.write((uint16_t)sock2,operator->data,buffers[(uint16_t)sock2].length*2))/2;
                  	
                  	
                  	dbg("Project3TDbg","data\n");
                  	for(reference=0;reference<transfer;reference++){
                  		dbg_clear("Project3TDbg"," %d ",buffers[(uint16_t)sock2].data[reference]);	
                  	}
                  	dbg_clear("Project3TDbg","\n");
                  	dbg("Project3TDbg","data send buffer\n");
                  	//for(reference=0;reference<SOCKET_SEND_BUFFER_SIZE;reference++){
                  	//	dbg_clear("Project3TDbg"," %d ",sockList[(uint16_t)sock2].sendBuff[reference]);	
                  	//}
                  	//dbg_clear("Project3TDbg","\n");
                  	
                  	
                  	handle=call Transport.connect(sock2,&tempAddr2);
	}
	
	command void Appy.handleTestClientEnd(pack* package){
		uint8_t *cmdParams;
		uint8_t portDest;
		uint8_t portSrc;
		uint8_t dest;
		socket_t sock2;
		socket_addr_t tempAddr2;
		error_t handle;
		uint16_t transfer;
		//appData *operator;
		//uint16_t reference;
		//dbg("Project3TDbg","get here end\n");
                  	cmdParams=(package->payload)+CMD_LENGTH;
                  	dest=(cmdParams[0]-48)&(0x00FF);
                  	portSrc=(cmdParams[1]-48)&(0x00FF);
                  	portDest=(cmdParams[2]-48)&(0x00FF);
                  	dbg("Project3TDbg","sending FIN to dest %d port %d\n",dest,portDest);
                  	//makeTcpPacket(&tcpPack2,portSrc,portDest,0,0,TRANSPORT_FIN,0,0,cmdParams);
                  	//makePack(&sendPackage2,TOS_NODE_ID,dest,MAX_TTL,PROTOCOL_TCP,tcpPack2.seq,&tcpPack2,sizeof(tcpPack2));
                  	
                  	tempAddr2.srcAddr=TOS_NODE_ID;
                  	tempAddr2.destAddr=dest;
                  	tempAddr2.srcPort=portSrc;
                  	tempAddr2.destPort=portDest;
                  	
                  	sock2=call Transport.searchNewSock_default(&tempAddr2);
                  	//dbg("Project3TDbg","exiting 1\n");
                  	//dbg("Project3TDbg","sock # %d\n",(uint16_t)sock);
                  	handle=call Transport.close(sock2);
                  	//call FS.SimpleSendSend(sendPackage, dest);
                  	//call FloodSend.handlePing(&sendPackage2,one);
	}
	command void Appy.handleHello(pack* package){
		uint8_t *cmdParams;
		uint8_t portDest;
		uint8_t portSrc;
		uint8_t dest;
		//uint8_t src;
		socket_t sock2;
		socket_addr_t tempAddr2;
		error_t handle;
		uint8_t *wr;
		uint16_t usrIndx;
		uint16_t j;
		appData *operator;
					commandNum++;
					cmdParams=(package->payload)+CMD_LENGTH;
					portSrc=(cmdParams[0]-48)&(0x00FF);
					portDest=41;
					dest=1;
					cmdParams=cmdParams+1;
					//usrIndx=addUser(cmdParams,portSrc,TOS_NODE_ID);
					//cmdParams=cmdParams+1;
					
					tempAddr2.destAddr=dest;
					tempAddr2.destPort=portDest;
					tempAddr2.srcAddr=TOS_NODE_ID;
					tempAddr2.srcPort=portSrc;
					
					sock2=call Transport.socket();
					handle=call Transport.bind(sock2,&tempAddr2);
					
					usrIndx=addUser(cmdParams,(uint16_t)sock2);
					
					wr=buffers[(uint16_t)sock2].data;
					wr[0]='h';
					wr[1]='e';
					wr[2]='l';
					wr[3]='l';
					wr[4]='o';
					wr[5]=' ';
					buffers[(uint16_t)sock2].length=6;
					wr=wr+7-1;
					for(j=0;j<20;j++){
						wr[j]=users[usrIndx].userName[j];	
					}
					buffers[(uint16_t)sock2].length+=20;
					wr=wr+20+1-1;
					wr[0]=' ';
					wr=wr+1;
					wr[0]=(uint16_t)sock2+48;
					//wr[1]=' ';
					//wr[2]=TOS_NODE_ID+48;
					wr[1]='\r';
					//wr[2]='r';
					wr[2]='\n';
					wr[3]=0;
					wr[4]=0;
					//wr[4]='n';
					dbg("Project3TDbg","start command message: %s\n",buffers[sock2].data);
					buffers[(uint16_t)sock2].length+=6;
					buffers[(uint16_t)sock2].length=buffers[(uint16_t)sock2].length/2;
					
					operator=buffers+(uint16_t)sock2;
					buffers[(uint16_t)sock2].marker=(call Transport.write((uint16_t)sock2,operator->data,buffers[(uint16_t)sock2].length*2))/2;
					handle=call Transport.connect(sock2,&tempAddr2);
					//src=TOS_NODE_ID;
					//now connect and send message	
	}
	command void Appy.handleWisp(pack* package){//parse username and message
		uint8_t sampleUsr[20];
		uint8_t *cmdParams;
		uint16_t i;
		//uint8_t clnPort;
		//socket_addr_t tempAddr2;
		uint16_t sock2;
		uint8_t *wr;
		appData *operator;			
					i=0;
					commandNum++;
					cmdParams=(package->payload)+CMD_LENGTH;
					while(cmdParams[0]!=32){
						sampleUsr[i]=cmdParams[0];
						cmdParams=cmdParams+1;
						i++;	
					}
					while(i<20){
						sampleUsr[i]=32;
						i++;	
					}
					cmdParams=cmdParams+1;//here's the message
					//dbg("Project3TDbg","before trouble %sg\n",sampleUsr);
					//clnPort=findPortFromUsr(sampleUsr);
					//dbg("Project3TDbg")
					//dbg("Project3TDbg","trouble clnPort %dg\n",clnPort);
					if(usrSiz!=0){
						//tempAddr2.destAddr=1;
						//tempAddr2.destPort=41;
						//tempAddr2.srcAddr=TOS_NODE_ID;
						//tempAddr2.srcPort=users[0].clientPort;
						//sock2=call Transport.searchNewSock_default(&tempAddr2);
						sock2=users[0].fileDesc;
						wr=buffers[sock2].data;	
						wr[0]='w';
						wr[1]='h';
						wr[2]='i';
						wr[3]='s';
						wr[4]='p';
						wr[5]='e';
						wr[6]='r';
						wr[7]=' ';
						wr=wr+8;
						for(i=0;i<20;i++){
							wr[i]=sampleUsr[i];	
						}
						wr=wr+20;
						wr[0]=' ';
						wr=wr+1;
						call Transport.resetSendBuff(sock2);
						buffers[sock2].length=8+20+1;
						while(!(cmdParams[0]==13 && cmdParams[1]==10)){
							wr[0]=cmdParams[0];
							cmdParams=cmdParams+1;
							wr=wr+1;
							buffers[sock2].length++;
						}
						if(buffers[sock2].length%2!=0){
							wr[0]=' ';
							wr=wr+1;
							buffers[sock2].length++;
						}
						wr[0]='\r';
						wr[1]='\n';
						wr[2]=0;
						wr[3]=0;
						dbg("Project3TDbg","start command message: %s\n",buffers[sock2].data);
						buffers[sock2].length+=4;
						buffers[sock2].length=buffers[sock2].length/2;
						operator=buffers+sock2;
						//
						buffers[sock2].marker=(call Transport.write((uint16_t)sock2,operator->data,buffers[sock2].length*2))/2;
					}
	}
	command void Appy.handleMsg(pack* package){//no parsing needed except message
		uint8_t *cmdParams;
		//socket_addr_t tempAddr2;
		uint16_t sock2;
		uint8_t *wr;
		uint16_t len;
		appData *operator;
					dbg("Project3TDbg","Are we even here?\n");			
					commandNum++;
					cmdParams=(package->payload)+CMD_LENGTH;//here's the message
					len=0;
					if(usrSiz>0){
						dbg("Project3TDbg","layer 1\n");
						//tempAddr2.destAddr=1;
						//tempAddr2.destPort=41;
						//tempAddr2.srcAddr=TOS_NODE_ID;
						//tempAddr2.srcPort=users[0].clientPort;
						
						//sock2=call Transport.searchNewSock_default(&tempAddr2);
						sock2=users[0].fileDesc;
						//if((uint16_t)sock2!=(uint16_t)-1){
							//write to buffers' data
							dbg("Project3TDbg","layer 2\n");
							//call Transport.resetSendBuff(sock2);
							wr=buffers[sock2].data;
							wr[0]='m';
							wr[1]='s';
							wr[2]='g';
							wr[3]=' ';
							wr=wr+4;
							while(!(cmdParams[0]==13 && cmdParams[1]==10)){//change this
								wr[0]=cmdParams[0];
								cmdParams=cmdParams+1;
								wr=wr+1;
								len++;
							}
							len=len+4;
							if(len%2!=0){
								wr[0]=' ';
								wr=wr+1;
								len++;	
							}
							wr[0]='\r';
							wr[1]='\n';
							wr[2]=0;
							wr[3]=0;
							dbg("Project3TDbg","start command message: %s\n",buffers[sock2].data);
							//dbg("Project3TDbg","len %d\n",len);
							call Transport.resetSendBuff(sock2);
							buffers[sock2].length=(len+4);
							//if(len%2==0){
							//	wr[3]=0;
							//	buffers[(uint16_t)sock2].length++;
							//}
							buffers[sock2].length=buffers[sock2].length/2;
							operator=buffers+sock2;
							//
							buffers[sock2].marker=(call Transport.write((uint16_t)sock2,operator->data,buffers[sock2].length*2))/2;
						//}
							
					}
	}
	command void Appy.handleListUsr(pack* package){//no parsing needed
		//socket_addr_t tempAddr2;
		socket_t sock2;
		uint8_t *wr;
		appData *operator;
					dbg("Project3TDbg","begin command listusr\n");	
					commandNum++;
					if(usrSiz>0){
						dbg("Project3TDbg","layer 1\n");
						//tempAddr2.destAddr=1;
						//tempAddr2.destPort=41;
						//tempAddr2.srcAddr=TOS_NODE_ID;
						//tempAddr2.srcPort=users[0].clientPort;
						
						//sock2=call Transport.searchNewSock_default(&tempAddr2);
						sock2=users[0].fileDesc;
						//if((uint16_t)sock2!=(uint16_t)-1){
							//write to buffers' data
							dbg("Project3TDbg","layer 2\n");
							//call Transport.resetSendBuff(sock2);
							wr=buffers[sock2].data;
							wr[0]='l';
							wr[1]='i';
							wr[2]='s';
							wr[3]='t';
							wr[4]='u';
							wr[5]='s';
							wr[6]='r';
							wr[7]=' ';
							wr[8]='\r';
							wr[9]='\n';
							wr[10]=0;
							wr[11]=0;
							dbg("Project3TDbg","start command message: %s\n",buffers[sock2].data);
							call Transport.resetSendBuff(sock2);
							buffers[sock2].length=12;
							buffers[sock2].length=buffers[sock2].length/2;
							operator=buffers+sock2;
							//call Transport.resetSendBuff
							//
							buffers[sock2].marker=(call Transport.write((uint16_t)sock2,operator->data,buffers[sock2].length*2))/2;
						//}
					}
	}
	command void Appy.processData(socket_addr_t sockAddr, uint16_t sequence){
		socket_t sockz;
		uint8_t *point;
		uint8_t *iterations;
		uint8_t it;
		uint8_t cmdType[7]={0,0,0,0,0,0,0};
		uint8_t inputUsr[20];
		//uint8_t inputPort;
		uint16_t handleUsr;
		socket_addr_t tempAddr2;
		//uint16_t inputAddr;
		uint16_t inputFD;
		uint16_t browse;
		appData *operator;
		uint16_t index;
		uint16_t histResult;
		//cmdType;
		dbg("Project3TDbg","Processing the Data here usrSiz %d\n",usrSiz);
		sockz=call Transport.searchNewSock_default(&sockAddr);//use sockz and sequence for history
		if(TOS_NODE_ID==sockAddr.srcAddr){//client side
			
					
			
			dbg("Project3TDbg","get to client side process lengthrec %d\n",buffers[(uint16_t)sockz].lengthRec);
			point=buffers[(uint16_t)sockz].dataRec;
			if(point[buffers[(uint16_t)sockz].lengthRec*2-2-2]=='\r' && point[buffers[(uint16_t)sockz].lengthRec*2-1-2]=='\n' && buffers[(uint16_t)sockz].lengthRec>0){
				histResult=findCNHist((uint16_t)sockz,sequence);
				if((uint16_t)histResult==(uint16_t)-1){
				insertCNHist((uint16_t)sockz,sequence);
				//dbg("Project3TDbg","we should reset here for client\n");
				dbg("Project3TDbg","the message on client side: %s\n",buffers[(uint16_t)sockz].dataRec);
				}
				call Transport.resetRecBuff((uint16_t)sockz);
			}
			
		}
		else if(TOS_NODE_ID==sockAddr.destAddr){//server side
			dbg("Project3TDbg","get to server side process, printing buffers.dataRec\n");
			//ready to process
			
			iterations=buffers[(uint16_t)sockz].dataRec;
			for(it=0;it<buffers[(uint16_t)sockz].lengthRec*2;it++){
				dbg_clear("Project3TDbg"," %d ",iterations[it]);	
			}
			dbg_clear("Project3TDbg","\n");
			//dbg("Project3TDbg","the message: %s\n",buffers[(uint16_t)sockz].dataRec);
			point=buffers[(uint16_t)sockz].dataRec;
			//dbg("Project3TDbg","point[0] %d point[1] %d\n",point[buffers[(uint16_t)sockz].lengthRec*2-2],point[buffers[(uint16_t)sockz].lengthRec*2-1]);
			if(point[buffers[(uint16_t)sockz].lengthRec*2-2-2]=='\r' && point[buffers[(uint16_t)sockz].lengthRec*2-1-2]=='\n' && buffers[(uint16_t)sockz].lengthRec>0){
				dbg("Project3TDbg","we should reset here for server\n");
				
				iterations=buffers[(uint16_t)sockz].dataRec;
				point=cmdType;
				while(iterations[0]!=32){
					point[0]=iterations[0];
					iterations++;
					point++;
				}
				dbg("Project3TDbg","command type %s\n",cmdType);
				if(cmdType[0]=='h' && cmdType[1]=='e' && cmdType[2]=='l' && cmdType[3]=='l' && cmdType[4]=='o'){
					//dbg("Project3TDbg","process hello\n");
					
					iterations++;//location of username
					for(it=0;it<20;it++){
						inputUsr[it]=iterations[0];
						iterations++;	
					}
					dbg("Project3TDbg","user name: %s\n",inputUsr);
					iterations++;//location of port
					inputFD=findFDFromUsr(inputUsr);
					dbg("Project3TDbg","inputFD: %d\n",inputFD);
					if((uint16_t)inputFD==(uint16_t)-1){
						dbg("Project3TDbg","the message: %s\n",buffers[(uint16_t)sockz].dataRec);
						for(it=0;it<20;it++){
							//dbg("Project3TDbg"," %d ",it);
							users[usrSiz].userName[it]=inputUsr[it];	
						}
						usrSiz++;
						dbg("Project3TDbg","added requested mapping to server usrSiz %d\n",usrSiz);
					}
					dbg("Project3TDbg","exiting hello command setup\n");
					//inputPort=(iterations[0]-48)&(0x00FF);
					//dbg("Project3TDbg","Input Port %d\n",inputPort);
					//inputAddr=(iterations[2]-48)&(0x00FF);
					//
					
					/*inputFD=(iterations[0]-48)&(0x00FF);
					dbg("Project3TDbg","InputFD %d\n",inputFD);
					
					handleUsr=addUser(inputUsr,inputFD);*/
					
				}
				else if(cmdType[0]=='w' && cmdType[1]=='h' && cmdType[2]=='i' && cmdType[3]=='s' && cmdType[4]=='p' && cmdType[5]=='e' && cmdType[6]=='r'){
					dbg("Project3TDbg","process whisper\n");
					iterations++;//location of username
					for(it=0;it<20;it++){
						inputUsr[it]=iterations[0];
						iterations++;	
					}
					dbg("Project3TDbg","user name: %s\n",inputUsr);
					iterations++;//location of message
					dbg("Project3TDbg","parsed message %s\n",iterations);
					inputFD=findFDFromUsr(inputUsr);
					
					histResult=findCNHist((uint16_t)sockz,sequence);
					if((uint16_t)histResult==(uint16_t)-1){
					
					insertCNHist((uint16_t)sockz,sequence);
					dbg("Project3TDbg","the message: %s\n",buffers[(uint16_t)sockz].dataRec);
					if((uint16_t)inputFD!=(uint16_t)-1){//data is in dataRec, length is in lengthRec
						//point=buffers[inputFD].data;
						dbg("Project3TDbg","sending from whisper\n");
						for(browse=0;browse<buffers[(uint16_t)sockz].lengthRec*2;browse++){
							buffers[inputFD].data[browse]=buffers[(uint16_t)sockz].dataRec[browse];	
						}
						
						call Transport.resetSendBuff(inputFD);
						buffers[inputFD].length=buffers[(uint16_t)sockz].lengthRec;
						
						operator=buffers+inputFD;
							//call Transport.resetSendBuff
							//
						buffers[inputFD].marker=(call Transport.write(inputFD,operator->data,buffers[inputFD].length*2))/2;
						//tempAddr2.destAddr=41;
						//tempAddr2.destPort=1;
						//tempAddr2.srcAddr=findAddrFromUsr(inputUsr);
						//tempAddr2.srcPort=it;
							
					}
					}
				}
				else if(cmdType[0]=='m' && cmdType[1]=='s' && cmdType[2]=='g'){
					dbg("Project3TDbg","process msg\n");
					iterations++;//location of message
					dbg("Project3TDbg","parsed message %s\n",iterations);
					
					histResult=findCNHist((uint16_t)sockz,sequence);
					if((uint16_t)histResult==(uint16_t)-1){
					
					insertCNHist((uint16_t)sockz,sequence);
					dbg("Project3TDbg","the message: %s\n",buffers[(uint16_t)sockz].dataRec);
					dbg("Project3TDbg","sending from msg\n");
					for(browse=0;browse<usrSiz;browse++){
						//point=buffers[users[browse].fileDesc].data;
						for(index=0;index<buffers[(uint16_t)sockz].lengthRec*2;index++){//change browse
							buffers[users[browse].fileDesc].data[index]=buffers[(uint16_t)sockz].dataRec[index];	
						}
						
						call Transport.resetSendBuff(users[browse].fileDesc);
						buffers[users[browse].fileDesc].length=buffers[(uint16_t)sockz].lengthRec;
						dbg("Project3TDbg","fd %d length %d\n",users[browse].fileDesc,buffers[users[browse].fileDesc].length);
						operator=buffers+users[browse].fileDesc;
							//call Transport.resetSendBuff
							//
						buffers[users[browse].fileDesc].marker=(call Transport.write(users[browse].fileDesc,operator->data,buffers[users[browse].fileDesc].length*2))/2;
						//tempAddr2.destAddr=41;
						//tempAddr2.destPort=1;
						//tempAddr2.srcAddr=findAddrFromUsr(inputUsr);
						//tempAddr2.srcPort=it;	
					}
				}				
				}
				else if(cmdType[0]=='l' && cmdType[1]=='i' && cmdType[2]=='s' && cmdType[3]=='t' && cmdType[4]=='u' && cmdType[5]=='s' && cmdType[6]=='r'){
					dbg("Project3TDbg","process listusr\n");//use sockz
					//for(browse=0;browse<buffers[(uint16_t)sockz].lengthRec*2;browse++){
					//	buffers[(uint16_t)sockz].data[browse]=buffers[(uint16_t)sockz].dataRec[browse];	
					//}
					
					histResult=findCNHist((uint16_t)sockz,sequence);
					if((uint16_t)histResult==(uint16_t)-1){
					dbg("Project3TDbg","sending from listusr\n");
					insertCNHist((uint16_t)sockz,sequence);
					dbg("Project3TDbg","the message: %s\n",buffers[(uint16_t)sockz].dataRec);
					point=buffers[(uint16_t)sockz].data;
					point[0]='l';
					point[1]='i';
					point[2]='s';
					point[3]='t';
					point[4]='U';
					point[5]='s';
					point[6]='r';
					point[7]='R';
					point[8]='p';
					point[9]='l';
					point[10]='y';
					point[11]=' ';
					point=point+12;
					call Transport.resetSendBuff((uint16_t)sockz);
					buffers[(uint16_t)sockz].length=12;
					for(index=0;index<usrSiz;index++){
						for(browse=0;browse<20;browse++){
							point[browse]=users[index].userName[browse];
							buffers[(uint16_t)sockz].length+=1;	
						}
						point=point+20;
						point[0]=',';
						point[1]=' ';
						point=point+2;
						buffers[(uint16_t)sockz].length+=2;	
					}
					point[0]='\r';
					point[1]='\n';
					point[2]=0;
					point[3]=0;
					
					buffers[(uint16_t)sockz].length+=4;	
					
					//buffers[(uint16_t)sockz].length=buffers[(uint16_t)sockz].lengthRec;//readjust this
					
					buffers[(uint16_t)sockz].length=buffers[(uint16_t)sockz].length/2;	
					operator=buffers+(uint16_t)sockz;
						//call Transport.resetSendBuff
						//
					buffers[(uint16_t)sockz].marker=(call Transport.write((uint16_t)sockz,operator->data,buffers[(uint16_t)sockz].length*2))/2;
					//tempAddr2.destAddr=41;
					//tempAddr2.destPort=1;
					//tempAddr2.srcAddr=findAddrFromUsr(inputUsr);
					//tempAddr2.srcPort=it;
					}
				}
				call Transport.resetRecBuff((uint16_t)sockz);
			}
		}
	}
	void endlessWrite(uint16_t location, uint16_t length){
		uint16_t i;
		for(i=0;i<length;i++){
			buffers[location].data[i]=i;	
		}
	}
	uint16_t addUser(uint8_t *user, uint16_t fd){
		uint8_t *ptr;
		uint16_t i;
		
		i=0;
		ptr=users[usrSiz].userName;
		users[usrSiz].fileDesc=fd;
		//users[usrSiz].clientPort=prtSrc;
		//users[usrSiz].clientAddr=addrSrc;
		
		while(user[0]!=32){
			ptr[0]=user[0];
			user=user+1;
			ptr=ptr+1;
			i++;
		}
		usrSiz++;
		while(i<20){
			ptr[0]=32;
			ptr=ptr+1;
			i++;
		}
		return usrSiz-1;
	}
	uint16_t findFDFromUsr(uint8_t *usr){
		uint16_t i;
		uint16_t j;
		
		if(usrSiz>0){
			for(i=0;i<usrSiz;i++){
				//dbg("Project3TDbg","the i %d\n",i);
				for(j=0;j<20;j++){
					//dbg("Project3TDbg","the j %d\n",j);
					//dbg("Project3TDbg","usr[j] %d\n",usr[j]);
					//dbg("Project3TDbg","users[i].userName[j] %d\n",users[i].userName[j]);
					if(usr[j]!=users[i].userName[j]){
						break;
					}
					if(j==19){
						//dbg("Project3TDbg","now return\n");
						//dbg("Project3TDbg","clientPort is %d\n",users[i].clientPort);
						return users[i].fileDesc;	
					}
				}
				
			}		
		}
		return -1;	
	}
	command void Appy.initializeUsers(){
		uint16_t i;
		uint16_t j;
		for(i=0;i<7;i++){
			for(j=0;j<20;j++){
				users[i].userName[j]=-1;	
			}
			users[i].fileDesc=-2;
		}
		for(i=0;i<10;i++){
			commandHistory[i].fd=0;
			commandHistory[i].num=0;	
		}
	}
	command void Appy.insertFD(uint16_t fd){
		users[usrSiz].fileDesc=fd;	
	}
	command uint16_t Appy.getCN(){
		return commandNum;	
	}
	uint16_t findCNHist(uint16_t inputFd, uint16_t inputSN){
		uint16_t fz;
		for(fz=0;fz<10;fz++){
			if(commandHistory[fz].fd==inputFd && commandHistory[fz].num==inputSN){
				return 1;	
			}
		}
		return -1;
	}
	void insertCNHist(uint16_t inputFd, uint16_t inputSN){
		commandHistory[chSiz].fd=inputFd;
		commandHistory[chSiz].num=inputSN;
		chSiz++;
		dbg("Project3TDbg","chSiz %d\n",chSiz);	
	}
	/*uint16_t findAddrFromUsr(uint8_t *usr){
		uint16_t i;
		uint16_t j;
		
		if(usrSiz>0){
			for(i=0;i<usrSiz;i++){
				//dbg("Project3TDbg","the i %d\n",i);
				for(j=0;j<20;j++){
					//dbg("Project3TDbg","the j %d\n",j);
					//dbg("Project3TDbg","usr[j] %d\n",usr[j]);
					//dbg("Project3TDbg","users[i].userName[j] %d\n",users[i].userName[j]);
					if(usr[j]!=users[i].userName[j]){
						break;
					}
					if(j==19){
						//dbg("Project3TDbg","now return\n");
						//dbg("Project3TDbg","clientPort is %d\n",users[i].clientPort);
						return users[i].clientAddr;	
					}
				}
				
			}		
		}
		return -1;	
	}*/
}