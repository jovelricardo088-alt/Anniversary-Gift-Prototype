#  Anniversary Gift Prototype ❤️

This project is a prototype for a custom anniversary gift built using Arduino, electronics, and CAD design. The final idea is to create a 3D-printed heart-shaped box that hides all wiring and electronics inside, making the design appealing.

The user will only see:
- A 16x2 LCD display showing messages
- A push button to switch messages
- A small light-up heart display (future feature)

All wiring and components will be hidden inside the heart enclosure.

---

##  Project Idea
The goal of this project is to combine programming, electronics, and 3D design to build a meaningful interactive gift. Each button press changes the message displayed on the LCD in a programmed sequence.

---

##  Current Prototype 
- LCD controlled using Arduino
- Push button input system
- Message cycling using a counter variable (`led_num`)
- Multiple messages displayed based on button presses
- Basic state control system

---
---

## 🎥 Video Demo

This video shows the LCD message system controlled by the button and how the project currently works as a prototype.

[Click here ](https://github.com/user-attachments/assets/fd05c942-42db-4d0f-a461-cd91c6304714)
**

##  How It Works
Each time the button is pressed, the value of `led_num` increases.  
Different values of `led_num` create different messages on the LCD, creating a sequence of outputs.

Example behavior:
- Press 1 → LCD turns on
- Press 2 → "Hi Kim"
- Press 3 → "I Love YOU"
- Press 4 → "Happy Anniversary"
- Then it loops back to earlier messages

---

## Components
- Arduino Uno
- 16x2 LCD Display
- Push Button
- Breadboard
- Jumper Wires
- Resistors

---

## Challenges 
- Making the LCD work correctly with Arduino
- Managing wiring connections and organization
- Understanding how LCD control differs from LEDs and motors
- Programming button input logic properly
- Creating the `led_num` system to control message patterns

---

## What I Learned
- How LCD displays work with Arduino
- How to use button input 
- State-based programming using counters and conditions
- Debugging wiring and hardware issues
- Building interactive electronic prototypes


---

##  Future Improvements
- Add button debounce for better input accuracy
- Improve LCD transitions and effects
- Add a small heart-shaped LED/OLED display
- Design and 3D print a heart enclosure
- Fully hide wiring inside the structure
- Optimize power system for portability

---

## ❤️ Notes
This is an early prototype for a larger anniversary gift project that will combine electronics and 3D design into a compact interactive heart box.
