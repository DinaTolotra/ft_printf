*This project has been created as part of the 42 curriculum by todina-r.*

# ft_printf

## Description

The **ft_printf** project is a reimplementation of the standard C library function `printf()`.  
The goal of this project is to gain a deeper understanding of variadic functions, formatted output, and low-level I/O operations in C.

By recreating `printf()` from scratch, this project focuses on parsing format strings, handling variable arguments, and converting different data types into formatted output — all while matching the behavior of the original `printf()` as closely as possible within the project constraints.

The resulting function, `ft_printf()`, is compiled into a static library named **libftprintf.a**, which can be reused in other C projects.

## Supported Conversions

| Conversion | Description                                    |
| ---------- | ---------------------------------------------- |
| `%c`       | Prints a single character                      |
| `%s`       | Prints a string                                |
| `%p`       | Prints a pointer address in hexadecimal format |
| `%d`       | Prints a decimal (base 10) number              |
| `%i`       | Prints an integer in base 10                   |
| `%u`       | Prints an unsigned decimal number              |
| `%x`       | Prints a hexadecimal number (lowercase)        |
| `%X`       | Prints a hexadecimal number (uppercase)        |
| `%%`       | Prints a percent sign                          |

## Instructions

### Download

To get the project, in your terminal, run:

```bash
git clone <repo_link> ft_printf
cd ft_printf
```

### Compilation

To compile the library, simply run:

```bash
make
```

This will generate libftprintf and libft static libraries:

```bash
./libftprintf.a
./libft.a
```

And copy of the headers at `include` folder:

```bash
./include/ft_printf.h
./include/libft.h
```

### Usage

Include the header file and link the library and its dependency when compiling your program:

```c
#include "ft_printf.h"
```

```bash
cc main.c libftprintf.a libft.a -I<header_dir>
```

### Example

```c
ft_printf("%s %d!\n", "Hello", 42);
```

## Algorithm and Data Structure Choices

### Overview

The core of `ft_printf()` is a **format string parser** combined with **conversion-specific output handlers**.
The function iterates through the format string character by character and behaves differently depending on whether a normal character or a conversion specifier is encountered.

### Parsing Strategy

1. Traverse the format string sequentially
2. When a `%` character is found:

   * Inspect the next character to determine the conversion type
   * Dispatch the `va_list` to the corresponding handler function
3. If the character is not `%`, write it directly to standard output

This approach ensures:

* Simplicity
* Predictable behavior

### Variadic Arguments

The project relies on `<stdarg.h>` to manage variable arguments:

* `va_start` initializes argument handling
* `va_arg` retrieves each argument based on its expected type
* `va_end` cleans up after processing

### Data Structures

No complex data structures are used.
The implementation relies on:

* Primitive C types
* Helper functions for number conversion and output
* Recursive base conversion for hexadecimal and decimal formats

This decision keeps the implementation lightweight and compliant with project restrictions.

### Output Handling

All output is written directly using the `write()` system call.
No buffering is implemented, as required by the subject.
Each printed character contributes to a counter that tracks the total number of characters written, which is returned by `ft_printf()`.

## Resources

### Technical References

* `man 3 printf`
* `man 3 stdarg`
* GNU C Library Documentation

### AI Usage Disclosure

AI tools were used for:

* Clarifying project requirements
* Improving documentation structure and clarity
* Reviewing algorithm explanations and wording

AI was **not** used to generate or copy implementation code directly.
All logic and coding decisions were made and implemented by the project author.