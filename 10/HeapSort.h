#pragma once

#include <functional>
#include <iostream>
#include <queue>

using namespace std;


void heapSortAsc(int a[], int n) {
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int i = 0; i < n; i++)
        minHeap.push(a[i]);

    for (int i = 0; i < n; i++) {
        a[i] = minHeap.top();
        minHeap.pop();
    }
}

void heapSortDesc(int a[], int n) {
    priority_queue<int> maxHeap;

    for (int i = 0; i < n; i++)
        maxHeap.push(a[i]);

    for (int i = 0; i < n; i++) {
        a[i] = maxHeap.top();
        maxHeap.pop();
    }
}

void displayArray(int a[], int n, char* s) {
    printf("%s", s);

    for (int i = 0; i < n; i++)
        printf(" %d", a[i]);

    printf("\n");
}