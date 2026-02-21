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
    Serial.begin(9600);
    pinMode(ldrPin,INPUT);

    // TODO 4:
    // Print system initialization message
    Serial.println("LDR Light Intensity Monitoring Initialized");

}

void loop() {

    // TODO 5:
    // Read analog value from LDR
    ldrValue = analogRead(ldrPin);
    lightPercentage = map(ldrValue, 0,1023, 100, 0);

    // TODO 6:
    // Print raw ADC value
    Serial.print("LDR Value: ");
    Serial.print(ldrValue); // Print the value to the Serial Monitor
    Serial.print(" | Light Percentage: ");
    Serial.print(lightPercentage); // Print the light percentage to the Serial Monitor
    Serial.println("%");

    // TODO 7:
    // Apply threshold logic (Bright / Dark detection)
    if (lightPercentage > 50) {
        Serial.println("Status: Bright");
    } else {
        Serial.println("Status: Dark");
    }

    // TODO 8:
    // Print brightness status


    // TODO 9:
    // Add delay (500ms or 1 second)
    delay(1000); // Wait for 1 second before reading again
}
