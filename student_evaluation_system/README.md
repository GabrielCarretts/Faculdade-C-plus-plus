# Student Evaluation System

## Description

A C++ console application designed to evaluate and track student academic performance. 

This program reads the names and grades of 20 students and calculates the final class average. It includes a boolean flag to check if any student scored a zero, along with extra features to track the highest grade, lowest grade, and the number of students who failed the test.

---

## Features

* Reads 20 student names and grades in a loop.
* Prevents invalid inputs (grades must be between 0 and 10).
* Calculates the final class average.
* Uses a flag to alert if any student got a zero.
* Tracks the highest grade, lowest grade, and counts how many students scored below a 7.0.
* Runs in a continuous loop to allow for multiple class evaluations without restarting the console.

---

## Concepts Practiced

* `for` loops for definite counting (20 students).
* `while` loops for input validation (trapping wrong grades).
* Floating-point math (`float`) for calculating averages.
* Boolean variables (`bool`) for event tracking.
* `<iomanip>` library (`fixed`, `setprecision`) to format the final average to two decimal places.
* Variable initialization tricks (starting the lowest grade at `11` so the first real grade overwrites it).

---

## How It Works

* **The Setup:** The program starts with empty counters. `highest_grade` starts at `-1` and `lowest_grade` starts at `11` so the very first student automatically sets the baseline.
* **The Loop:** A `for` loop runs exactly 20 times to collect the data.
* **The Validation:** If a user types a grade like `-5` or `12`, a `while` loop traps them until they type a valid number.
* **The Math:** Every valid grade is added to a running total. `if` statements check if the grade is a zero, a new high, or a new low.
* **The Report:** After 20 laps, the loop finishes, the average is calculated, and the final results are printed with a clean UI.

---

## Example

**Input:**

* Student 1 Name: Alice
* Student 1 Grade: 8.5
* Student 2 Name: Bob
* Student 2 Grade: 12 (Triggers "Invalid option!" error)
* Student 2 Grade: 0
* *(...continues for 20 students)*

**Output:**

* Final grade average: 7.25
* Highest grade: 9.8
* Lowest grade: 0
* Students failed: 4
* Students that got 0: 1
* Would you like to calculate more grades? (Y/N)

---

## Notes

* Grade inputs are strictly validated to prevent impossible scores.
* The program safely clears the input buffer (`cin.ignore()`), allowing for multi-word names.
* ANSI colors are used for UI highlighting but may not display correctly in all legacy terminals.

---

## How to Run

1. Compile the program:

   ```bash
   g++ student_evaluation_system.cpp -o app
   ```

2. Run the executable:

   ```bash
   ./app
   ```

---

## Author

Gabriel Carretts