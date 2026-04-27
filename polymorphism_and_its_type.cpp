
//compile time polymorphism
// compiler decides which function i can call in compile time(before running code)

/*
#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Math m;
    cout << m.add(2, 3) << endl;       // calls first function
    cout << m.add(2, 3, 4) << endl;    // calls second function
}


*/

// run time polymorphism
// program decides which function i can call at the run time(while running or executing prm)

/*

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* a;
    Dog d;

    a = &d;
    a->sound();   // calls Dog's sound()
}

*/


// without virtual

/*

#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal sound" << endl;
    }
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
    Animal a;

    Animal* ptr;

    ptr = &d;
    ptr->sound();

    ptr = &c;
    ptr->sound();

    ptr = &a;
    ptr->sound();
}

*/


// with virtual

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {   // ✅ virtual added
        cout << "Animal sound" << endl;
    }
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
    Animal a;

    Animal* ptr;

    ptr = &d;
    ptr->sound();

    ptr = &c;
    ptr->sound();

    ptr = &a;
    ptr->sound();
}
