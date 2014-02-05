configuration FloodSendC{
	provides interface FloodSend;
}
implementation{
	components FloodSendP as FSP;
	
	FloodSend=FSP.FloodSend;

}