#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using IR Sensor
 * @author RUDRAKSHA SHARMA (Git- rudraksha-sh )
 * @date 2026-01-29
 *
 * @details
 * Reads digital input from IR sensor
 * and detects obstacle presence.
 */

// TODO 1: Define IR sensor digital pin (Use pin 2)
#define IRPIN 2

// TODO 2: Create variable to store sensor state
int irState = 0;

void setup() {

    // TODO 3: Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);

    // TODO 4: Configure IR pin as INPUT
    pinMode(IRPIN, INPUT);

    // TODO 5: Print system initialization message
    Serial.println("IR Obstacle Detection System Initialized");
}

void loop() {

    // TODO 6: Read digital value from IR sensor
    irState = digitalRead(IRPIN);

    // TODO 7: If obstacle detected
    if (irState == HIGH) {
        Serial.println("Obstacle Detected");
    } else {
        Serial.println("No Obstacle");
    }

    // TODO 8: Add small delay (200–500ms)
    delay(300);
}