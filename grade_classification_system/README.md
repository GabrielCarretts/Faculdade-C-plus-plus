# Student Grade Classification System

## Description

A C++ console application that classifies a student's grade into a concept letter based on predefined score ranges.

The program reads the student's name and numeric grade, validates the input, and displays the corresponding concept from **A** to **E**.

---

## Features

* Reads student name using `getline()`
* Validates grade input to ensure it stays between 0 and 100
* Classifies grades using `if / else if / else` logic
* Displays a clean, color-coded classification report
* Supports repeated classifications with a `do-while` loop

---

## Concepts Practiced

* Input and output (`cin`, `cout`, `getline`)
* Conditional logic with `if`, `else if`, and `else`
* Input validation using `while` loops
* Boolean logic (`&&`, `||`, `!=`, `==`)
* Loop control with `do-while`
* Problem decomposition (validation → classification → output)
* Basic UI/UX improvements with ANSI terminal colors

---

## Classification Rules

* **0 to 39** → E
* **40 to 59** → D
* **60 to 75** → C
* **76 to 89** → B
* **90 to 100** → A

---

## How to Run

1. Compile the program:

   ```bash
   g++ grade_classification_system.cpp -o app
   ```

2. Run the executable:

   ```bash
   ./app
   ```

---

## Example

**Input:**

* Student name: Maria
* Grade: 84

**Output:**

* Student name: Maria
* Recorded grade: 84
* Assigned concept: B

---

## Notes

* Grades must be integers between 0 and 100
* ANSI colors may not display correctly in all terminals
* The program uses a repeated execution loop so multiple grades can be classified in one run

---

## Author

Gabriel Carretts
