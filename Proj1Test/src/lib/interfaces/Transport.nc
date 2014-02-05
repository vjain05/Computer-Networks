#include "../../packet.h"
#include "../../socket.h"

interface Transport{
   command error_t bind(socket_t fd, socket_addr_t *addr);
   command socket_t accept(socket_t fd, socket_addr_t * addr);
   command uint16_t write(uint16_t fd, uint8_t *buff, uint16_t bufflen);
   command error_t receive(pack* package);
   command uint16_t read(uint16_t fd, uint8_t *buff, uint16_t bufflen);
   
   command uint16_t listen(socket_t fd);

   command error_t connect(socket_t fd, socket_addr_t * addr);
   command error_t close(socket_t fd);

   command socket_t socket();
   command error_t release(socket_t fd);
   
   command void initUpdateTimer();
   command socket_t searchNewSock_default(socket_addr_t *addr);
   command void resetRecBuff(uint16_t fd);
   command void resetSendBuff(uint16_t fd);
}
