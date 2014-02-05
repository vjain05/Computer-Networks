#ifndef __TRANSPORT_H__
#define __TRANSPORT_H__

#include "../packet.h"

enum{
   TRANSPORT_HEADER_LENGTH = 9,
   TRANSPORT_MAX_PAYLOAD_SIZE = PACKET_MAX_PAYLOAD_SIZE - TRANSPORT_HEADER_LENGTH
};

enum{
   TRANSPORT_SYN = 1,   // 0b0000 0001
   TRANSPORT_ACK = 2,   // 0b0000 0010
   TRANSPORT_FIN = 4,   // 0b0000 0100
   TRANSPORT_DATA = 8   // 0b0000 1000
};

typedef nx_struct transport{
   nx_uint8_t srcPort;
   nx_uint8_t destPort;
   nx_uint16_t seq;
   nx_uint16_t ack;
   nx_uint8_t flags;
   nx_uint8_t window; //Advertised Window
   nx_uint8_t length;
   nx_uint8_t payload[TRANSPORT_MAX_PAYLOAD_SIZE];
}transport;
#endif
