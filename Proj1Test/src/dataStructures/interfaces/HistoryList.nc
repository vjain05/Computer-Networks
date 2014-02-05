#include "pair.h"

interface HistoryList{
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
	command bool listContains(pair * toFind);
	command uint8_t incrementSeq(uint8_t src);
	command void printHistory();
}