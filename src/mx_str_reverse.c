#include "libmx.h"

void mx_str_reverse(char *s) {
    if (s) {
        int len = mx_strlen(s);

        for (int i = 0; i < len / 2; i++)
            mx_swap_char(&s[i], &s[len - i - 1]);
    }
}

// reverses a string using pointers. 
// Do nothing if a string does not exist.
