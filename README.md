# Libmx Library

**Project**: Custom Utility Library 

## Overview

Libmx is a custom C library that provides a variety of utility functions. These functions are designed to help with string manipulation, memory management, mathematical operations, and more. The library follows the DRY principle (Don't Repeat Yourself), enabling efficient code reuse in future projects.

## Features

### Utility Functions
- **mx_printchar**: Prints a single character.
- **mx_print_unicode**: Prints ASCII and multibyte characters.
- **mx_printstr**: Prints a string.
- **mx_print_strarr**: Prints an array of strings.
- **mx_printint**: Prints an integer value.
- **mx_pow**: Calculates the power of a number.
- **mx_sqrt**: Computes the square root of a non-negative number.
- **mx_nbr_to_hex**: Converts an unsigned long number to hexadecimal.
- **mx_hex_to_nbr**: Converts a hexadecimal string to an unsigned long.
- **mx_itoa**: Converts an integer to a string.
- **mx_foreach**: Applies a function to each element of an array.
- **mx_binary_search**: Searches for a string in a sorted array using binary search.
- **mx_bubble_sort**: Sorts an array of strings lexicographically.
- **mx_quicksort**: Sorts an array of strings by length using the quicksort algorithm.

### String Manipulation
- **mx_strlen**: Returns the length of a string.
- **mx_str_reverse**: Reverses a string.
- **mx_strdel**: Frees memory allocated for a string.
- **mx_strsplit**: Splits a string into an array of words.

### Memory Management
- **mx_memset**: Fills memory with a constant byte.
- **mx_memcpy**: Copies memory.
- **mx_memmove**: Safely copies memory areas.
- **mx_realloc**: Reallocates memory.

### Linked List Operations
- **mx_create_node**: Creates a new node for a linked list.
- **mx_push_front**: Adds a node to the beginning of a list.
- **mx_push_back**: Adds a node to the end of a list.
- **mx_pop_front**: Removes the first node of a list.
- **mx_sort_list**: Sorts a linked list in ascending order.

## Usage

To use the library in your project:
1. Clone the repository.
2. Use the provided Makefile to build the library.
3. Include the header file `libmx.h` in your source code.

```bash
git clone git@github.com:nishiinoya/libmx.git
cd libmx
make
```

## License

This project is open-source and available under the [MIT License](LICENSE).
