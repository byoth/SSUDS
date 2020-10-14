#include <iostream>

#include "Header/LinkedQueue.h"
#include "Header/IntNode.h"

using namespace std;


void testLinkedQueue() {
    cout << "# LinkedQueue" << endl;

    LinkedQueue que;


    // MARK: - enqueue

    for (int i = 0; i < 10; i++) {
        que.enqueue(new IntNode(i));
    }

    cout << "[enqueue]" << endl;
    que.display();


    // MARK: - dequeue

    for (int i = 0; i < 3; i++) {
        delete que.dequeue();
    }

    cout << "[dequeue]" << endl;
    que.display();

}