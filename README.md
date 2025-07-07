# Snake Game

A simple console-based implementation of the classic Snake game written in C++. This project is a fun and straightforward example of game development in a terminal environment.

## Description

This program brings the nostalgic Snake game to your command prompt. The player controls a snake that moves around a bordered area. The objective is to eat the fruit that randomly appears on the screen, which makes the snake grow longer. The game ends if the snake collides with its own tail. The game board is designed to wrap around, meaning if the snake goes off one edge, it will reappear on the opposite side.

## How to Play

1.  **Compile the code:** You will need a C++ compiler to compile the `Snake Game (PF Project).cpp` file.
2.  **Run the executable:** Once compiled, run the generated executable file.
3.  **Game Controls:** Use the `W`, `A`, `S`, and `D` keys to control the snake's movement.
4.  **Objective:** Navigate the snake to eat the fruit (`F`) that appears on the screen. Each fruit consumed increases your score and the length of the snake.
5.  **Game Over:** The game will end if the snake's head (`O`) collides with any part of its tail (`o`).
6.  **Exit:** You can press the `x` key at any time to quit the game.

## Controls

* **W:** Move Up
* **A:** Move Left
* **S:** Move Down
* **D:** Move Right
* **X:** Exit Game

## Features

* **Classic Gameplay:** A faithful recreation of the traditional Snake game.
* **Dynamic Growth:** The snake grows in length each time it consumes a fruit.
* **Score Tracking:** Your score increases for every piece of fruit eaten.
* **Wall Wrapping:** The play area is boundless; moving off one edge will cause the snake to appear on the opposite side.
* **Collision Detection:** The game ends if the snake runs into itself.

## Code Structure

The game is built with a few key functions:

* `setup()`: Initializes the game state, including the snake's starting position, the first fruit's location, and the initial score.
* `draw()`: Clears the console and redraws the game board, including the borders, snake, fruit, and current score.
* `input()`: Handles user input for controlling the snake's direction and exiting the game.
* `logic()`: Updates the game state on each tick, including moving the snake, checking for fruit consumption, handling collisions, and managing the snake's growth.
* `main()`: The main game loop that calls the other functions to run the game.

This project was created as a simple and fun exercise in C++ programming.
