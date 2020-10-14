#include <iostream>

#include "Header/Swap.h"


void testSwap() {
    int a = 1, b = 2;
    printf("swap을 호출하기 전: a=%d, b=%d\n", a, b);

    swap(a, b);
    printf("일반 swap을 호출한 다음: a=%d, b=%d\n", a, b);

    swap(&a, &b);
    printf("포인터 swap을 호출한 다음: a=%d, b=%d\n", a, b);
}