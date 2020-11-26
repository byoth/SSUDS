#include <iostream>

#include "Header/LinkedStack.h"
#include "Header/StudentNode.h"

using namespace std;


void testLinkedStack() {
    cout << "# LinkedStack" << endl;

    LinkedStack stack;


    // MARK: - push

    stack.push(new StudentNode(2015130007, "홍길동", "컴퓨터공학과"));
    stack.push(new StudentNode(2015130100, "이순신", "기계공학과"));
    stack.push(new StudentNode(2015130135, "황희", "법학과"));

    cout << "[push]" << endl;
    stack.display();


    // MARK: - pop

    Node* n = stack.pop();

    cout << "[pop]" << endl;
    n->display();

    delete n;


    // MARK: - result

    cout << "[result]" << endl;
    stack.display();

}