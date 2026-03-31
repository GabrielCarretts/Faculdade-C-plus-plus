# Hotel Bill Estimator

## Description

A C++ console application that calculates a hotel client’s final bill based on the number of days stayed.

The program uses a fixed daily rate and adds a service fee per day according to the length of the stay. It then displays a detailed bill including lodging cost, service cost, and total amount.

---

## Features

* Reads client name using `getline()`
* Validates the number of days to prevent invalid input
* Applies different service fees using `if / else if / else` logic
* Calculates lodging cost, service cost, and total bill
* Displays a formatted and color-coded bill report
* Uses `<iomanip>` to format monetary values with 2 decimal places
* Supports repeated calculations with a `do-while` loop

---

## Concepts Practiced

* Input and output (`cin`, `cout`, `getline`)
* Conditional logic with `if`, `else if`, and `else`
* Arithmetic calculations
* Input validation with `while` loops
* Boolean expressions (`&&`, `||`, `!=`, `==`)
* Loop control with `do-while`
* Output formatting using `<iomanip>` (`fixed`, `setprecision`)
* Basic UI/UX improvements with ANSI colors

---

## How It Works

The hotel charges:

* **$60.00 per day** for lodging
* Plus a **service fee per day** based on the number of days:

  * More than 5 days → **$5.50**
  * Exactly 5 days → **$7.00**
  * Fewer than 5 days → **$9.00**

The program calculates:

```text
lodging_cost = daily_rate * days
service_cost = service_fee_per_day * days
total_bill = lodging_cost + service_cost
```

---

## How to Run

1. Compile the program:

   ```bash
   g++ hotel_bill_estimator.cpp -o app
   ```

2. Run the executable:

   ```bash
   ./app
   ```

---

## Example

**Input:**

* Client name: John
* Number of days: 5

**Output:**

* Duration of stay: 5 days
* Service fee per day: $7.00
* Lodging cost: $300.00
* Service cost: $35.00
* Total bill amount: $335.00

---

## Notes

* The number of days must be greater than zero
* ANSI colors may not display correctly in all terminals
* Currency is displayed using `$` for consistency with the English interface

---

## Author

Gabriel Carretts
