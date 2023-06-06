#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include "my_strlen.h"

int main(void)
{
    char* str = "Hello, World!";
    int length = my_strlen(str);
    printf("Length of the string: %u\n", length);

    return 0;
}