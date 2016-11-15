#!/bin/bash
gcc -o $1 $1.c -Wall -Wextra -std=c89 -pedantic -Wmissing-prototypes -Wstrict-prototypes -Wold-style-definition -O3 -g

./$1
