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
    //my_strlen 작동 코드 - 문자열 길이 반환-----------------------------------------------------------
    char* str = "Hello, World!";
    int length = my_strlen(str);
    printf("my_strlen 작동 코드 - 문자열의 길이 반환\n");
    printf("문자열 : %s\n", str);
    printf("결과 : %d\n\n", length);

    //my_strcpy 작동 코드 - 전체 문자열 복사------------------------------------------------------------
    char dest[101]; //복사하고자 하는 문자열보다 더 긴 길이로 선언 필요

    printf("my_strcpy 작동 코드 - 전체 문자열 복사\n");
    printf("문자열 : %s\n", str);
    my_strcpy(dest, str);
    printf("결과 : %s\n\n", dest);

    //my_strncpy 작동 코드 - 원하는 길이만큼 문자열 복사------------------------------------------------------
    char dest2[101]; //복사하고자 하는 문자열보다 더 긴 길이로 선언 필요
    int n = 5;

    printf("my_strncpy 작동 코드 - 원하는 길이만큼 문자열 복사\n");
    printf("문자열 : %s\n길이 : %d\n", str, n);
    my_strncpy(dest2, str, n);
    printf("결과 : %s\n\n", dest2);

    //my_strcat 작동 코드 - 문자열 전체 합치기--------------------------------------------------------------------
    char dest3[101] = "Hello, "; // 충분한 길이의 배열 할당 필요
    const char* src = "World!";

    printf("my_strcat 작동 코드 - 문자열 전체 합치기\n");
    printf("문자열1 : %s\n문자열2 : %s\n", dest3, src);
    my_strcat(dest3, src);
    printf("결과 : %s\n\n", dest3);

    //my_strncat 작동 코드 - 원하는 길이만큼 문자열 합치기-------------------------------------------------------
    char dest4[101] = "Hello, "; // 충분한 길이의 배열 할당 필요
    
    printf("my_strncat 작동 코드 - 원하는 길이만큼 문자열 합치기\n");
    printf("문자열1 : %s\n문자열2 : %s\n길이 : %d\n", dest4, src,3);
    my_strncat(dest4, src, 3);
    printf("결과 : %s\n\n", dest4);

    //my_strcmp 작동 코드 - 전체 문자열 일치 여부, 사전순서 비교---------------------------------------------------
    char* str1 = "Hello";
    char* str2 = "World";
    int result = my_strcmp(str1, str2);
    printf("my_strcmp 작동 코드 - 전체 문자열 일치 여부, 사전순서 비교\n");
    printf("str1 : %s\nstr2 : %s\n", str1, str2);

    if (result < 0) { // 사전순으로 str1이 더 앞에 있다.
        printf("결과 : str1이 사전순으로 더 앞이다.\n\n");
    }
    else if (result > 0) { // 사전순으로 str2가 더 앞에 있다.
        printf("결과 : str2가 사전순으로 더 앞이다.\n\n");
    }
    else { // 두 문자열 일치
        printf("결과 : 두 문자열 일치\n\n");
    }

    //my_strncmp 작동 코드 - 원하는 길이만큼 문자열 일치 여부, 사전순서 비교-----------------------------------------
    char* strA = "Hello, World!";
    char* strB = "Hello, C!";
    result = my_strncmp(strA, strB, 6);
    printf("my_strncmp 작동 코드 - 원하는 길이만큼 문자열 일치 여부, 사전순서 비교\n");
    printf("strA : %s\nstrB : %s\n길이 : %d\n", strA, strB, 6);

    if (result < 0) {
        printf("결과 : strA가 사전순으로 더 앞이다.\n\n");
    }
    else if (result > 0) {
        printf("결과 : strB가 사전순으로 더 앞이다.\n\n");
    }
    else {
        printf("결과 : 두 문자열 일치\n\n");
    }

    //my_strchr 작동 코드 - 해당 문자가 문자열에 있는지, 있다면 몇번째 인덱스에 있는지 반환------------------------------
    str = "Hello, World!";
    int ch = 'W';
    char* result2 = my_strchr(str, ch);
    printf("my_strchr 작동 코드 - 해당 문자가 문자열에 있는지, 있다면 몇번째 인덱스에 있는지 반환\n");
    printf("문자열 : %s\n문자 : %c\n", str, ch);

    if (result2 != NULL) {
        printf("결과 : '%c'는 %d번째 인덱스에 있다.\n\n", ch, result2 - str);
    }
    else {
        printf("결과 : '%c' 없다.\n\n", ch);
    }

    return 0;
}