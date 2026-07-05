#include "MeshProtocol.h"

uint8_t myID = 1;

void setup() {

    Serial.begin(115200);

    WiFi.mode(WIFI_STA);

    setupESPNow();

    delay(2000);

    sendPacket(2, "Hello!");
}

void loop() {

}