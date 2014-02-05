#include "../../packet.h"
#include "../../dataStructures/pair.h"
interface FloodSend{
	command void handlePing(pack* myMsg, pair one);//input myMsg, pair one
	command void handlePingReply(pack* myMsg, pair one);
	command void makePack(pack *Package, uint16_t src, uint16_t dest, uint16_t TTL, uint16_t protocol, uint16_t seq, uint8_t* payload, uint8_t length);
	command void makePair(pair *pear, uint8_t src, uint8_t seq);
	command void NeighborsClearAll();
	command bool HistoryListContains(pair toFind);
	command void HistoryPushBack(pair one);
	command uint8_t HistoryIncrementSeq(uint8_t src);
	command void NeighborPrintNeighbors();
	command void NeighborRefreshNeighbors();
	command void NeighborDecrementNeighborPing();
	command void SimpleSendSend(pack msg, uint16_t dest );
	command void HistoryPrintHistory();
	command uint16_t rtSize();
	command uint16_t neighborSize();
	command uint8_t getNeighbor(uint16_t position);
	
	command void writeToPayloadFromRT(uint8_t* payld, uint8_t ngbr);
	//command void updateRT(uint8_t* payld, uint8_t source);
	command void printRT();
	command void handleDV(pack* myMsg);
	command void populateRtngTabl();
	command void refreshRT();
}