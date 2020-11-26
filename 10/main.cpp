#include <iostream>

#include "HeapSort.h"
#include "MaxHeap.h"


void testHeapNode();
void testHeapSort();


int main() {
    testHeapNode();
    testHeapSort();

    getchar();

    return 0;
}


void testHeapNode() {
    MaxHeap heap;

    heap.insert(10);
    heap.insert(5);
    heap.insert(30);
    heap.insert(8);
    heap.insert(9);
    heap.insert(3);
    heap.insert(7);
    heap.display();

    heap.remove();
    heap.display();
    heap.remove();
    heap.display();
    printf("\n");
}

void testHeapSort() {
    // 임의의 배열
    int a[] = { 41, 67, 34, 0, 69, 24, 78, 58, 62, 64 };

    // 배열 사이즈 계산
    int n = sizeof(a) / sizeof(a[0]);

    displayArray(a, n, "기존 : ");

    heapSortAsc(a, n);
    displayArray(a, n, "오름차순 : ");

    heapSortDesc(a, n);
    displayArray(a, n, "내림차순 : ");
}