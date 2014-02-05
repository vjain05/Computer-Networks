#include "../../appData.h"
#include "../../packet.h"
#include "../../socket.h"
interface Appy{
	command void writeToBuffer(uint16_t location, uint16_t length);
	command void setLength(uint16_t location, uint16_t length);
	command uint16_t getLength(uint16_t location);
	command appData* getBufferAddr();
	command uint16_t getMarker(uint16_t location);
	command void setMarker(uint16_t location, uint16_t mark);
	command void handleTestServer(pack* package);
	command void handleTestClient(pack* package);
	command void handleTestClientEnd(pack* package);
	command void handleHello(pack* package);
	command void handleWisp(pack* package);
	command void handleMsg(pack* package);
	command void handleListUsr(pack* package);
	command void processData(socket_addr_t sockAddr,uint16_t sequence);
	command void initializeUsers();
	command void insertFD(uint16_t fd);
	command uint16_t getCN();
}