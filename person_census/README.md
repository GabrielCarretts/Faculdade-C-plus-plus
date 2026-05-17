# Person Census Data Tracker

## Description

A C++ console application that acts as a localized demographic tool.

The program reads the names and genders of exactly 10 individuals, validating the input in real-time to ensure data integrity. After collecting the data, it calculates and displays the total number of men and women in a formatted, color-coded terminal report.

---

## Features

* Reads the names and genders of 10 consecutive people
* Validates character inputs to prevent invalid gender entries
* Dynamically updates the UI text to show the current person's loop number 
* Calculates the final demographic totals
* Displays a structured, color-coded census summary
* Supports repeated census sessions with a `do-while` loop without exiting the terminal

---

## Concepts Practiced

* Input and output (`cin`, `getline`, `cout`)
* Input buffer management using `cin.ignore()` to prevent pipeline errors
* Definite iteration with `for` loops
* Input validation traps with `while` loops
* Conditional logic with `if` and `else`
* Session state management (clearing accumulator variables on loop reset)
* Basic UI/UX improvements with ANSI terminal colors

---

## How It Works

The program calculates the final census using this chronological flow:

* **The Setup:** Counter variables for Men and Women are initialized to `0` at the start of the session.
* **The Loop:** A `for` loop executes exactly 10 times.
* **The Pipeline:** The `getline` function captures the name, and a `cin` stream captures a single character for gender.
* **The Trap:** A `while` loop checks if the character is exactly `M`, `m`, `F`, or `f`. If not, it traps the user and requests a new input.
* **The Accumulator:** An `if / else` gate checks the mathematically validated character and adds `1` to the correct demographic bucket.
* **The Final Sweep:** `cin.ignore()` clears the hidden `[Enter]` key from the buffer so the next lap's `getline` function has a clean slate.

---

## How to Run

1. Compile the program:

   ```bash
   g++ person_census.cpp -o app
   ```

2. Run the executable:

   ```bash
   ./app
   ```

---

## Example

**Input:**

* Person 1 Name: John
* Person 1 Gender: M
* Person 2 Name: Maria
* Person 2 Gender: X (Triggers "Invalid option!" error)
* Person 2 Gender: F
* *(...continues for 10 people)*

**Output:**

* Total Men: 6
* Total Women: 4
* Would you like to calculate more people? (Y/N)

---

## Notes

* Gender inputs are strictly validated.
* The program safely clears the input buffer, allowing for multi-word names (e.g., "Ana Julia").
* This project was developed as part of an introductory programming exercise on `for` loops and structured problem-solving.
* ANSI colors may not display correctly in all terminals.

---

## Author

Gabriel Carretts