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
    //my_strlen �۵� �ڵ� - ���ڿ� ���� ��ȯ-----------------------------------------------------------
    char* str = "Hello, World!";
    int length = my_strlen(str);
    printf("my_strlen �۵� �ڵ� - ���ڿ��� ���� ��ȯ\n");
    printf("���ڿ� : %s\n", str);
    printf("��� : %d\n\n", length);

    //my_strcpy �۵� �ڵ� - ��ü ���ڿ� ����------------------------------------------------------------
    char dest[101]; //�����ϰ��� �ϴ� ���ڿ����� �� �� ���̷� ���� �ʿ�

    printf("my_strcpy �۵� �ڵ� - ��ü ���ڿ� ����\n");
    printf("���ڿ� : %s\n", str);
    my_strcpy(dest, str);
    printf("��� : %s\n\n", dest);

    //my_strncpy �۵� �ڵ� - ���ϴ� ���̸�ŭ ���ڿ� ����------------------------------------------------------
    char dest2[101]; //�����ϰ��� �ϴ� ���ڿ����� �� �� ���̷� ���� �ʿ�
    int n = 5;

    printf("my_strncpy �۵� �ڵ� - ���ϴ� ���̸�ŭ ���ڿ� ����\n");
    printf("���ڿ� : %s\n���� : %d\n", str, n);
    my_strncpy(dest2, str, n);
    printf("��� : %s\n\n", dest2);

    //my_strcat �۵� �ڵ� - ���ڿ� ��ü ��ġ��--------------------------------------------------------------------
    char dest3[101] = "Hello, "; // ����� ������ �迭 �Ҵ� �ʿ�
    const char* src = "World!";

    printf("my_strcat �۵� �ڵ� - ���ڿ� ��ü ��ġ��\n");
    printf("���ڿ�1 : %s\n���ڿ�2 : %s\n", dest3, src);
    my_strcat(dest3, src);
    printf("��� : %s\n\n", dest3);

    //my_strncat �۵� �ڵ� - ���ϴ� ���̸�ŭ ���ڿ� ��ġ��-------------------------------------------------------
    char dest4[101] = "Hello, "; // ����� ������ �迭 �Ҵ� �ʿ�
    
    printf("my_strncat �۵� �ڵ� - ���ϴ� ���̸�ŭ ���ڿ� ��ġ��\n");
    printf("���ڿ�1 : %s\n���ڿ�2 : %s\n���� : %d\n", dest4, src,3);
    my_strncat(dest4, src, 3);
    printf("��� : %s\n\n", dest4);

    //my_strcmp �۵� �ڵ� - ��ü ���ڿ� ��ġ ����, �������� ��---------------------------------------------------
    char* str1 = "Hello";
    char* str2 = "World";
    int result = my_strcmp(str1, str2);
    printf("my_strcmp �۵� �ڵ� - ��ü ���ڿ� ��ġ ����, �������� ��\n");
    printf("str1 : %s\nstr2 : %s\n", str1, str2);

    if (result < 0) { // ���������� str1�� �� �տ� �ִ�.
        printf("��� : str1�� ���������� �� ���̴�.\n\n");
    }
    else if (result > 0) { // ���������� str2�� �� �տ� �ִ�.
        printf("��� : str2�� ���������� �� ���̴�.\n\n");
    }
    else { // �� ���ڿ� ��ġ
        printf("��� : �� ���ڿ� ��ġ\n\n");
    }

    //my_strncmp �۵� �ڵ� - ���ϴ� ���̸�ŭ ���ڿ� ��ġ ����, �������� ��-----------------------------------------
    char* strA = "Hello, World!";
    char* strB = "Hello, C!";
    result = my_strncmp(strA, strB, 6);
    printf("my_strncmp �۵� �ڵ� - ���ϴ� ���̸�ŭ ���ڿ� ��ġ ����, �������� ��\n");
    printf("strA : %s\nstrB : %s\n���� : %d\n", strA, strB, 6);

    if (result < 0) {
        printf("��� : strA�� ���������� �� ���̴�.\n\n");
    }
    else if (result > 0) {
        printf("��� : strB�� ���������� �� ���̴�.\n\n");
    }
    else {
        printf("��� : �� ���ڿ� ��ġ\n\n");
    }

    //my_strchr �۵� �ڵ� - �ش� ���ڰ� ���ڿ��� �ִ���, �ִٸ� ���° �ε����� �ִ��� ��ȯ------------------------------
    str = "Hello, World!";
    int ch = 'W';
    char* result2 = my_strchr(str, ch);
    printf("my_strchr �۵� �ڵ� - �ش� ���ڰ� ���ڿ��� �ִ���, �ִٸ� ���° �ε����� �ִ��� ��ȯ\n");
    printf("���ڿ� : %s\n���� : %c\n", str, ch);

    if (result2 != NULL) {
        printf("��� : '%c'�� %d��° �ε����� �ִ�.\n\n", ch, result2 - str);
    }
    else {
        printf("��� : '%c' ����.\n\n", ch);
    }

    return 0;
}