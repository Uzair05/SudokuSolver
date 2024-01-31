# Sudoku Solver

This project aims to solve the Sudoku puzzle using iterative deepening search.
The objective of this project was to showcase proficiency in utilizing the C++ STL.

## Rules

Sudoku is a puzzle game played on a 9x9 grid, divided into nine 3x3 subgrids.  
The objective is to fill every cell in the grid with a number from 1 to 9, while ensuring that each row and column contains unique numbers.  
In other words, no duplicate numbers can appear in any row or column. The puzzle may initially provide some numbers as clues, and the challenge is to logically deduce the correct placement of the remaining numbers to complete the grid.

Read the initial stage of the board from the Board.txt file.

## Results
The project can be compiled using the command `make` and run using `./main`.  
The input is taken from the `Board.txt` file \(Empty cells are represented by a "_" symbol\).

```bash
Unsolved Board is:
_, 9, _, 8, 6, _, _, _, 3, 
6, _, 8, _, 2, _, 7, _, _, 
_, _, 1, 7, _, 9, _, 6, _, 
_, 8, _, _, _, _, _, 3, 7, 
_, _, _, 3, 4, 1, _, _, _, 
2, 1, _, _, _, _, _, 4, _, 
_, 3, _, 5, _, 6, 4, _, _, 
_, _, 4, _, 3, _, 5, _, 8, 
5, _, _, _, 1, 8, _, 2, _, 



Solved Board is:
7, 9, 5, 8, 6, 4, 2, 1, 3, 
6, 4, 8, 1, 2, 3, 7, 5, 9, 
3, 2, 1, 7, 5, 9, 8, 6, 4, 
4, 8, 6, 2, 9, 5, 1, 3, 7, 
9, 5, 7, 3, 4, 1, 6, 8, 2, 
2, 1, 3, 6, 8, 7, 9, 4, 5, 
8, 3, 2, 5, 7, 6, 4, 9, 1, 
1, 6, 4, 9, 3, 2, 5, 7, 8, 
5, 7, 9, 4, 1, 8, 3, 2, 6, 
```
