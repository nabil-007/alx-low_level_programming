#! /bin/sh
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar rc ar  liball.a *.o
