#include "../../packet.h"
#include "../../sendInfo.h"
module FloodSendP{
	provides interface FloodSend;
	uses interface HistoryList as histList;
	uses interface NeighborList as neighborList;
	uses interface SimpleSend as Sender;
}
implementation{
	pair two;
	pack sendPackage;
	//uint16_t temp;
	
	command uint16_t FloodSend.rtSize(){
		return (call neighborList.getRTsize());
	}
	command void FloodSend.handleDV(pack* myMsg){
		call neighborList.updateRoutingTable(myMsg->payload, myMsg->src);
	}
	
	command void FloodSend.handlePing(pack* myMsg, pair one){
		//dbg("genDebug","sequence %d\n",myMsg->seq);
		uint8_t temp;
	         	if(myMsg->dest==AM_BROADCAST_ADDR){//neighbor discovery
	         		temp=myMsg->src;
	         		call FloodSend.makePack(&sendPackage, TOS_NODE_ID, AM_BROADCAST_ADDR, myMsg->TTL-1,
	                     PROTOCOL_PINGREPLY, myMsg->seq, (uint8_t *) myMsg->payload, sizeof(myMsg->payload));
	            	call Sender.send(sendPackage, temp);	            	
	         			
	         	}
	         	else if(myMsg->TTL>=1){//DV forwarding
	         		call FloodSend.makePack(&sendPackage, myMsg->src, myMsg->dest, myMsg->TTL-1,
	                     myMsg->protocol, myMsg->seq, (uint8_t *) myMsg->payload, sizeof(myMsg->payload));
	                     //look up next hop from dest
	                     //call sender.send to the next hop
	                     temp=(call neighborList.nextHopFromDest(myMsg->dest));
	                     call Sender.send(sendPackage,temp);
	                     dbg("Project2DV","Routing Packet - src: %d, dest: %d, next hop: %d, cost: %d\n",myMsg->src,myMsg->dest,temp,(call neighborList.costFromDest(myMsg->dest)));
	         	}
	         	//the bottom stuff was for flooding
	         	/*else if(((myMsg->TTL >= 1) & (!(call histList.listContains(&one))))){//flooding
	         		call FloodSend.makePack(&sendPackage, myMsg->src, myMsg->dest, myMsg->TTL-1,
	                     PROTOCOL_PING, myMsg->seq, (uint8_t *) myMsg->payload, sizeof(myMsg->payload));
	            	call histList.pushback(one);
	            	call Sender.send(sendPackage, AM_BROADCAST_ADDR);	            	
	            }*/
	}
	command void FloodSend.handlePingReply(pack* myMsg, pair one){
		//dbg("genDebug","ping replying goal %d current node %d",myMsg->dest,TOS_NODE_ID);
	            uint8_t temp;
	            if(myMsg->dest==AM_BROADCAST_ADDR){//neighbor discovery
	            	//add to neighbors list	
	            	if(!call neighborList.neighborsContains((uint8_t)(myMsg->src))){//neighbor is new to list
                  			call FloodSend.makePair(&two,(uint8_t)(myMsg->src),(uint8_t)4);
                  			call neighborList.pushback(two);
                  			//dbg("genDebug","Calling pushback\n");
                  		//call neighbors.pushback(myMsg->src);if neighbor exists, increment seq, else addit and set seq to 5
                  		//printNeighbors();
                  		}
                  		else{//it exists
                  			call neighborList.incrementANeighbor((uint8_t)(myMsg->src));
                  		}
	            }
	            else if(myMsg->TTL>=1){//DV forwarding
	            	call FloodSend.makePack(&sendPackage, myMsg->src, myMsg->dest, myMsg->TTL-1,
	                     myMsg->protocol, myMsg->seq, (uint8_t *) myMsg->payload, sizeof(myMsg->payload));
	                //look up next hop from dest
	                //call sender.send to the next hop
	                temp=(call neighborList.nextHopFromDest(myMsg->dest));
	                call Sender.send(sendPackage,temp);
	                dbg("Project2DV","Routing Packet - src: %d, dest: %d, next hop: %d, cost: %d\n",myMsg->src,myMsg->dest,temp,(call neighborList.costFromDest(myMsg->dest)));     	
	            }
	            //the bottom stuff was for flooding
	            /*
	            else if(((myMsg->TTL >=1) & (!(call histList.listContains(&one))))){//flooding
	         		call FloodSend.makePack(&sendPackage, myMsg->src, myMsg->dest, myMsg->TTL-1,
	                     PROTOCOL_PINGREPLY, myMsg->seq, (uint8_t *) myMsg->payload, sizeof(myMsg->payload));
	            	call histList.pushback(one);
	            	call Sender.send(sendPackage, AM_BROADCAST_ADDR);
	            }*/
	}
	
	command void FloodSend.makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t* payload, uint8_t length){
      Package->src = src;
      Package->dest = dest;
      Package->TTL = (uint8_t)TTL;
      Package->seq = seq;
      Package->protocol = (uint8_t)protocol;
      memcpy(Package->payload, payload, length);
   }
   command void FloodSend.makePair(pair *pear, uint8_t src, uint8_t seq){
   	pear->src=src;
   	pear->seq=seq;
   }
   command void FloodSend.NeighborsClearAll(){
   		call neighborList.clearAll();
   	}
	command bool FloodSend.HistoryListContains(pair toFind){
		return (call histList.listContains(&toFind));
	}
	command void FloodSend.HistoryPushBack(pair one){
		call histList.pushback(one);	
	}
	command uint8_t FloodSend.HistoryIncrementSeq(uint8_t src){
		return (call histList.incrementSeq(src));	
	}
	command void FloodSend.NeighborPrintNeighbors(){
		call neighborList.printNeighbors();	
	}
	command void FloodSend.NeighborRefreshNeighbors(){
		call neighborList.refreshNeighbors();	
	}
	command void FloodSend.refreshRT(){
		call neighborList.refreshRoutingT();
	}
	command void FloodSend.NeighborDecrementNeighborPing(){
		call neighborList.decrementNeighborPing();	
	}
	command void FloodSend.SimpleSendSend(pack msg, uint16_t dest ){
		call Sender.send(msg,dest);	
	}
	command void FloodSend.HistoryPrintHistory(){
		call histList.printHistory();	
	}
	
	command void FloodSend.writeToPayloadFromRT(uint8_t* payld, uint8_t ngbr){
		call neighborList.writeToPayloadFromRoutingTable(payld,ngbr);	
	}
	//command void FloodSend.updateRT(uint8_t* payld, uint8_t source){
	//	call neighborList.updateRoutingTable(payld, source);	
	//}
	command void FloodSend.printRT(){
		call neighborList.printRoutingTable();	
	}
	command void FloodSend.populateRtngTabl(){
		call neighborList.populateRoutingTable();
	}
	command uint16_t FloodSend.neighborSize(){
		return (call neighborList.size());	
	}
	command uint8_t FloodSend.getNeighbor(uint16_t position){
		return (call neighborList.get(position)).src;
	}
}