#!/bin/sh -e
gcc -Wall -Werror -Wextra -c *.c
ar cr libft.a *.o
