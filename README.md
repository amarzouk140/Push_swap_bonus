# Push Swap

Push Swap is a sorting algorithm project developed at 42. The goal is to sort a stack of integers using a limited set of operations on another stack. The project includes a main part and a bonus part with additional features.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Requirements](#requirements)
- [Installation](#installation)
- [Usage](#usage)
- [Project Structure](#project-structure)
- [Contributing](#contributing)
- [License](#license)

## Introduction

The Push Swap project is designed to help students understand and implement sorting algorithms, data structures (stacks), and algorithmic complexity. The objective is to sort data on a stack with the lowest possible number of operations, using a secondary stack as a buffer.

## Features

- **Main Part:**
  - Sorts a stack of integers using predefined operations.
  - Validates input for correctness.
  - Efficiently sorts using the least number of operations.

- **Bonus Part:**
  - Create your own checker.

## Requirements

- GNU Make
- CC

## Installation

1. Clone the repository:

    ```sh
    git clone https://github.com/amarzouk140/push_swap.git
    cd push_swap
    ```

2. Compile the project:

    ```sh
    make
    ```

This will create the `push_swap` and `checker` executables.

## Usage

### Sorting

To sort a list of integers, run:

```sh
./push_swap <list_of_integers>
Example:

sh
نسخ الكود
./push_swap 3 2 5 1 4
Bonus - Checker
The checker program reads operations and checks if they sort the stack correctly.

Provide a list of integers:

sh
نسخ الكود
./checker <list_of_integers>
Enter operations, one per line (e.g., sa, pb, ra, etc.). Press Ctrl+D to end input.

Example:

sh
نسخ الكود
./checker 3 2 5 1 4
Input:

sh
نسخ الكود
