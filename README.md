*This project has been created as part of the 42 curriculum by ybouhadm.*

# Libft

## Description

Libft is a static C library of 43 general-purpose functions. It reimplements
selected libc routines, adds string and output helpers, and provides a simple
singly linked list API. The public declarations are in `libft.h`; every
implementation is a separate `ft_*.c` file at the repository root.

## Instructions

On a system with `cc`, `make`, and `ar`:

```sh
make          # builds libft.a
make clean    # removes object files
make fclean   # also removes libft.a
make re       # rebuilds everything
```

Include `libft.h` in a C program and link `libft.a`, for example:

```sh
cc -Wall -Wextra -Werror example.c libft.a -o example
```

## Library guide: subject order

The file links below follow the order in the Libft subject. The source files
stay at the repository root with their required `ft_*.c` names.

### Part 1 - Libc functions

1. [ft_isalpha.c](ft_isalpha.c)
2. [ft_isdigit.c](ft_isdigit.c)
3. [ft_isalnum.c](ft_isalnum.c)
4. [ft_isascii.c](ft_isascii.c)
5. [ft_isprint.c](ft_isprint.c)
6. [ft_strlen.c](ft_strlen.c)
7. [ft_memset.c](ft_memset.c)
8. [ft_bzero.c](ft_bzero.c)
9. [ft_memcpy.c](ft_memcpy.c)
10. [ft_memmove.c](ft_memmove.c)
11. [ft_strlcpy.c](ft_strlcpy.c)
12. [ft_strlcat.c](ft_strlcat.c)
13. [ft_toupper.c](ft_toupper.c)
14. [ft_tolower.c](ft_tolower.c)
15. [ft_strchr.c](ft_strchr.c)
16. [ft_strrchr.c](ft_strrchr.c)
17. [ft_strncmp.c](ft_strncmp.c)
18. [ft_memchr.c](ft_memchr.c)
19. [ft_memcmp.c](ft_memcmp.c)
20. [ft_strnstr.c](ft_strnstr.c)
21. [ft_atoi.c](ft_atoi.c)
22. [ft_calloc.c](ft_calloc.c)
23. [ft_strdup.c](ft_strdup.c)

### Part 2 - Additional functions

1. [ft_substr.c](ft_substr.c)
2. [ft_strjoin.c](ft_strjoin.c)
3. [ft_strtrim.c](ft_strtrim.c)
4. [ft_split.c](ft_split.c)
5. [ft_itoa.c](ft_itoa.c)
6. [ft_strmapi.c](ft_strmapi.c)
7. [ft_striteri.c](ft_striteri.c)
8. [ft_putchar_fd.c](ft_putchar_fd.c)
9. [ft_putstr_fd.c](ft_putstr_fd.c)
10. [ft_putendl_fd.c](ft_putendl_fd.c)
11. [ft_putnbr_fd.c](ft_putnbr_fd.c)

### Part 3 - Linked list

1. [ft_lstnew.c](ft_lstnew.c)
2. [ft_lstadd_front.c](ft_lstadd_front.c)
3. [ft_lstsize.c](ft_lstsize.c)
4. [ft_lstlast.c](ft_lstlast.c)
5. [ft_lstadd_back.c](ft_lstadd_back.c)
6. [ft_lstdelone.c](ft_lstdelone.c)
7. [ft_lstclear.c](ft_lstclear.c)
8. [ft_lstiter.c](ft_lstiter.c)
9. [ft_lstmap.c](ft_lstmap.c)

Allocated results belong to the caller. Free each string returned by
`ft_split`, then free its array. `ft_lstclear` frees list nodes and uses the
caller-provided `del` function for their contents.

## Resources

- The local Libft subject, version 19.2 (`en.subject.pdf`).
- C library manual pages for the corresponding libc functions (`man 3`).
- AI use: ChatGPT helped reconstruct the source files and README from the
  subject and review implementation edge cases. Students should trace each
  function and reproduce it independently as a learning exercise.
