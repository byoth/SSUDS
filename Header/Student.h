#pragma once

#include <iostream>

#define MAX_STRING 100


class Student {

// Student를 상속할 클래스에서 이 멤버 변수에 접근할 수 있어야 하기 때문에 protected 사용
protected:

    int id;
    char name[MAX_STRING];
    char dept[MAX_STRING];


public:

    // TRICK: - char* -> const char*
    Student(int _id, const char* _name, const char* _dept) {
        id = _id;

        /*
         * _name, _dept는 포인터로써 메모리 주소일 뿐이기 때문에
         * 메모리 주소에서 실제 문자열 값을 복사해오는 strcpy 사용
         */
        strcpy(name, _name);
        strcpy(dept, _dept);
    }


    // void set이 꼭 필요하진 않은 것 같아서 생성자에 직접 구현

};