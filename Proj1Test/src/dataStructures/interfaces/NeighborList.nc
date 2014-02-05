#include "dvr.h"
#include "pair.h"
interface NeighborList{
	command uint16_t getRTsize();
	command void set(uint16_t position, pair input);
	command void delete(uint16_t position);
   command void pushback(pair input);
	command void pushfront(pair input);
	command void clearAll();
	command pair popback();
	command pair popfront();
	command pair front();
	command pair back();
	command bool isEmpty();
	command uint16_t size();
	command pair get(uint16_t position);
	command bool neighborsContains(uint8_t toFind);
	command void printNeighbors();
	command void decrementNeighborPing();
	command void resetNeighborCounters();
	command void refreshNeighbors();
	command void deleteNeighbor(uint8_t toDelete);
	command void incrementANeighbor(uint8_t toIncr);
	
	command void populateRoutingTable();
	command void pushbackToRoutingTable(dvr element);
	command void writeToPayloadFromRoutingTable(uint8_t* payld, uint8_t neighbor);
	command void updateRoutingTable(uint8_t* payld, uint8_t source);
	command void printRoutingTable();
	command uint8_t nextHopFromDest(uint8_t dest);
	command uint8_t costFromDest(uint8_t dest);
	command void refreshRoutingT();
}