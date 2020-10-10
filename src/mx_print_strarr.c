#include "libmx.h"
 
void mx_print_strarr(char **arr, const char *delim) {
    int size = 0;

    if (!arr || !delim)
        return;

    while (arr[size + 1] != NULL) {
        mx_printstr(arr[size]);
        mx_printstr(delim);
        size++;
    }
    mx_printstr(arr[size]);
    mx_printstr("\n");
}

// Print array of strings 
// mx_print_strarr({"Car", "Cow", "Plane"}, "*");
