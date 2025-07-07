# Classic Snake Game in C++

A console-based version of the timeless Snake game, developed using C++. This project serves as a great beginner-friendly example of game loop mechanics, input handling, and basic console manipulation in C++.

---

## Table of Contents

- [Features](#features)
- [Prerequisites](#prerequisites)
- [How to Compile and Run](#how-to-compile-and-run)
- [How to Play](#how-to-play)
- [Code Overview](#code-overview)
- [Future Improvements](#future-improvements)
- [Contributing](#contributing)

---

## Features

* **Classic Snake Mechanics:** Eat the fruit (`F`) to grow your snake (`o`) and increase your score.
* **Dynamic Score Keeping:** Your score is displayed and updated in real-time.
* **Infinite Walls:** The snake can wrap around the screen, moving from one edge to the opposite.
* **Collision Detection:** The game ends if the snake's head (`O`) collides with its own body.
* **Simple Controls:** Easy-to-use keyboard controls for fluid movement.

---

## Prerequisites

To compile and run this game, you will need:

* A C++ compiler (like G++, MinGW, or the compiler included with Visual Studio).
* A Windows operating system (due to the use of `<windows.h>` and `<conio.h>`).

---

## How to Compile and Run

1.  **Open a terminal or command prompt.**
2.  **Navigate to the directory** where you saved the `Snake Game (PF Project).cpp` file.
3.  **Compile the code** using your C++ compiler. For example, if you are using g++:
    ```bash
    g++ "Snake Game (PF Project).cpp" -o SnakeGame.exe
    ```
4.  **Run the game** by executing the compiled file:
    ```bash
    ./SnakeGame.exe
    ```

---

## How to Play

The goal is simple: guide the snake to eat as much fruit as possible without running into itself!

* **Controls:**
    * `W` - Move Up
    * `A` - Move Left
    * `S` - Move Down
    * `D` - Move Right
    * `X` - Exit the game at any time.

* **Objective:**
    * The snake (`O` is the head, `o` is the tail) follows your commands.
    * Each time you eat a fruit (`F`), the snake gets longer and your score increases by 10.
    * The game ends if the snake's head hits any part of its tail.

---

## Code Overview

The logic is contained within a single C++ file and is organized into several key functions:

* `setup()`: Initializes all game variables, sets the snake's starting position, and places the first fruit.
* `draw()`: Renders the current state of the game to the console. It clears the screen and redraws the border, snake, fruit, and score for each frame.
* `input()`: Listens for keyboard presses to change the snake's direction or to exit the game.
* `logic()`: The core of the game. It updates the snake's position based on the current direction, checks for collisions with fruit or the snake's own tail, and updates the tail segments.
* `main()`: The main function that contains the game loop, which continuously calls the `draw`, `input`, and `logic` functions until the `gameOver` flag is set to `true`.

---

## Future Improvements

This is a simple implementation, but it could be expanded with new features:

* **High Score System:** Save the highest score to a file so it persists between games.
* **Difficulty Levels:** Add options to increase the snake's speed.
* **Obstacles:** Add walls or other obstacles inside the play area.
* **Power-ups:** Introduce special fruits that have different effects (e.g., slow down time, shrink the snake).
* **Cross-Platform Support:** Refactor the code to remove Windows-specific libraries and allow it to run on macOS and Linux.

---

## Contributing

Contributions are welcome! If you have ideas for new features or improvements, feel free to fork the repository, make your changes, and submit a pull request.
