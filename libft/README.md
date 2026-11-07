*This project has been created as part of the 42 curriculum by yobelkha.*

# Description

**Libft** is a project from the 42 curriculum where we recreate some standard C library functions from scratch.

The main goal is to understand how these functions work internally, improve our knowledge of C programming, and learn how to manage memory and manipulate strings.

The project also introduces linked lists and helps build a better understanding of pointers, memory allocation, and data structures.

# Instructions

### Compilation

To compile the library, run:

```bash
make
```

This generates the `libft.a` static library.

### Available commands

- `make` – Compile the library.
- `make clean` – Remove object files.
- `make fclean` – Remove object files and the library.
- `make re` – Recompile everything.

### Usage

Include the header file in your C project:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
cc main.c -L. -lft -o program
```

Then execute it:

```bash
./program
```

# Resources

The following resources were useful during the development of this project:

- [C Library Reference](https://en.cppreference.com/w/c)
- [Linux Manual Pages](https://man7.org/linux/man-pages/)
- [GNU C Library Documentation](https://www.gnu.org/software/libc/manual/)
- 42 subject PDF and project guidelines.

### AI Usage

AI tools, including ChatGPT, were used as learning assistants during the development of this project.

They helped with:
- Understanding C concepts such as pointers, memory allocation, and linked lists.
- Explaining how standard library functions work.
- Identifying potential edge cases and programming errors.
- Understanding compilation errors and improving code structure.

All implementations were written, tested, and reviewed by the student. AI was used to support learning and understanding rather than replace the programming work.
