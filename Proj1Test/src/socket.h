#ifndef __STRUCT_H__
#define __STRUCT_H__

typedef enum socketState{
   SOCK_ESTABLISHED  = 0,
   SOCK_LISTEN       = 1,
   SOCK_CLOSED       = 2,
   SOCK_SYN_SENT     = 3,
   SOCK_CLOSE_WAIT   = 4,
   SOCK_FIN_WAIT_1     = 5,
   SOCK_FIN_WAIT_2		=6,
   SOCK_SYN_RCVD	 = 7
}socketState;

enum{
   SOCKET_SEND_BUFFER_SIZE = 128,
   SOCKET_RECEIVE_BUFFER_SIZE = 128,
   NULL_SOCKET = 0
};

typedef nx_struct socket_addr_t{
   nx_uint8_t srcPort;
   nx_uint8_t destPort;
   nx_uint16_t srcAddr;
   nx_uint16_t destAddr;
}socket_addr_t;

typedef struct socket_storage_t{
   socketState state;
   socket_addr_t sockAddr;
   uint8_t sendBuff[SOCKET_SEND_BUFFER_SIZE];
   uint8_t recBuff[SOCKET_RECEIVE_BUFFER_SIZE];
   uint16_t lastByteSent;
   uint16_t lastByteWritten;
   uint16_t lastByteAck;
   uint16_t lastByteRec;
   uint16_t lastByteRead;
   uint16_t lastByteExpected;
   //uint8_t firstTime;
   uint16_t isnA_native;
   uint16_t isnB_native;
   uint16_t isnA_foreign;
   uint16_t isnB_foreign;
   uint8_t effectiveWindow;
}socket_storage_t;

typedef uint16_t socket_t;

#endif
