#pragma once

#include "Node.h"


// 후입선출
class LinkedStack {

    Node* top;

    /*
     * # 기존 Stack 멤버 변수
     * - Element array[];
     * - int top;
     */


public:

    LinkedStack() {
        top = NULL;
    }

    ~LinkedStack() {
        // 연결 리스트가 비어있기 전까지(top != NULL일 경우) top 요소를 반복적으로 삭제
        while (!isEmpty()) {

            // pop()은 Node 포인터를 반환하기 때문에 delete가 가능
            delete pop();
        }
    }

    void push(Node* n) {
        // 삽입될 노드에 기존 top 노드를 연결
        n->setLink(top);

        // top을 갱신
        top = n;
    }

    Node* pop() {
        // 비어있으면 삭제될 요소도 없음
        if (isEmpty()) return NULL;

        /*
        * 후입선출이므로 top을 삭제
        * pop()은 삭제된 노드를 반환해야 하기 때문에 삭제와 별개로 임시 변수가 필요
        */
        Node* n = top;

        // top을 기존 top에 연결된 노드로 갱신함으로써 기존 top은 삭제됨(연결 끊김)
        top = top->getLink();

        // 임시 변수를 반환
        return n;
    }

    bool isEmpty() {
        return top == NULL;
    }

    Node* peek() {
        return top;
    }

    void display() {
        for (Node* n = top; n != NULL; n = n->getLink()) {
            n->display();
        }
    }

};
