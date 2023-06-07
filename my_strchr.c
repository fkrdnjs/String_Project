// NULL 사용을 위한 include
#include "stddef.h"

char* my_strchr(const char* str, int ch) {
    while (*str != '\0') {
        if (*str == ch) {
            return (char*)str;
        }
        str++;
    }
    if (ch == '\0') {
        return (char*)str;
    }
    return NULL;
}