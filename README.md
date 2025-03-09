# 8-Bit Calculator (Logisim)

This project is an 8-bit calculator built using **Logisim**, a logic circuit simulator. The calculator supports basic arithmetic operations and is modular, with separate circuit files for different components.

## Prerequisites
- [Logisim](http://www.cburch.com/logisim/) (or Logisim Evolution)

## Getting Started
### Opening the Calculator
1. Open `Arithmetic1.circ` in Logisim.
2. If you encounter an error stating that the 7-segment display is missing:
   - Click on `7seg.circ` when prompted in the message box.
3. Once the components are loaded correctly, click on the **Calculator** to view the full circuit.

## Project Structure
The project is divided into multiple circuit files:

- **Arithmetic1.circ** – Main calculator circuit
- **7seg.circ** – 7-segment display circuit
- **7_segment_display_octal.circ** – Additional 7-segment display configuration
- **circuits/**
  - `binary-decoder.circ` – Binary decoder circuit
  - `d-flip-flop.circ` – D Flip-Flop
  - `full-adder-and-twos-complement.circ` – Full adder and two's complement logic
  - `project_calculator.circ` – Overall calculator design
- **lookaheadCarryAdderSubtractorWithoutOverflow.circ** – Lookahead Carry Adder/Subtractor
- **multiplierAdderSubtractor.circ** – Multiplier, Adder, and Subtractor combination
- **rough/** (Test files)
  - `rough.circ` – Experimental circuits
  - `main.c` – C code for verification
  - `a.exe` – Compiled executable (may not be needed)

## Features
- **Addition, Subtraction, Multiplication, and Division** implemented in separate files
- **Modular design** – Each circuit component can be tweaked independently
- **Uses a 7-segment display** for output visualization

## How to Modify
Each arithmetic operation has a separate circuit file, allowing easy modification:
- Open the corresponding `.circ` file in Logisim.
- Edit logic gates, connections, or add new components as needed.
- Save changes and re-open `Arithmetic1.circ` to see the effect.
