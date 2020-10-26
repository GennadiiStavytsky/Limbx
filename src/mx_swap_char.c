#include "libmx.h"
 
void mx_swap_char(char *s1, char *s2) {
    if (*s1 && *s2) {
        char temp = *s1;
        *s1 = *s2;
        *s2 = temp;
    }
}

//swaps the characters of a string using pointers. Do nothing if s1 or s2 does not exist.
