#include "Header/2DInt.h"


void test2DInt() {
    int** mat;
    int rows, cols;

    printf("행과 열의 크기를 입력하시오: ");
    scanf("%d%d", &rows, &cols);

    mat = alloc2DInt(rows, cols);

    set2DRandom(mat, rows, cols);
    print2DInt(mat, rows, cols);
    free2DInt(mat, rows, cols);
}