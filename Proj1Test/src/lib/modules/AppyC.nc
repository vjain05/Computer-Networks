configuration AppyC{
	provides interface Appy;
	//uses interface Transport;
}
implementation{
	components AppyP;
	components TransportC;
	AppyP.Appy=Appy;
	//AppyP.Transport=Transport;
	AppyP.Transport->TransportC;
}