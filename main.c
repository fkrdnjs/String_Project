#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include "my_strlen.h"
#include "my_strcpy.h"
#include "my_strncpy.h"

int main(void)
{
    //my_strlen 작동 코드
    char* str = "Hello, World!";
    int length = my_strlen(str);
    printf("Length of the string: %u\n", length);

    //my_strcpy 작동 코드
    char dest[20];
    my_strcpy(dest, str);
    printf("Copied string: %s\n", dest);

    //my_strncpy 작동 코드
    char dest2[20];
    int n = 5;
    my_strncpy(dest2, str, n);
    printf("Copied string: %s\n", dest2);

    return 0;
}