
// code using the pointers with objects in a oops


#include<iostream>
using namespace std;

class ABC
{
public:
    int a=50;
};

int main()
{
    ABC obj1;
    ABC *ptr;
    ptr=&obj1;
    cout<<obj1.a;
    cout<<ptr->a;
    return 0;
}

// write cpp program using the concept of this pointer

#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    // Public data members
    string name;
    float marks;

    // Constructor using 'this' to distinguish members from parameters
    Student(string name, float marks) {
        this->name = name;
        this->marks = marks;
    }

    void display() {
        // Using this pointer explicitly to show it points to the current instance
        cout << "Student: " << this->name << " | Marks: " << this->marks << "%" << endl;
    }
};

int main() {
    // 1. Create object using constructor
    Student s1("Sudeep", 85.0);
    s1.display();

    // 2. Accessing and modifying public members directly from main
    s1.name = "Sudeep Uppar";
    s1.marks = 90.5;

    cout << "\nAfter direct modification:" << endl;
    s1.display();

    return 0;
}



// same another program
//using the concept this pointer
#include<iostream>
using namespace std;
class student
{
int a,b;
public:
void input(int a,int b){
this->a=a+b;
this->b=a-b;
}
void output(){
cout<<
}

}

