#!/bin/bash
gcc -wall -pedentic -werror -wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
