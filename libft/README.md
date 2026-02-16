*This project has been created as part of the 42 curriculum by todina-r.*

# LIBFT

## Description

libft is a personal C library containing reimplementations of standard functions from the C library, as well as additional utility functions.
The goal of this project is to gain a deeper understanding of C programming, memory management, and standard library behavior.

This library is intended to be used on Linux systems.

### Function

#### Character classification (`ctype.h`)

| Function | Return | Description |
| :------- | :----: | :---------- |
| ft_isascii | int | Check if a value is a valid ASCII character |
| ft_isalpha | int | Check if a character is alphabetic |
| ft_isdigit | int | Check if a character is numeric |
| ft_isalnum | int | Check if a character is alphanumeric |
| ft_isprint | int | Check if a character is printable |
| ft_toupper | int | Convert a lowercase character to uppercase |
| ft_tolower | int | Convert an uppercase character to lowercase |

#### String manipulation (`string.h`)

##### Null-terminated strings

| Function | Return | Description |
| :------- | :----: | :---------- |
| ft_strlen | int | Return the length of a string |
| ft_strncmp | int | Compare two strings |
| ft_strlcpy | int | Copy a string with size limitation |
| ft_strlcat | int | Concatenate strings with size limitation |
| ft_strdup | char * | Duplicate a string |
| ft_strchr | char * | Locate first occurrence of a character |
| ft_strrchar | char * | Locate last occurrence of a character |

##### Memory manipulation

| Function | Return | Description |
| :------- | :----: | :---------- |
| ft_bzero | void | Set a memory area to zero |
| ft_strnstr | char * | Locate a substring |
| ft_memset | void * | Fill memory with a constant byte |
| ft_memchr | void * | Locate a byte in memory |
| ft_memcmp | int | Compare memory areas |
| ft_memcpy | void * | Copy memory area |
| ft_memmove | void * | Copy memory area with overlap support |

#### Standard utilities (`stdlib.h`)

| Function | Return | Description |
| :------- | :----: | :---------- |
| ft_calloc | void * | Allocate and zero-initialize memory |
| ft_atoi | int | Convert string to integer |

#### Additional string utilities

| Function | Return | Description |
| :------- | :----: | :---------- |
| ft_substr | char * | Extract a substring |
| ft_strjoin | char * | Join two strings |
| ft_strtrim | char * | Trim characters from a string |
| ft_split | char ** | Split a string into an array |
| ft_itoa | char * | Convert integer to string |
| ft_strmapi | char * | Apply function to characters (new string) |
| ft_striter | void | Apply function to characters (in place) |

#### File descriptors

| Function | Return | Description |
| :------- | :----: | :---------- |
| ft_putchar_fd | void | Write a character to a file descriptor |
| ft_putstr_fd | void | Write a string to a file descriptor |
| ft_putendl_fd | void | Write a string followed by a newline |
| ft_putnbr_fd | void | Write an integer to a file descriptor |

#### Linked lists

```c
typedef struct s_list
{
	void            *content;
	struct s_list   *next;
}	t_list;
```

| Function | Return | Description |
| :------- | :----: | :---------- |
| ft_lstnew	| t_list * | Create a new list node |
| ft_lstadd_front | void | Add node at the beginning |
| ft_lstsize | int | Count list elements |
| ft_lstlast | t_list * | Return last node |
| ft_lstadd_back | void | Add node at the end |
| ft_lstdelone | void | Delete a single node |
| ft_lstclear | void | Delete all nodes |
| ft_lstiter | void| Apply function to each node |
| ft_lstmap | t_list * | Create new list from existing list |

## Instructions
This project uses make.

### Clone the repository
```sh
git clone git@vogsphere.42antananarivo.mg:vogsphere/intra-uuid-c81ca723-a115-4325-8f8c-65e6d60b47f5-7227654-todina-r libft
cd libft
```

### Build the library
```sh
make
# or
make all
# or
make libft.a
```

### Clean object files
```sh
make clean
```

### Clean object files and library
```sh
make fclean
```

### Rebuild
```sh
make re
```

### Usage example
In your source code:
```c
#include "libft.h"
```

In your terminal:
```sh
cc -o <output> <source_file> -I<path_to_libft.h> -L<path_to_libft.a> -lft
```

## Resources

### Documentation
 - atoi behavior: man strtol(3)
 - Printable characters: https://www.ascii-code.com/characters/printable-characters
 - strlcat documentation: https://pubs.opengroup.org/onlinepubs/9799919799/functions/strlcat.html

### AI
 - Proof reading for README
 - unit test code review during testing
