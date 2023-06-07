#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include "my_strlen.h"
#include "my_strcpy.h"
#include "my_strncpy.h"
#include "my_strcat.h"
#include "my_strncat.h"
#include "my_strcmp.h"
#include "my_strncmp.h"
#include "my_strchr.h"

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

    //my_strncmp 작동 코드
    char* str11 = "Hello, World!";
    char* str22 = "Hello, C!";
    result = my_strncmp(str11, str22, 6);
    if (result < 0) {
        printf("str11 is less than str22\n");
    }
    else if (result > 0) {
        printf("str11 is greater than str22\n");
    }
    else {
        printf("str11 is equal to str22\n");
    }

    //my_strchr 작동 코드
    str = "Hello, World!";
    int ch = 'W';
    char* result2 = my_strchr(str, ch);
    if (result2 != NULL) {
        printf("Character '%c' found at position %ld\n", ch, result2 - str);
    }
    else {
        printf("Character '%c' not found\n", ch);
    }

    return 0;
}