//Write a program to design a class for Stack data structure.
//Provide exception handling mechanism for stack overflow and stack underflow cases.

#include <iostream>
using namespace std;

// Custom exception classes
class StackOverflowException {
public:
    const char* what() {
        return "Stack Overflow: Cannot push element, stack is full.";
    }
};

class StackUnderflowException {
public:
    const char* what() {
        return "Stack Underflow: Cannot pop element, stack is empty.";
    }
};

// Stack class
class Stack {
private:
    int top;
    int arr[5];   // fixed size stack

public:
    Stack() {
        top = -1;
    }

    void push(int value) {
        if (top >= 4) {
            throw StackOverflowException();
        }
        arr[++top] = value;
        cout << "Pushed: " << value << endl;
    }

    int pop() {
        if (top < 0) {
            throw StackUnderflowException();
        }
        return arr[top--];
    }

    void display() {
        if (top < 0) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// Main function
int main() {
    Stack s;

    try {
        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);
        s.push(50);
        s.push(60);  // Overflow

    } catch (StackOverflowException e) {
        cout << e.what() << endl;
    }

    s.display();

    try {
        for (int i = 0; i < 6; i++) {
            cout << "Popped: " << s.pop() << endl;
        }
    } catch (StackUnderflowException e) {
        cout << e.what() << endl;
    }

    return 0;
}
