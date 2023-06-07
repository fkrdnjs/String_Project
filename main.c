#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include "my_strlen.h"
#include "my_strcpy.h"
#include "my_strncpy.h"
#include "my_strcat.h"
#include "my_strncat.h"

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

    //my_strcat 작동 코드
    char dest3[20] = "Hello, ";
    const char* src = "World!";
    my_strcat(dest3, src);
    printf("Concatenated string: %s\n", dest3);

    //my_strncat 작동 코드
    char dest4[20] = "Hello, ";
    my_strncat(dest4, src, 3);
    printf("Concatenated string: %s\n", dest4);

    //my_strcmp 작동 코드
    char* str1 = "Hello";
    char* str2 = "World";
    int result = my_strcmp(str1, str2);

    if (result < 0) {
        printf("str1 is less than str2\n");
    }
    else if (result > 0) {
        printf("str1 is greater than str2\n");
    }
    else {
        printf("str1 is equal to str2\n");
    }

    return 0;
}