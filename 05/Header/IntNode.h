#pragma once

#include "Node.h"


// (참고) Generic으로도 구현할 수 있음
class IntNode : public Node {

    int data;


public:

    IntNode(int _data) : Node() {
        data = _data;
    }

    void display() override {
        printf("%d ", data);
    }

};
