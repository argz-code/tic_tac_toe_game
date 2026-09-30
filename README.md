# Tic Tac Toe Game

A fully functional, two-player tic tac toe game implementation written in C++.

## Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
  - [Building](#building)
- [Usage](#usage)
- [Game Rules](#game-rules)
- [File Structure](#file-structure)
- [Contributing](#contributing)
- [License](#license)

## Overview

This project implements a classic tic tac toe game in C++ that allows two players to compete against each other. The game features a command-line interface and supports interactive gameplay with input validation and real-time board updates.

## Features

- ✅ Two-player gameplay
- ✅ Command-line interface
- ✅ Input validation
- ✅ Game state display
- ✅ Win/Draw detection
- ✅ Turn-based gameplay

## Getting Started

### Prerequisites

- C++ compiler (C++11 or later)
- Git
- Make (optional, if using Makefile)

### Installation

Clone the repository to your local machine:

```bash
git clone https://github.com/argz-code/tic_tac_toe_game.git
cd tic_tac_toe_game
```

### Building

**Using g++:**
```bash
g++ -o tic_tac_toe tictactoe.cpp
```

**Using clang:**
```bash
clang++ -o tic_tac_toe tictactoe.cpp
```

**Using Make (if available):**
```bash
make
```

## Usage

Run the compiled executable:

```bash
./tic_tac_toe
```

**Gameplay:**
1. The game board is displayed as a 3x3 grid with row and column indices (0-2)
2. Players take turns entering their move as row and column coordinates
3. Enter two numbers (0-2) separated by a space: `row column`
4. The first player to get three marks in a row (horizontal, vertical, or diagonal) wins
5. If all squares are filled without a winner, the game is a draw
6. Follow the on-screen prompts to play

**Example Game Flow:**
```
   |   |   
___________

   |   |   
___________

   |   |   
Player X, enter row(0-2) and col(0-2): 1 1

   |   |   
___________

   | X |   
___________

   |   |   
Player O, enter row(0-2) and col(0-2): 0 0
```

## Game Rules

- Players alternate turns between X and O
- Each player places one mark per turn on an empty square
- A player wins by getting three marks in a row (horizontal, vertical, or diagonal)
- The game ends in a draw if the board fills without a winner
- Invalid moves (occupied squares or out-of-range numbers) are rejected and do not count as a turn

## File Structure

```
tic_tac_toe_game/
├── tictactoe.cpp     # Main game implementation
├── README.md         # This file
└── .gitignore        # Git ignore file
```

---

**Author:** argz-code

**Last Updated:** 2026
