# Rain Drop Sensor Arduino Project

## Overview
This project uses an Arduino UNO to monitor rain using a rain sensor module. When rain is detected, a buzzer and a red LED are activated. If no rain is detected, a green LED turns on. The system provides a simple yet effective way to detect rain and signal it visually and audibly.

---

## Components Required
1. **Arduino UNO**  
2. **Rain Sensor Module**  
3. **Buzzer**  
4. **Red LED**  
5. **Green LED**  
6. **Resistors** (if needed for LEDs)  
7. **Connecting Wires**  
8. **Breadboard** (optional for prototyping)

---

## Pin Configuration
- **Rain Sensor**: Connected to digital pin `2`
- **Buzzer**: Connected to digital pin `8`
- **Red LED**: Connected to digital pin `7`
- **Green LED**: Connected to digital pin `6`

---

## How It Works
1. The rain sensor outputs a digital signal (`LOW` when rain is detected).
2. The Arduino reads this signal and performs actions:
   - If **rain is detected**:
     - Activates the buzzer.
     - Turns on the red LED.
     - Turns off the green LED.
   - If **no rain is detected**:
     - Deactivates the buzzer.
     - Turns off the red LED.
     - Turns on the green LED.
3. Serial communication provides debugging information, printing the sensor's state (`HIGH` or `LOW`) to the Serial Monitor.

---

## Code Explanation
- **Setup Function**:  
  Initializes the pins for the sensor, LEDs, and buzzer, and sets up serial communication.  
- **Loop Function**:  
  Continuously reads the sensor value and decides whether to activate/deactivate the components based on the sensor's output.

---

## Usage
1. Connect the components as per the pin configuration.
2. Upload the code to the Arduino using the Arduino IDE.
3. Open the Serial Monitor (9600 baud rate) to see real-time sensor readings.
4. Observe the LEDs and buzzer to verify the system's response to rain.

---

## Notes
- Ensure the rain sensor is connected correctly (refer to its datasheet for wiring details).
- The `LOW` signal for rain detection might vary based on the sensor module used; adjust the code if needed.
- Add appropriate resistors to protect LEDs from excessive current.

---

Enjoy building and testing your rain detection system! 🌧️
