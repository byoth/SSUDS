#pragma once

// display 오버라이딩 구현할 때 print 관련 함수를 편하게 사용할 수 있도록 추가
#include <iostream>


class Node {

    Node* link;

    // 데이터 멤버 변수가 없는 이유는 Node 클래스를 상속한 다른 클래스에서 선언될 것이기 때문


public:

    Node() {
        link = NULL;
    }


    Node* getLink() {
        return link;
    }

    void setLink(Node* p) {
        link = p;
    }

    // Node 클래스를 상속 받는 클래스에 override로 구현하기 위해 virtual 추가
    // https://blankspace-dev.tistory.com/412
    virtual void display() { }

};