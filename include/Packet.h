#ifndef PACKET_H
#define PACKET_H

struct MeshPacket {
    uint16_t packetID;

    uint8_t source;

    uint8_t destination;

    uint8_t hopCount;

    char message[64];
};

#endif