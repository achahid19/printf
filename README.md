# printf-like function [_printf] - Simple C implementation

----

## Overview

This is a C project where we aim to create a simple version of the `printf` function. The main goal of this function
is to handle various conversion specifiers and produce formatted output to `stdout`. In our project, we will start as simple as 
possible, so we are going to implement the simpliest conversion specifiers first `%c, %s, %%`.

## How to use
1. **Clone this Repo to your locale machine**

2. **Code Compilation**
- Use the command below for compilation
```
$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c
```

3. **You can create your own string format!**
- To experiment our `_printf` function, create your own format string.
- For instance, use these format specifiers `%c`, `%d`, `%i`, `s`, in order to print characters, integers and strings

4. **Program Execution**
- Execute the program by running the command below:
```
$ ./a.out
``` 
- [NOTE: This is the executable file in linux machines.]

## Project Structure
- `main.h`: Contains prototypes of all the functions used to build the `_printf` function.
- `main.c`: Contains all the tests for the program
- `*.c`: Other C files that contains the implementation of `_printf` function.

## Task Completion
The project is divided into two parts, mandatory tasks / advanced tasks:
1. **Mandatory tasks:**
**Task 0: Implementation of basic conversion specifiers**
- Handles `%s`, `%c` and `%%`

2. **Task1: Handling integer conversion specifier**
- Extends the functionality in order to integrate `%i` and `%d`.
