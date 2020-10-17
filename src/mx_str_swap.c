#include "libmx.h"

void str_swap(char **str1, char **str2, int *swaps) {
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;

    if (mx_strlen(*str1) != mx_strlen(*str2))
        *swaps += 1;
}

// Swap strings
