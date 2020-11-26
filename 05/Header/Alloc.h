#pragma once

#include <stdio.h>


// 정적 할당
void testStaticAlloc() {
    char str[1000];

    printf("str size: 1000\n");
}

// 동적 할당
void testDynamicAlloc() {
    char *str;
    int strSize;

    printf("str size? ");
    scanf("%d", &strSize);

    str = new char[strSize];

    delete [] str;
}