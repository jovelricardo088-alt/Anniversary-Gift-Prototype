#  Anniversary Gift Prototype ❤️

## Project Overview

This project is an  anniversary gift built using Arduino and electronic components. The goal is to create a meaningful and interactive experience that automatically reacts when a user's hand approaches the device.

The project combines displays, sensors, LEDs, and embedded programming to create a personalized electronic gift.

## Goal

Create a compact interactive gift that displays personalized messages and visual effects when a hand is detected near the device.

The project combines:

* Embedded Programming
* Electronics
* Sensor Integration
* Display Systems
* Engineering Design

---

## Current Features

### Inputs

* HC-SR04 Ultrasonic Sensor

### Outputs

* 16x2 LCD Display
* MAX7219 8x8 LED Matrix
* LEDs

### Behavior

When a hand is detected within 5 cm:

* LCD displays anniversary messages
* LED matrix displays a heart pattern
* LEDs turn on

When no object is detected:

* Displays remain inactive
* LEDs remain off

---

## Project Evolution

### Version 1 - LCD Message System

The original design used a push button to cycle through messages displayed on the LCD.

**Features**

* LCD Display
* Push Button Input
* Message Cycling System

**Challenge**
I initially struggled to make a single button perform different actions for each press because I only knew how to use buttons as simple ON/OFF inputs.

**What I Learned**

* State variables
* Button input logic
* Counter-based programming

---

### Version 2 - LED Matrix Integration

An 8x8 MAX7219 LED Matrix was added to display a heart pattern.

**Features Added**

* LED Matrix Display
* Heart Pattern Output

**Challenge**
The button-based interaction became impractical because the final enclosure would make the button difficult to access.

**Design Decision**
The button system would eventually be replaced.

---

### Version 3 - Matrix Debugging

Multiple attempts were required before the LED matrix worked correctly.

**Challenges**

* Understanding matrix libraries
* Display configuration
* Software debugging

**Result**
Successfully displayed a heart pattern on the matrix.

**What I Learned**

* Library usage
* Debugging techniques
* Breaking large problems into smaller steps

---

### Version 4 - Ultrasonic Sensor System (Current Version)

The push button was replaced with an HC-SR04 ultrasonic sensor.

**Features Added**

* Distance Detection
* Automatic Activation
* LCD + Matrix + LED Integration

**Behavior**
When a hand is detected within 5 cm:

* LCD activates
* Matrix displays a heart
* LED turn on

**Why This Change Was Made**
The project became easier and more natural to use because the user no longer needed to find and press a hidden button.

---

## Components

* Arduino Uno
* HC-SR04 Ultrasonic Sensor
* 16x2 LCD Display
* MAX7219 8x8 LED Matrix
* LEDs
* Breadboard
* Jumper Wires
* Resistors

---

## How It Works

1. The HC-SR04 continuously measures distance.
2. Arduino processes the sensor reading.
3. If distance ≤ 5 cm:

   * LCD messages are displayed.
   * LED matrix displays a heart.
   * LEDs activate.
4. If distance > 5 cm:

   * Outputs remain inactive.

## Final Build
The image below shows the final version
![Final](images/final.png)
---

## Challenges

### LCD Integration

Learning how LCD displays communicate with Arduino and how to properly control text output.

### Button Logic

Creating a system where one button performed different actions based on the number of presses.

### Matrix Programming

The matrix required several failed software attempts before functioning correctly.

### Design Changes

The original design relied on a push button, but enclosure constraints led to a redesign using an ultrasonic sensor.

---

## What I Learned

* LCD Programming
* Sensor Integration
* State-Based Programming
* Embedded Systems Logic
* Hardware Debugging
* Software Debugging
* Engineering Design Iteration

---

## Future Improvements
* Sound effects
* Improved enclosure design
* Additional sensor interactions


## Final Notes

This project demonstrates the development of an interactive embedded system through multiple design iterations. The final design focuses on creating a simple user experience by using sensor-based interaction rather than manual controls.
