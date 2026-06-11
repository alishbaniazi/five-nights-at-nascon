Five Nights at NASCON Simulator

A console-based security simulation inspired by the mechanics of survival management games. The program models a security control system where the player must manage power, monitor incidents, operate defense mechanisms, and survive a sequence of events using strategic decision-making and bitwise state manipulation.



Overview

This project simulates a security control system that processes multiple incidents over several rounds while maintaining the state of various subsystems and entities.

The simulation includes:

- Security system state management
- Event-driven gameplay
- Animatronic movement logic
- Door and vent controls
- Power consumption tracking
- Automatic safety rules
- Event logging
- Final performance scoring


Features

- Incident-based simulation
- Bitwise state representation
- Dynamic power management
- Security device toggling
- Automatic safety protocols
- Event logging system
- Score calculation based on system state
- Input validation and error handling


Technologies Used

- **Language:** C++
- **IDE:** Visual Studio
- **Concepts:**
  - Bit Manipulation
  - Conditional Logic
  - Switch Statements
  - State Machines
  - Event Simulation
  - Input Validation


Programming Concepts Demonstrated

- Binary state management
- Bit masking
- Bit setting and clearing
- Conditional branching
- Simulation logic
- Resource management
- Sequential event processing



Academic Design Constraints

This project was intentionally developed under strict Programming Fundamentals constraints.

The implementation DOSE NOT USE:

- User-defined functions
- Arrays
- Classes
- Dynamic data structures
- Advanced STL containers

The objective was to solve the problem using only fundamental programming constructs such as:

- Switch statements
- If/Else logic
- Variables
- Loops
- Bitwise operators

As a result, certain sections of the code are intentionally explicit rather than modular, preserving the original challenge requirements.


Future Improvements

If these academic constraints were removed, the project could be redesigned using:

- Object-Oriented Programming
- Classes for animatronics and system components
- Functions for modularity
- Arrays or vectors for entity management
- Enums for improved readability
- Better separation of game logic and UI

The current version intentionally preserves the original constraint-driven implementation.


Repository Structure

five-nights-at-nascon/
│
├── src/
│     └── main.cpp
│
├── README.md
│
└── assets/
      └── screenshots (optional)


 How to Run

1. Clone the repository

```bash
git clone https://github.com/YOUR_USERNAME/five-nights-at-nascon.git
```

2. Open the project in Visual Studio or any C++ IDE.

3. Compile and run:

```bash
g++ main.cpp -o simulator
./simulator
```


Learning Outcomes

This project strengthened my understanding of:

- Low-level bitwise operations
- Simulation design
- State tracking
- Logical reasoning
- Constraint-driven programming
- Algorithmic thinking


License

This repository is shared for educational and portfolio purposes.