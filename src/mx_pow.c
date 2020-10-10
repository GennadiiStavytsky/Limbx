#include "libmx.h"

double mx_pow(double n, unsigned int pow) {
    double res = 1;

    for (unsigned int i = 0; i < pow; i++)
        res *= n;

    return res;
}

// Return result of pow
// mx_pow(2, 5) == 32
// n number
// pow power of number
