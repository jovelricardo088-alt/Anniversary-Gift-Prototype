#  Anniversary Gift Prototype ❤️

##  Project Overview
This project is a prototype for a custom interactive anniversary gift built using Arduino, electronics, and CAD design. The final goal is to create a 3D-printed heart-shaped enclosure that hides all electronics inside while providing a clean, emotional user experience.

The user interacts with:
- A 16x2 LCD display showing messages
- A push button to cycle through messages
- (Future) LED heart / MAX7219 display
- (Future) sensors for interaction features

All wiring and components will be hidden inside the heart-shaped case.

---

##  Project Idea
The goal is to combine programming, electronics, and 3D design to build a meaningful interactive gift. Each button press changes the message displayed on the LCD in a programmed sequence.

---

## Current Prototype
- LCD controlled using Arduino
- Push button input system
- Message cycling using a counter variable (led_num)
- Multiple messages displayed based on button presses
- Basic state control system

---

##  How It Works
Each time the button is pressed:
- The variable `led_num` increases
- Different values of `led_num` trigger different LCD messages
- This creates a sequence of outputs

### Example behavior:
- Press 1 → LCD turns on
- Press 2 → "Hi Kim"
- Press 3 → "I Love YOU"
- Press 4 → "Happy Anniversary"
- Then loops back to earlier messages

---

##  Components
- Arduino Uno
- 16x2 LCD Display
- Push Button
- Breadboard
- Jumper Wires
- Resistors

---

##  Challenges
- Making the LCD work correctly with Arduino
- Managing wiring connections and organization
- Understanding LCD control compared to LEDs and motors
- Programming button input logic properly
- Creating the `led_num` system to control message patterns

---

## What I Learned
- How LCD displays work with Arduino
- How to use button input systems
- State-based programming using counters and conditions
- Debugging wiring and hardware issues
- Building interactive electronic prototypes

---

##  Future Improvements
- Add button debounce for better input accuracy
- Improve LCD transitions and effects
- Add MAX7219 8x8 LED matrix for heart animations
- Add temperature / proximity sensor interaction feature
- Design and 3D print a heart-shaped enclosure
- Fully hide wiring inside the structure
- Optimize power system for portability

---

##  Notes
This is an early prototype for a larger anniversary gift project that combines electronics and 3D design into a compact interactive heart box.

---

##  Video Demo
This video shows the LCD message system controlled by the button and how the project currently works as a prototype.

(Insert video link or file here)
