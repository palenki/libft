*This project has been created as part of the 42 curriculum by <pauhenr2>.*

# Libft

## Description
The **Libft** project is my very first project at 42. The goal is to re-code a set of standard C library functions, learning in this process how memory management, pointers, and string manipulation work under the surface.

## Library Description
This library will contain basic functions for:
- Checking characters (like checking if a character is a letter or a number).
- Manipulating strings (like counting the length of a text or copying a text).
- Managing memory (allocating, clearing and moving chunks of bytes).
- Utility functions (number-to-string conversion, printing to specific file descriptors).
- Linked lists handling (dynamically create, navigate, map and clear node structures).

### 1. Character Classification & Manipulation (is* & to*)
`ft_isalpha` - Checks if the character is an alphabetic letter.
`ft_isdigit` - Checks if the character is a digit (0 through 9).
`ft_isalnum` - Checks if the character is alphanumeric (either a letter or a digit).
`ft_isascii` - Checks if the character fits into the ASCII character set.
`ft_isprint` - Checks if the character is printable (including space).
`ft_toupper` - Converts a lowercase letter to uppercase.
`ft_tolower` - Converts an uppercase letter to lowercase.

### 2. Raw Memory Management (mem*)
`ft_memset` - Fills the first n bytes of a memory area with a constant byte.
`ft_bzero` - Erases the data in a memory area by writing zeros to it.
`ft_memcpy` - Copies n bytes from one memory area to another (areas must not overlap).
`ft_memmove` - Copies n bytes from one memory area to another safely (handles overlapping areas).
`ft_memchr` - Scans a memory area for the first instance of a specific character.
`ft_memcmp` - Compares two different memory areas byte by byte.

### 3. String Manipulation (str*)
`ft_strlen` - Calculates the total length of a string, excluding the terminating null byte.
`ft_strlcpy` - Copies a string into a bounded buffer, ensuring proper null-termination.
`ft_strlcat` - Appends a string into a bounded buffer, ensuring proper null-termination.
`ft_strchr` - Finds the first occurrence of a specific character in a string.
`ft_strrchr` - Finds the last occurrence of a specific character in a string.
`ft_strncmp` - Compares the first n characters of two strings.
`ft_strnstr` - Locates a substring inside a main string within a length limit.
`ft_strdup` - Duplicates a string by allocating dynamic memory for the copy using malloc.
`ft_substr` - Creates and returns a specific substring from a larger string.
`ft_strjoin` - Concatenates two strings together into a newly allocated string.
`ft_strtrim` - Removes specified character sets from the beginning and end of a string.
`ft_split` - Splits a single string into an array of strings using a character delimiter.
`ft_strmapi` - Applies a function to each character of a string to create a new modified copy.
`ft_striteri` - Applies a function to each character of a string, modifying the original in place.

### 4. Data Conversion
`ft_atoi` - Converts the initial portion of a string into an integer value.
`ft_itoa` - Converts an integer value into a newly allocated null-terminated string.

### 5. Dynamic Memory Allocation (Heap Management)
`ft_calloc` - Allocates memory for an array, initializes all its bytes to zero, and returns a pointer.

### 6. Output Functions
`ft_putchar_fd` - Outputs a single character to the given file descriptor.
`ft_putstr_fd` - Outputs a string to the given file descriptor.
`ft_putendl_fd` - Outputs a string followed by a newline character to the given file descriptor.
`ft_putnbr_fd` - Outputs an integer as text to the given file descriptor.

### 7. LINKED LISTS
`ft_lstnew` - Allocates and returns a new node initialized with content.
`ft_lstadd_front` - Adds a new node to the very beginning of the linked list.
`ft_lstsize` - Counts and returns the total number of nodes currently in the linked list.
`ft_lstlast` - Navigates to and returns a pointer to the last node of the linked list.
`ft_lstadd_back` - Appends a new node to the very end of the linked list.
`ft_lstdelone` - Frees the memory of a node's content using a custom function, then frees the node itself.
`ft_lstclear` - Deletes and frees an entire linked list node by node, setting the original pointer to NULL.
`ft_lstiter` - Iterates through a list and applies a function to the content of each individual node.
`ft_lstmap` - Iterates a list, applies a function to create a new list, and handles cleanups safely if an allocation fails.

## Instructions
The library is compiled into a `libft.a` static library using a `Makefile` with the `cc` compiler and strict flags (`-Wall -Wextra -Werror`).

### Compilation
Clone the repository and run `make` in the project root:

```bash
git clone https://github.com/palenki/libft.git
cd libft
make
```
This will generate the `libft.a` static library file.

### Available Makefile rules
`make` : Compiles the library.
`make clean` : Removes object files.
`make fclean` : Removes object files and `libft.a`.
`make re` : Runs `fclean` then `make`.

## Resources
- [Linux Man Pages](https://man7.org) - To read the documentation of the original C functions.
- [Linked Lists in C](https://www.geeksforgeeks.org/c/linked-list-in-c) — Conceptual overview of single linked list data structures.

### AI Usage Disclosure
**Artificial Intelligence** was used during the development of this project for the following purposes:

- **Resource gathering** — finding useful reference links to research and study new programming concepts.
- **Debugging assistance** — identifying and handling edge cases for various functions.
- **Mock evaluation** — reviewing the code and asking conceptual questions to deepen my understanding of memory management and pointers.
- **README writing** — structuring and writing this documentation file.
> No code was automatically generated or copy-pasted; all implementation logic was written entirely by me.
