# Bank Account Manager

## Description

A C++ console application that simulates a basic bank account operation.

The program reads the account holder’s name, account number, current balance, operation type, and operation amount. It then calculates the new balance after either a deposit or a withdrawal. If the balance becomes negative, the program displays an overdrawn account warning.

---

## Features

* Reads account name using `getline()`
* Validates account number input
* Supports two operation types:

  * Deposit
  * Withdrawal
* Validates operation type using `D/W` input
* Validates operation amount to ensure it is positive
* Calculates and displays the new account balance
* Displays a warning if the account becomes overdrawn
* Uses ANSI colors for a cleaner terminal interface
* Formats monetary values with 2 decimal places using `<iomanip>`
* Supports repeated calculations with a `do-while` loop

---

## Concepts Practiced

* Input and output (`cin`, `cout`, `getline`)
* Conditional logic with `if` and `else if`
* Input validation with `while` loops
* Boolean expressions (`&&`, `||`, `!=`, `==`)
* Arithmetic updates to stored values
* Output formatting with `<iomanip>` (`fixed`, `setprecision`)
* Basic UI/UX improvements with ANSI terminal colors

---

## How It Works

The program performs one of two operations:

* **Deposit**

  ```text
  new_balance = original_balance + operation_amount
  ```

* **Withdrawal**

  ```text
  new_balance = original_balance - operation_amount
  ```

If the new balance is less than zero, the program shows an overdrawn account warning.

---

## How to Run

1. Compile the program:

   ```bash
   g++ bank_account_manager.cpp -o app
   ```

2. Run the executable:

   ```bash
   ./app
   ```

---

## Example

**Input:**

* Account name: John
* Account number: 12345
* Account balance: $500.00
* Operation type: Withdrawal
* Operation amount: $700.00

**Output:**

* Original balance: $500.00
* Operation type: Withdrawal
* Operation amount: $700.00
* New balance: $-200.00
* OVERDRAWN ACCOUNT!!

---

## Notes

* Account number must be greater than zero
* Operation amount must be greater than zero
* The program allows negative balances, but displays a warning when they occur
* ANSI colors may not display correctly in all terminals

---

## Author

Gabriel Carretts
