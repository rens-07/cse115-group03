# Hangman: A GUI-Based Game with User Authentication and Theme Customization

## Overview

This is a word guessing game developed in **C** using **raylib** library, which challenges it's player to uncover hidden words through a graphical interface. The hangman is *drawn* progressively with each incorrect guess, and the game features **user authentication** and a **customizable graphical interface**.

## Features

**Registration**          : Allow new players to create an account.<br>
**User Verification**     : Verify player credentials and grant access to their existing account.<br>
**Guest Mode**            : Allow players to play without creating an account.<br>
**Hangman Gameplay**      : Guess hidden words through an interactive graphical interface.<br>
**Guess Validation**      : Prevent repeated guesses from incurring additional strikes and handle invalid input.<br>
**Progressive Drawing**   : The hangman is drawn progressively with each incorrect guess.<br>
**Theme Customization**   : Customize the graphical interface with different colors and themes.<br>
**Saved Settings**        : Save and restore registered player's prefferred themes between sessions.<br>
**Player Statistics**     : Keep track of players' wins, losses, total matches played, and win rate across sessions.<br>
**Cross-Platform Support**: Intended to support Windows, Linux, and macOS.<br> 

## Repository Structure

```bash
/cse115-group03
├── /src
|   ├── draw_hangman.c      # drawing hangman progressively 
|   ├── game.c              # core game mechanics
|   ├── game.h              # function prototypes for game.c
|   └── main.c              # starts executing code
└── README.md
```

## Installation

**Clone the repository**
```bash
git clone https://github.com/rens-07/cse115-group03.git
```

## Prerequisites

- Visual Studio Code
- GCC Compiler
- GNU Make
- Raylib
- GDB debugger
- C/C++ extension for VS Code 

## Quick Start

- Open the project in VS Code.
- Press `F5` to run the program.

## Group Members

- Md. Shahadat Hossain      2632475042
- Golam Morshed Abir        2632598042
- Md. Nabidul Islam Nafi    2631008642
- Iftekhar Hossen           2631654042