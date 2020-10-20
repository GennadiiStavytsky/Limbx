#include "libmx.h"

void mx_strdel(char **str) {
    if (str != NULL && *str != NULL) {
        free(*str);
        *str = NULL;
    }
}

// takes a pointer to a string
// frees string memory with free
// sets the string to NULL
