#ifndef MESH_PROTOCOL_H
#define MESH_PROTOCOL_H

#include <esp_now.h>
#include <Arduino.h>
#include <WiFi.h>

void setupESPNow();

void sendPacket(uint8_t destination, const char* message);

#endif