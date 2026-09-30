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

This project implements a classic tic tac toe game in C++ that allows two players to compete against each other. The game features a command-line interface and supports interactive gameplay with input validation.

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
g++ -o tic_tac_toe main.cpp
```

**Using clang:**
```bash
clang++ -o tic_tac_toe main.cpp
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
1. The game board is displayed as a 3x3 grid with positions numbered 1-9
2. Players take turns entering their move (1-9) to place their mark (X or O)
3. The first player to get three marks in a row (horizontal, vertical, or diagonal) wins
4. If all squares are filled without a winner, the game is a draw
5. Follow the on-screen prompts to play

**Example Game Flow:**
```
 1 | 2 | 3
-----------
 4 | 5 | 6
-----------
 7 | 8 | 9

Player X, enter your move (1-9): 5
```

## Game Rules

- Players alternate turns between X and O
- Each player places one mark per turn on an empty square
- A player wins by getting three marks in a row (horizontal, vertical, or diagonal)
- The game ends in a draw if the board fills without a winner
- Invalid moves (occupied squares or out-of-range numbers) are rejected

## File Structure

```
tic_tac_toe_game/
├── main.cpp          # Main game implementation
├── README.md         # This file
└── .gitignore        # Git ignore file
```

## Contributing

Contributions are welcome! To contribute:

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/your-feature`)
3. Commit your changes (`git commit -m 'Add your feature'`)
4. Push to the branch (`git push origin feature/your-feature`)
5. Open a Pull Request

## License

This project is open source and available under the [MIT License](LICENSE).

---

**Author:** argz-code

**Last Updated:** 2026
