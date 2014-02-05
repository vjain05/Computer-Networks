#ifndef APP_DATA_H
#define APP_DATA_H

typedef struct appData{
	uint16_t length;
	uint16_t data[1000];
	uint16_t marker;
	
	uint16_t lengthRec;
	uint16_t dataRec[1000];
	uint16_t markerRec;
	//uint16_t markerTransmit;
}appData;

#endif /* APP_DATA_H */
