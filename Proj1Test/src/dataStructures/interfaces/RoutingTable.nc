#include "dvr.h"
#include "pair.h"
#include "dvrTransmission.h"
interface RoutingTable{
	command void populateTable(pair* list,uint16_t listSize);//populate from neighbor list
	command void pushback(dvr element);
	command void writeToPayload(uint8_t* payld, uint8_t neigbr);
	command void NeighborGotDeleted(uint8_t element);
	command void updateTable(uint8_t* payld, uint8_t source);//update from packet message
	command void NeighborGotAdded(uint8_t element);
	command void printTable();
	command uint8_t nxtHopFrmDst(uint8_t dest);
	command uint8_t cstFromDst(uint8_t dest);
	command uint16_t getSize();
	command void refreshRoutingTable();
	command void deleteDest(uint8_t toDelete);
	command void delete(uint16_t position);
	//command dvr popback();
}