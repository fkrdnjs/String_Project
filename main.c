#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include "my_strlen.h"
#include "my_strcpy.h"

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

    return 0;
}