# Arduino LED Control Using Push Button 🔘💡

This Arduino project demonstrates how to control an LED using a push button.
The LED turns **ON when the button is pressed** and **OFF when released**.

This project uses Arduino’s **internal pull-up resistor** for reliable button input.

---

## 🔧 Components Required
- Arduino Uno
- LED
- Push Button
- 220Ω Resistor (for LED)
- Jumper Wires

---

## 🔌 Circuit Connections
- **LED (+)** → Pin **13** (through 220Ω resistor)
- **LED (–)** → GND
- **Push Button (one side)** → Pin **2**
- **Push Button (other side)** → GND

> Internal pull-up resistor is enabled, so no external resistor is required for the button.

---

## 🧠 Working Principle
- Button **not pressed** → input pin reads **HIGH**
- Button **pressed** → input pin reads **LOW**
- When pressed, LED turns **ON**
- When released, LED turns **OFF**

---

## 💻 Arduino Code
```cpp
int ledPin = 13;
int buttonPin = 2;
int buttonState = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
