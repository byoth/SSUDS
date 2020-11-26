#pragma once

#include "Node.h"


// 선입선출
class LinkedQueue {

    Node* front;
    Node* rear;


public:

    LinkedQueue() {
        front = rear = NULL;
    }

    // LinkedStack 소멸자 로직과 유사
    ~LinkedQueue() {
        while (!isEmpty()) {
            delete dequeue();
        }
    }


    bool isEmpty() {
        return front == NULL; // 꺼낼 노드가 없음
    }

    void enqueue(Node* n) {
        // 큐가 비어있다면 삽입될 노드는 큐의 첫 번째 요소
        if (isEmpty()) {

            // 따라서 front, rear 모두 이 노드로 갱신
            front = rear = n;

            return;
        }

        // 삽입될 노드를 기존 rear 노드에 연결한 뒤, rear를 갱신
        rear->setLink(n);
        rear = n;
    }

    Node* dequeue() {
        // 비어있으면 삭제될 요소도 없음
        if (isEmpty()) return NULL;

        Node* n = front;

        // front를 기존 front에 연결된 노드로 갱신함으로써 기존 front는 삭제됨(연결 끊김)
        front = front->getLink();

        return n;
    }

    Node* peek() {
        return front;
    }

    void display() {
        for (Node* n = front; n != NULL; n = n->getLink()) {
            n->display();
        }

        printf("\n");
    }

};
