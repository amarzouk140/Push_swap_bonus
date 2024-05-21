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
```

#### example:

```sh
./push_swap 3 2 5 1 4
```

### Bonus - Checker

The checker program reads operations and checks if they sort the stack correctly.

#### Provide a list of integers:

```sh
./checker <list_of_integers>
```

#### example:

```sh
./checker 3 2 5 1 4
```
#### Input:
pb
pb
sa
pa
pa

## Commands
### sa: swap the first 2 elements at the top of stack a.
### sb: swap the first 2 elements at the top of stack b.
### ss: sa and sb at the same time.
### pa: take the first element at the top of b and put it at the top of a.
### pb: take the first element at the top of a and put it at the top of b.
### ra: shift up all elements of stack a by 1.
### rb: shift up all elements of stack b by 1.
### rr: ra and rb at the same time.
### rra: shift down all elements of stack a by 1.
### rrb: shift down all elements of stack b by 1.
### rrr: rra and rrb at the same time.

## Project Structure

### src/: Source code files.
### include/: Header files.
### Makefile: Makefile to compile the project.
### libft/: Directory containing the Libft library used in the project.

## Contributing
Contributions are welcome! If you find any issues or have suggestions for improvement, feel free to open an issue or create a pull request.


