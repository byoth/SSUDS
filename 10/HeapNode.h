#pragma once

#include <iostream>


class HeapNode {

    int key;


public:

    HeapNode(int _key = 0) {
        setKey(_key);
    }


    int getKey() { return key; }


    void setKey(int _key) {
        key = _key;
    }

    void display() {
        printf("\t%d", key);
    }

};