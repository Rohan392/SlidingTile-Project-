# Sliding Tile Puzzle Solver

**Contributors:**  
- Rohan Sharma  
- [Marcus Caparini](https://github.com/MarcusCaparini)  

---

## Project Overview

A solver for the classic **3x3 sliding tile puzzle** (8-puzzle). This project models the puzzle board as a string and generates valid moves by sliding the blank tile. It features a solver that explores states using a priority queue and tracks visited configurations efficiently to avoid repeats.

---

## Features

- Board represented as a string with blank tile position.
- Generates legal moves by sliding the blank tile up, down, left, or right.
- Calculates the Manhattan Distance heuristic for puzzle states.
- Overloads equality and comparison operators for easy state management.
- Puzzle solver using a priority queue and a sorted list of visited states.
- Efficient binary search to check if a state has been visited.
- Solves the puzzle by expanding valid moves until the goal is reached.

---

## Technologies

- C++
- Standard Library: STL containers (vector, priority_queue)
- Custom classes: `BoardTile`, `SlidingSolver`

---

## How It Works

The solver starts with a given initial and goal board configuration. It keeps a priority queue of board states to explore next. Each step:

- Generates all valid next board states by sliding the blank tile.
- Checks if those states have been visited using a sorted vector and binary search.
- Adds new states to the priority queue.
- Pops the best candidate and continues until the goal is found.

This approach can be extended to incorporate heuristics like A* for better performance.

---
