#include "MeshProtocol.h"

MeshPacket packet;

uint8_t broadcastAddress[] = {
    0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF
};

void OnDataSent(const uint8_t *mac_addr, esp_now_send_status_t status) {

    Serial.print("Send Status: ");

    if(status == ESP_NOW_SEND_SUCCESS)
        Serial.println("Success");
    else
        Serial.println("Failed");
}

void OnDataRecv() {


}

void setupESPNow() {


}

void sendPacket() {


}

