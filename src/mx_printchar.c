#include "libmx.h"

void mx_printchar(char c) {
    write(1, &c, 1);
}

// prints ASCII character from 0-255
// mx_printchar('a'); or char chr = 'a'; mx_printchar(chr);
// c The letter you want to print
