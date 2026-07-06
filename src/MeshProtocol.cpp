#include <Arduino.h>

#include "MeshProtocol.h"
#include "Packet.h"

MeshPacket packet;

uint8_t broadcastAddress[] = {
    0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF
};

// OnDataSent(unmodifyable mac adress[ptr], status[enum: ESP_NOW_SEND_SUCCESS or else])
void OnDataSent(const uint8_t *mac_addr, esp_now_send_status_t status) {

    Serial.print("Send Status: ");

    if(status == ESP_NOW_SEND_SUCCESS)
        Serial.println("Success");
    else
        Serial.println("Failed");
}

// OnDataRecv(unmodifyable mac adress[ptr], unmodifyable incoming data[ptr], len)
void OnDataRecv(const uint8_t *mac_addr, const uint8_t *incomingData, int len) {

    memcpy(&packet, incomingData, sizeof(packet));

    Serial.println("------------xxxx------------");
    Serial.print("From: ");
    Serial.println(packet.source);

    Serial.print("To: ");
    Serial.println(packet.destination);

    Serial.print("Hops: ");
    Serial.println(packet.hopCount);

    Serial.print("Message: ");
    Serial.println(packet.message);
}

// Setup for ESPNow broadcast
void setupESPNow() {

    if(esp_now_init() != ESP_OK) {
        Serial.println("ESPNow Init Failed");
        return;
    }

}

void sendPacket() {


}

