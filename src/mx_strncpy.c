#include "libmx.h"

char *mx_strncpy(char *dst, const char *src, int len) {
    char *ptr = &*dst;
    dst[len] = '\0';
    while (len-- && (*dst++ = *src++));
    return ptr;
}
