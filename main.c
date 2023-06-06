#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include "my_strlen.h"
#include "my_strcpy.h"
#include "my_strncpy.h"
#include "my_strcat.h"

int main(void)
{
    //my_strlen �۵� �ڵ�
    char* str = "Hello, World!";
    int length = my_strlen(str);
    printf("Length of the string: %u\n", length);

    //my_strcpy �۵� �ڵ�
    char dest[20];
    my_strcpy(dest, str);
    printf("Copied string: %s\n", dest);

    //my_strncpy �۵� �ڵ�
    char dest2[20];
    int n = 5;
    my_strncpy(dest2, str, n);
    printf("Copied string: %s\n", dest2);

    //my_strcat �۵� �ڵ�
    char dest3[20] = "Hello, ";
    const char* src = "World!";
    my_strcat(dest3, src);
    printf("Concatenated string: %s\n", dest3);

    return 0;
}