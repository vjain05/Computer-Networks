/**
 * ANDES Lab - University of California, Merced
 * This class provides the basic functions of a network node.
 *
 * @author UCM ANDES Lab
 * @date   2013/09/03
 * 
 */ 

#include <Timer.h>
#include "socket.h"

configuration NodeC{
}
implementation {
	components MainC;
	components Node;
	components new AMReceiverC(6);
	//components new ListC(pair,30) as historyC;
	//components new ListC(pair,20) as neighborsC;
	components  FloodSendP as FSP;
	components new HistoryListC(30) as HistListC;
	components new NeighborListC(30) as neighborListC;
	components new TimerMilliC() as myTimerC;
	components new TimerMilliC() as RoutingTimer;
	components new TimerMilliC() as synTimer;
	components new RoutingTableC(20) as RoutTableC;
	//components AppyC;
	//components new BusyWaitCounterC(TMilli,uint16_t) as BS1C;
	//components new CounterMilli32C;
	//components new CounterMilli16C as CounterC;
	//components new ListC(socket_storage_t,12) as SockList;
	components RandomC;
   Node -> MainC.Boot;
	
   Node.Receive -> AMReceiverC;
	//Node.history->historyC;
	//Node.neighbors->neighborsC;
	
	Node.Random->RandomC;
	Node.periodicTimer->myTimerC;
	Node.RTtimer->RoutingTimer;
	//Node.neighborTimer->neighborTimerC;
	
   components ActiveMessageC;
	Node.AMControl -> ActiveMessageC;

   components SimpleSendC;
   //Node.Sender -> SimpleSendC;
   
   //Node.history->HistListC;
   //Node.neighbors->neighborListC;
   components TransportC;
   Node.TR->TransportC;
   //TransportC->Node.FS;
   components FloodSendC;
   Node.FS->FloodSendC;
   
   
   //TransportC.SocketList->SockList;
   neighborListC.RT->RoutTableC;
   TransportC.FloodSend->FSP.FloodSend;
   TransportC.synTimer->synTimer;
   //TransportC.Appy->AppyC;
   //TransportC.BS1->BS1C;
   //BS1C.Counter->CounterMilli32C;
   FSP.histList->HistListC;
   FSP.neighborList->neighborListC;
   FSP.Sender->SimpleSendC;
   RoutTableC.NeighborList->neighborListC;
   //TransportC.FloodSend=FloodSendC;
   //Node.FS->TransportC.FloodSend;//uncomment this line; how is this working?
   //TransportC.FloodSend->FloodSendC;
   
   //Node.neighbors->FSP.HistList; 
   
}
