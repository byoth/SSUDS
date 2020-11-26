#pragma once

#include "HeapNode.h"


#define MAX_NODE_SIZE 200


class MaxHeap {

    HeapNode node[MAX_NODE_SIZE];

    int size;


public:

    MaxHeap() {
        size = 0;
    }


    bool isEmpty() { return size == 0; }
    bool isFull() { return size == MAX_NODE_SIZE - 1; }

    HeapNode& getParent(int i) { return node[i / 2]; }
    HeapNode& getLeft(int i) { return node[i * 2]; }
    HeapNode& getRight(int i) { return node[i * 2 + 1]; }


    void insert(int key) {
        if (isFull()) return;

        // 최하위 말단 노드부터 시작
        int i = ++size;

        /*
         * i > 1
         * - i가 1이면 getParent(i)가 유의미한 결과를 반환하지 않음
         * - i가 1 미만이면 올바른 범위의 index가 아님
         *
         * 삽입할 값이 현재 부모의 값보다 큰 동안 (= 최대 힙의 조건이 성립하지 않을 경우)
         * 현재 부모와의 교환을 반복
         */
        while (i > 1 && key > getParent(i).getKey()) {
            node[i] = getParent(i);

            // 부모의 index : int(자식의 index / 2)
            i /= 2;
        }

        node[i].setKey(key);
    }

    HeapNode remove() {
        if (isEmpty()) printf("Error");

        int parent = 1;
        int child = 2;

        // 기존 루트 노드
        HeapNode result = node[parent];

        HeapNode last = node[size--];

        // child가 올바른 범위에 있는 동안
        while (child <= size) {

            /*
             * 왼쪽 자식의 index : 부모의 index * 2
             * 오른쪽 자식의 index : 부모의 index * 2 + 1
             */

            // child는 왼쪽 자식과 오른쪽 자식 중 더 큰 값
            if (child < size && isRightFirst(parent)) child++;

            // 부모 노드가 자식 노드보다 크거나 같다는 최대 힙의 조건이 성립
            if (last.getKey() >= node[child].getKey()) break;

            node[parent] = node[child];
            parent = child;
            child *= 2;
        }

        node[parent] = last;

        return result;
    }

    void display() {
        int n = 1;

        for (int i = 1; i <= size; i++) {
            if (i == n) {
                n *= 2;
                printf("\n");
            }

            node[i].display();
        }

        printf("\n");
    }


protected:

    bool isRightFirst(int parent) {
        return getLeft(parent).getKey() < getRight(parent).getKey();
    }

};