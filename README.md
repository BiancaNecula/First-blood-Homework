Computer Programming Course \
HOMEWORK 1 - FIRST BLOOD 

November 4, 2019 

Bianca Necula \
Faculty of Automatic Control and Computer Science \
315CA 

# Info
```bash
git clone https://github.com/BiancaNecula/First-blood-Homework.git
```
See README.check.pdf for informations about checker and testing. \
See "Programare_2019__Tema_1.pdf" for information about the homework. \
**Simple algorithmic tasks with functions, 2D-arrays and 1D-arrays in C language.**

# About the code:

* Ninel
  - Receives as input the number of trees and their height. Returns the sum of the heights of the special trees, the arithmetic mean, the tallest tree on the odd positions and the lowest on the even ones.
  - Compare sequences of 3 trees to see if the one in the middle is the tallest. Exceptions for size or location are considered.

* Vectsecv 
  - Receives a number as input. Returns after successive decreases, between the number with the same digits in descending order and the number with the same digits in ascending order, they are repeated and the sequence of numbers that is repeated.
  - Through successive subtractions stored in a vector, a counter is kept for the number of subtractions performed and a check if the current number calculated after the subtraction is already in the vector.

* Codeinvim 
  - Receives as input a number of notes and credits (weights), grades, credits and the desired final average. Returns the number of magnifications needed for the student to reach the desired final average.
  - All the results of the possible magnifications are stored in a vector, it is sorted, then the maximum values ​​in the final average are checked. The number of magnifications is equal to the number of elements in the vector that check the problem.

* Nomogram 
  - Receives as input the number of puzzles, their dimensions, the restrictions for each line and for each column and nonogram to be checked. Returns "Error" if it is wrong and "Correct" if it was resolved correctly.
  - Check the amount on each line of the line constraint matrix and the amount on each line of the puzzle and if there are differences between them it means that the puzzle is wrong.
 
 
 
