#include <iostream>

using namespace std;
struct Student {
    int roll_no;
    string name;
    string classes;
};

class CircularQueue {
    int front, rear;
    int count;
    struct Student stu[40];
public:
    CircularQueue(int n) {
        count = n;
        front = -1;
        rear = -1;
    }

    bool isEmpty();

    bool isFull();

    void enqueue();

    void DEQUE();

    void display();

};