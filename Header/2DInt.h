#pragma once

#include <iostream>


int** alloc2DInt(int rows, int cols) {
    if (rows <= 0 || cols <= 0) return NULL;

    // 포인터(배열)의 배열을 할당
    int** mat = new int* [rows];

    // rows를 각각 할당
    for (int i = 0; i < rows; i++) {
        mat[i] = new int [cols];
    }

    return mat;
}

void free2DInt(int** mat, int rows, int cols=0) {
    // mat이 NULL이면 뭘 더 할 필요가 없음
    if (mat == NULL) return;

    // mat과 별개로 rows가 각각 할당되었기 때문에 각각 해제
    for (int i = 0; i < rows; i++) {
        delete [] mat[i];
    }

    // mat을 해제
    delete [] mat;
}

void set2DRandom(int** mat, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // rand()가 어떤 수여도 100을 나눈 나머지는 0~99
            mat[i][j] = rand() % 100;
        }
    }
}

void print2DInt(int** mat, int rows, int cols) {
    printf("행의 수 = %d, 열의 수 = %d\n", rows, cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // 가독성 높이기 위해 정수 4개 들어갈 공간에 출력
            printf("%4d", mat[i][j]);
        }

        printf("\n");
    }
}