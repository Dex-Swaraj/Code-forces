# Codeforces Problems

This repository contains Codeforces solutions in C++. Each entry below includes the problem name, a short intro, and a simple 2-3 step description of how the solution works.

## Problem List

### 1. 230_A Dragons
- File: `dragons.cpp`
- Short intro: Determine whether a hero can defeat all dragons one by one using starting strength and rewards from each dragon.
- How it solves:
  1. Sort dragons by required power.
  2. For each dragon, check whether the hero's current strength is enough.
  3. If yes, add the dragon's reward to strength; otherwise stop and return NO.

### 2. 1462_A Favorite Sequence
- File: `favorite_Sequence.cpp`
- Short intro: Build a new sequence by taking values alternately from the start and end of the input array.
- How it solves:
  1. Use two pointers at the left and right ends of the array.
  2. Add the left element, then the right element, and move the pointers inward.
  3. Repeat until all elements are placed in the new sequence.

### 3. 2000_B Seating in Bus
- File: `seating_inBus.cpp`
- Short intro: Verify whether a given sequence satisfies specific neighbor-based adjacency rules.
- How it solves:
  1. Track which values have already appeared.
  2. For each element, check its required neighbor conditions.
  3. If the sequence breaks a rule, return NO; otherwise return YES.

### 4. 2192_A String Rotation Game
- File: `String_rotationGame.cpp`
- Short intro: Find the rotation of a string that gives the maximum number of alternating characters.
- How it solves:
  1. Generate each rotation of the string.
  2. Count adjacent changes in each rotated string.
  3. Return the maximum alternation count found.

### 5. 2167_B Your Name
- File: `your_Nmae.cpp`
- Short intro: Check whether one string can be rearranged to form another string of the same length.
- How it solves:
  1. Sort both strings.
  2. Compare the sorted results.
  3. If they match, the answer is YES; otherwise NO.
