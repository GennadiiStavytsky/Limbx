#include "libmx.h"
 
int mx_strlen(const char *string) {
    int len = 0;

    while (string[len])
        len++;

    return len;
}

// Returns string len
