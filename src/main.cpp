#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author Shraddha Singh
 * @date 2026-02-21
 *
 * @details
 * Reads analog brightness data from LDR sensor
 * and displays structured output via Serial Monitor.
 */

 // TODO 1:
 // Define LDR analog pin (Use A0)
int ldrPin = A0;

 // TODO 2:
 // Create variable to store sensor reading
int ldrValue = analogRead(ldrPin);
int lightPercentage = map(ldrValue, 0,1023, 100, 0);

void setup() {

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)

    // TODO 4:
    // Print system initialization message
}

void loop() {

    // TODO 5:
    // Read analog value from LDR

    // TODO 6:
    // Print raw ADC value

    // TODO 7:
    // Apply threshold logic (Bright / Dark detection)

    // TODO 8:
    // Print brightness status

    // TODO 9:
    // Add delay (500ms or 1 second)
}
