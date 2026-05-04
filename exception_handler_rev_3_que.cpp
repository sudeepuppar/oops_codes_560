//Write a program to implement a queue of integers and provide exception handlers
//for handling run time errors for following cases.
// i) Trying to read element from empty queue
//ii) Trying to insert a new element when queue is full.


#include <iostream>
using namespace std;

// Custom exception classes
class QueueOverflowException {
public:
    const char* what() {
        return "Queue Overflow: Cannot insert, queue is full.";
    }
};

class QueueUnderflowException {
public:
    const char* what() {
        return "Queue Underflow: Cannot delete, queue is empty.";
    }
};

// Queue class
class Queue {
private:
    int front, rear;
    int arr[5];   // fixed size queue

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int value) {
        if (rear == 4) {
            throw QueueOverflowException();
        }

        if (front == -1) front = 0;

        arr[++rear] = value;
        cout << "Inserted: " << value << endl;
    }

    int dequeue() {
        if (front == -1 || front > rear) {
            throw QueueUnderflowException();
        }

        int value = arr[front++];
        return value;
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// Main function
int main() {
    Queue q;

    try {
        q.enqueue(10);
        q.enqueue(20);
        q.enqueue(30);
        q.enqueue(40);
        q.enqueue(50);
        q.enqueue(60);  // Overflow case
    }
    catch (QueueOverflowException e) {
        cout << e.what() << endl;
    }

    q.display();

    try {
        for (int i = 0; i < 6; i++) {
            cout << "Deleted: " << q.dequeue() << endl;
        }
    }
    catch (QueueUnderflowException e) {
        cout << e.what() << endl;
    }

    return 0;
}
