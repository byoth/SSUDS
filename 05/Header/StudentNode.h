#pragma once

#include "Node.h"
#include "Student.h"


/*
* Student와 Node의 역할을 모두 할 수 있는 별도의 클래스
* 두 클래스를 함께 상속 받음
*/
class StudentNode : public Student, public Node {

public:

    // Node 클래스 생성자에는 파라미터가 없으므로 여기도 필요 없음
    StudentNode(int id, const char* name, const char* dept) : Student(id, name, dept), Node() { }


    // Node의 display보다 우선적으로 호출됨
    void display() override {

        // protected 사용해서 접근 가능
        printf("학번: %-15d | 성명: %-10s | 학과: %-20s\n", id, name, dept);
    }

};