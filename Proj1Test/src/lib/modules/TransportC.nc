configuration TransportC{
	provides interface Transport;
	uses interface FloodSend;
	uses interface Timer<TMilli> as synTimer;
	//uses interface Appy;
	//uses interface BusyWait<TMilli,uint16_t> as BS1;
	//uses interface List<socket_storage_t> as SocketList;
}
implementation{
	//components Node;
	components TransportP as TP;
	components AppyC;
	Transport=TP;
	TP.FloodSend=FloodSend;
	TP.synTimer=synTimer;
	
	//TP.Appy=Appy;
	//Appy->AppyC.Appy;
	TP.Appy->AppyC;
	
	//TP.BS1=BS1;
	//TP.SocketList=SocketList;
	//components new ListC(socket_storage_t,12) as SockList;
	//SocketList->SockList;
	//components FloodSendP as FSP;
	//FloodSend=FSP.FloodSend;
	//FloodSend->FloodSendC;
}