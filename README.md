*This project has been created as part of the 42 curriculum by ourhoutt.*

# Libft - Your Very First Own Library

## Description
**Libft** is a foundational 42 project that involves re-creating key C standard library (`libc`) functions along with additional utility routines for memory allocation, string processing, and linked list management. The output is a static library (`libft.a`) to be reused in future C programming projects across the curriculum.

---

## Instructions

### Compilation
Compile the library using the provided `Makefile`:

```bash
# Compile mandatory functions into libft.a
make

# Clean object files (.o)
make clean

# Clean object files and libft.a
make fclean

# Rebuild everything
make re
```

### Usage
Include the header in your C code and link the static library during compilation:

```c
#include "libft.h"
```

```bash
cc -Wall -Wextra -Werror main.c libft.a
```

---

## Function Overview

### Part 1 - Libc Functions
* **Character Checks:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
* **String Utilities:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`
* **Conversion & Memory:** `ft_toupper`, `ft_tolower`, `ft_atoi`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
* **Allocation:** `ft_calloc`, `ft_strdup`

### Part 2 - Additional Functions
* **String Allocation:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`
* **Functional Iteration:** `ft_strmapi`, `ft_striteri`
* **File Descriptor Output:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Part 3 - Linked List Functions
Manipulates nodes defined by `t_list` (`void *content`, `struct s_list *next`):
* `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

---

##  Resources & AI Usage

* **References:** ISO C Standard manual pages (`man 3 strlen`, `man 3 malloc`, etc.), BSD string documentation (`<bsd/string.h>`).
* **AI Usage:** AI was utilized as an interactive mentor and mock evaluator to clarify low-level C memory concepts, pointers, and Makefile behavior, assisting in peer defense preparation.