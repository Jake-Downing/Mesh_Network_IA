#ifndef MESH_PROTOCOL_H
#define MESH_PROTOCOL_H

#include <WiFi.h>
#include <esp_now.h>

struct MeshPacket {
    uint16_t packetID;
    uint8_t source;
    uint8_t destination;
    uint8_t hopCount;
    char message[64];
};

void setupESPNow();
void sendPacket(uint8_t destination, const char* msg);

#endif