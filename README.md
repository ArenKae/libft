# ft_printf

<p align="center">
  <img src="https://github.com/ArenKae/ArenKae/blob/main/42%20badges/libfte.png" alt="libft 42 project badge"/>
</p>

42 school's first project, libft, is about learning how the standard functions of C programming work, by coding them from scratch and creating our very own library. Libft is a  fundamental project, since this library will be used in future 42 school assignments.

## Status
Finished 12/16/2022.

Grade: 115/100

## Usage

- Clone the repository and use ```make``` to compile or ```make bonus``` to compile with bonus functions.

- The resulting file is a static library archive. To use it in our future code, we must include its header and link the library during compilation.

```c
// test.c

# include "include/libft.h"

int main(void)
{
	ft_example();
	return (0);
}
```
Compile the ``test.c`` file with the ft_printf library and run the program:
```bash
gcc test.c libft.a && ./a.out
```

## Included Functions

### Mandatory Functions
The mandatory functions of libft are either functions from the standard C library or other useful functions. They are mostly useful for character, string and memory manipulation.

Functions to check and manipulate characters:
- ft_isalpha
- ft_isdigit
- ft_isalnum
- ft_isascii
- ft_isprint
- ft_toupper
- ft_tolower

Functions to manipulate strings:
- ft_strlen
- ft_strlcpy
- ft_strlcat
- ft_strchr
- ft_strrchr
- ft_strncmp
- ft_strnstr
- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_strmapi
- ft_striteri

Functions to manipulate memory:
- ft_calloc
- ft_memset
- ft_bzero
- ft_memcpy
- ft_memmove
- ft_memchr
- ft_memcmp
- ft_strdup

Functions for numbers:
- ft_atoi
- ft_itoa

Functions to write to a file descriptor
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

### Bonus Functions
The bonus functions deal with linked lists manipulation. I'm currently missing the ones with an * at the end.
- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone*
- ft_lstclear*
- ft_lstiter*
- ft_lstmap*