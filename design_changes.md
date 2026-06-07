# Design Changes

## Overview

This document records the development process of the Anniversary Gift Prototype

---

## Version 1 - LCD Only

**Code File:** `codes/v1_lcd_only.ino`


### Goal

Learn how to control a 16x2 LCD display using Arduino.

### Features
* Displaying text messages
* Basic LCD control

### Challenges

Understanding LCD libraries,learning how to display text correctly and fixing wiring problems.

### Result

Successfully displayed messages on the LCD.

---

## Version 2 - LCD + Push Button

**Code File:** `codes/v2_lcd_button.ino`

## image:
![lcd](images/v1_lcd_prototype.jpg)

### Goal

Allow the user to change messages using a push button.

### Features

* Push button input
* Message cycling system
* Counter-based logic

### Challenges

I initially only knew how to use buttons as simple ON/OFF switches. Learning how to make a button perform different actions on each press required understanding counters and state-based programming.

### Result

Successfully created a system where different button presses displayed different messages.

---

## Version 3 - Failed Matrix Attempt

**Code File:** `codes/v3_matrix_failed.ino`

### Goal

Add an 8x8 LED matrix to display a heart pattern.

### Challenges

The wiring process was simple, but the coding was more difficult than expected.

### What Went Wrong

* Incorrect matrix configuration
* Display initialization issues
* Problems understanding the matrix library

### What I Learned

This failed attempt helped me better understand debugging and how the LED matrix library works.

### Result

The attempt was unsuccessful.

---

## Version 4 - Final System

**Code File:** codes/final_version.ino`
## image
[final version!](images/final.png)

### Goal

Create a complete interactive anniversary gift system.

### Features

* HC-SR04 Ultrasonic Sensor
* LCD Display
* MAX7219 LED Matrix
* LEDs
* Automatic activation

### Design Change

The original push button was removed because it would be difficult to access in the final project.

### Result

When a hand is detected within approximately 5 cm:

* LCD messages appear
* LED matrix displays a heart
* LEDs activate

### Why This Change Was Made

The ultrasonic sensor created a better interaction and removed the need for a visible button.

---

## Key Lessons Learned

* LCD programming
* Push button logic
* State-based programming
* Sensor integration
* Matrix display control
* Hardware troubleshooting
* Software debugging
* Iterative engineering design

