# Automated Chessboard

## Introduction

This repo holds the control software for a gantry-driven automated chessboard. The board moves its own pieces using an X, Y, and Z gantry that sits above (or below) the playing surface, so a game can be played without anyone touching the pieces by hand. The software team built the code that runs it, working alongside the mechanical team (frame, gantry, and gripper) and the electrical team (motors, sensors, and wiring).

The software does three main jobs. It knows the rules of chess and checks every move for legality. It translates board squares like e4 into real-world distances for the gantry. And it tells the Arduino how to move the motors so a piece gets picked up, carried, and set down in the right spot.

## How It Works

When a player makes a move, the software first checks that the move is legal, including special cases like castling, en passant, and pawn promotion. Once the move is approved, the code figures out where the gantry needs to go, lowers the Z axis, grabs the piece, lifts it, and places it on the target square. If a piece is captured, the gantry removes it from the board first and drops it in a spot off to the side. After every move, the gantry returns to its home position and the game state updates.

## Project Structure

```
automated-chessboard/
  software/      Python chess logic and move validation
  arduino/       Arduino sketches for gantry control
  electrical/    Wiring diagrams, schematics, pin map
  mechanical/    CAD files and measurements
  docs/          Notes, diagrams, and meeting info
```

Each Arduino sketch lives in a folder with the same name as its .ino file so the Arduino IDE can open it properly.

## Hardware

The board uses a gantry system with three axes of motion and a [gripper / electromagnet] to move pieces. An Arduino [model] drives the stepper motors, and limit switches on each axis let the gantry home itself on startup. Pin assignments, steps per millimeter, and gantry dimensions are kept in one shared file (`pins.h`) so a hardware change only needs to be updated in one place.

## Getting Started

Clone the repo, then open the project folder in your editor of choice. For the Python side, install the required packages with `pip install -r requirements.txt` and run `main.py` to start a game. For the Arduino side, open the sketch in the Arduino IDE or PlatformIO, select the right board and port, and upload. Before running anything on real hardware, make sure the gantry has clear room to move and the limit switches are wired in.

## Software Team

Marania Fredlaing, Venia Printemps

## Status

This project is a work in progress. Current focus is chess logic, gantry calibration and sensor input. Next up is move detection.
## Contributing

Please work on your own branch and open a pull request when something's ready to merge. Keep commit messages short and clear, and don't push straight to main.
