
// abstract

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0;   // pure virtual → abstract
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Dog d;
    Cat c;

    d.sound();
    c.sound();
}
