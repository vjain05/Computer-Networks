/*
 * Author: UCM ANDES Lab
 * Date: 2013/09/03
 * Description: Processes commands and returns an Command ID Number.
 */

#ifndef COMMAND_H
#define COMMAND_H
#include "dataStructures/iterator.h"
 
//Command ID Number
enum{
	CMD_PING = '0',
	CMD_NEIGHBOR_DUMP='1',
	CMD_LINKLIST_DUMP='2',
	CMD_ROUTETABLE_DUMP='3',
	CMD_TEST_CLIENT='4',
	CMD_TEST_SERVER='5',
	CMD_KILL='6',
	CMD_TEST_CLIENT_END='7',
	CMD_HELLO='8',
	CMD_ERROR='9',
	CMD_MSG='a',
	CMD_WISP='b',
	CMD_LISTUSR='c'
};

//Lengths of commands
enum{
	CMD_LENGTH = 1,
};

bool isPing(uint8_t *array, uint8_t size){
	if(array[0]==CMD_PING)return TRUE;
	return FALSE;
}
bool isNgbrdmp(uint8_t *array, uint8_t size){
	if(array[0]==CMD_NEIGHBOR_DUMP)return TRUE;
	return FALSE;
}
bool isRTdmp(uint8_t *array, uint8_t size){
	if(array[0]==CMD_ROUTETABLE_DUMP)return TRUE;
	return FALSE;
}
bool isTstSrvr(uint8_t *array,uint8_t size){
	if(array[0]==CMD_TEST_SERVER ){
		//dbg("genDebug","size %d\n",size);
		return TRUE;	
	}
	return FALSE;
}
bool isTstClnt(uint8_t *array,uint8_t size){
	if(array[0]==CMD_TEST_CLIENT ){
		return TRUE;	
	}
	return FALSE;	
}
bool isTstClntEnd(uint8_t *array,uint8_t size){
	if(array[0]==CMD_TEST_CLIENT_END ){
		return TRUE;	
	}
	return FALSE;	
}

bool isHello(uint8_t *array,uint8_t size){
	if(array[0]==CMD_HELLO ){
		return TRUE;	
	}
	return FALSE;	
}

bool isWisp(uint8_t *array,uint8_t size){
	if(array[0]==CMD_WISP ){
		return TRUE;	
	}
	return FALSE;	
}

bool isMsg(uint8_t *array,uint8_t size){
	if(array[0]==CMD_MSG ){
		return TRUE;	
	}
	return FALSE;	
}

bool isListUsr(uint8_t *array,uint8_t size){
	if(array[0]==CMD_LISTUSR ){
		return TRUE;	
	}
	return FALSE;	
}
/*
 * getCmd - processes a string to find out which command is being issued. A Command ID is returned based on the
 * enum declared. Also debugging information is sent to the cmdDebug channel.
 * 
 * @param:
 * 		uint8_t *array = a string held in a byte array
 * 		uint8_t size = size of the above string
 * @return:
 * 		int = Returns one of the above ID Numbers to indicate the type of command.
 */
int getCMD(uint8_t *array, uint8_t size){
	dbg("genDebug", "A Command has been Issued.\n");

	if(isPing(array,size)){
		dbg("genDebug", "Command Type: Ping\n");
		return CMD_PING;
	}
	else if(isNgbrdmp(array,size)){
		dbg("genDebug", "Command Type: Neighbor dump\n");
		return CMD_NEIGHBOR_DUMP;
	}
	else if(isRTdmp(array,size)){
		dbg("genDebug", "Command Type: Route Table dump\n");
		return CMD_ROUTETABLE_DUMP;
	}
	else if(isTstSrvr(array,size)){
		dbg("genDebug", "Command Type: Test Server\n");
		return CMD_TEST_SERVER;
	}
	else if(isTstClnt(array,size)){
		dbg("genDebug", "Command Type: Test Client\n");
		return CMD_TEST_CLIENT;
	}
	else if(isTstClntEnd(array,size)){
		dbg("genDebug", "Command Type: Test Client End\n");
		return CMD_TEST_CLIENT_END;
	}
	else if(isHello(array,size)){
		dbg("genDebug", "Command Type: Test Client End\n");
		return CMD_HELLO;
	}
	else if(isWisp(array,size)){
		dbg("genDebug", "Command Type: Test Client End\n");
		return CMD_WISP;
	}
	else if(isMsg(array,size)){
		dbg("genDebug", "Command Type: Test Client End\n");
		return CMD_MSG;
	}
	else if(isListUsr(array,size)){
		dbg("genDebug", "Command Type: Test Client End\n");
		return CMD_LISTUSR;
	}
	dbg("genDebug", "CMD_ERROR: \"%s\" does not match any known commands.\n", array);
	return CMD_ERROR;
}


#endif /* COMMAND_H */
