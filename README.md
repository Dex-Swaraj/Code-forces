# Codeforces Solutions

This repository contains my C++ solutions to various Codeforces problems. The solutions focus on competitive programming techniques such as sorting, greedy algorithms, two pointers, simulation, and string manipulation.

## Repository Structure

```text
CODEF/
├── discounts.cpp
├── dragons.cpp
├── favorite_Sequence.cpp
├── journey.cpp
├── notelock.cpp
├── seating_inBus.cpp
├── String_rotationGame.cpp
├── trippi_Troppi.cpp
├── your_Nmae.cpp
└── README.md
```

## Problems

### 230A - Dragons

**File:** `dragons.cpp`

**Problem:** Determine whether a hero can defeat all dragons and gain enough strength after each battle.

**Approach:**

1. Store dragons as `(strength, bonus)` pairs.
2. Sort dragons by required strength.
3. Defeat dragons in order and increase the hero's strength.
4. Print `YES` if all dragons are defeated, otherwise `NO`.

---

### 1462A - Favorite Sequence

**File:** `favorite_Sequence.cpp`

**Problem:** Construct a sequence by alternately selecting elements from the beginning and end.

**Approach:**

1. Use two pointers (`left` and `right`).
2. Output elements alternately from both ends.
3. Continue until all elements are processed.

---

### 2000B - Seating in Bus

**File:** `seating_inBus.cpp`

**Problem:** Check whether the seating arrangement satisfies the required adjacency rules.

**Approach:**

1. Track occupied seats.
2. Verify neighbor conditions for each passenger.
3. Print `YES` if valid, otherwise `NO`.

---

### Journey

**File:** `journey.cpp`

**Problem:** Compute the optimal result based on the journey constraints.

**Approach:**

1. Read the journey parameters.
2. Apply the required greedy or mathematical logic.
3. Output the final answer.

---

### Notelock

**File:** `notelock.cpp`

**Problem:** Count protected note positions while maintaining a minimum distance constraint.

**Approach:**

1. Traverse the note sequence.
2. Track the last protected position.
3. Count only valid protected positions.
4. Output the total count.

---

### Discounts

**File:** `discounts.cpp`

**Problem:** Calculate the final value after applying the discount rules.

**Approach:**

1. Read product prices and discount information.
2. Apply the required discount strategy.
3. Output the resulting value.

---

### String Rotation Game

**File:** `String_rotationGame.cpp`

**Problem:** Analyze string rotations and determine the best possible result.

**Approach:**

1. Generate possible rotations.
2. Evaluate each rotation.
3. Return the optimal answer.

---

### Trippi Troppi

**File:** `trippi_Troppi.cpp`

**Problem:** Create the modern country abbreviation from its ancient three-word name.

**Approach:**

1. Read three strings.
2. Extract the first character from each.
3. Concatenate and print the abbreviation.

---

### Your Name

**File:** `your_Nmae.cpp`

**Problem:** Determine whether the required string condition is satisfied.

**Approach:**

1. Read input strings.
2. Apply the required comparison logic.
3. Print the result.

---

## Compilation

Compile any solution using:

```bash
g++ filename.cpp -o output
```

### Examples

```bash
g++ dragons.cpp -o dragons
./dragons
```

```bash
g++ favorite_Sequence.cpp -o favorite
./favorite
```

```bash
g++ seating_inBus.cpp -o seating
./seating
```

## Topics Covered

* Sorting
* Greedy Algorithms
* Two Pointers
* Simulation
* String Manipulation
* Arrays
* Implementation

## Language

* C++17

## Platform

* Codeforces
