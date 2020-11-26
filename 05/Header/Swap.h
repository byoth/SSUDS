#pragma once


void swap(int x, int y) { // 지역변수
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
}

// 파라미터로 포인터 사용
void swap(int* px, int* py) {
    int tmp;
    tmp = *px;
    *px = *py;
    *py = tmp;
}