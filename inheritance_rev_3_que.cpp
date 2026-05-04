// NO Default Constructor (your situation)

#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    string birthday;

public:
    // Constructor
    Person(string n, string b) {
        name = n;
        birthday = b;
    }

    // Print function
    virtual void print() {
        cout << "Name: " << name << endl;
        cout << "Birthday: " << birthday << endl;
    }
};

// Derived class: Student
class Student : public Person {
private:
    string major;

public:
    // Constructor
    Student(string n, string b, string m) : Person(n, b) {
        major = m;
    }

    // Print function
    void print() override {
        Person::print();
        cout << "Major: " << major << endl;
    }
};

// Derived class: Instructor
class Instructor : public Person {
private:
    double salary;

public:
    // Constructor
    Instructor(string n, string b, double s) : Person(n, b) {
        salary = s;
    }

    // Print function
    void print() override {
        Person::print();
        cout << "Salary: " << salary << endl;
    }
};

// Main function to test
int main() {
    Student s("Alice", "2002-05-10", "Computer Science");
    Instructor i("Dr. Smith", "1980-03-22", 75000);

    cout << "Student Info:" << endl;
    s.print();

    cout << "\nInstructor Info:" << endl;
    i.print();

    return 0;
}

// with default constructor


#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    string birthday;

public:
    // Default constructor
    Person() {
        name = "";
        birthday = "";
    }

    // Setter function
    void setPerson(string n, string b) {
        name = n;
        birthday = b;
    }

    // Print function
    virtual void print() {
        cout << "Name: " << name << endl;
        cout << "Birthday: " << birthday << endl;
    }
};

// Derived class: Student
class Student : public Person {
private:
    string major;

public:
    // Default constructor
    Student() {
        major = "";
    }

    // Setter
    void setStudent(string n, string b, string m) {
        setPerson(n, b);  // call base class setter
        major = m;
    }

    // Print function
    void print() {
        Person::print();
        cout << "Major: " << major << endl;
    }
};

// Derived class: Instructor
class Instructor : public Person {
private:
    double salary;

public:
    // Default constructor
    Instructor() {
        salary = 0.0;
    }

    // Setter
    void setInstructor(string n, string b, double s) {
        setPerson(n, b);  // call base class setter
        salary = s;
    }

    // Print function
    void print() {
        Person::print();
        cout << "Salary: " << salary << endl;
    }
};

// Main function
int main() {
    Student s;
    Instructor i;

    s.setStudent("Alice", "2002-05-10", "Computer Science");
    i.setInstructor("Dr. Smith", "1980-03-22", 75000);

    cout << "Student Info:" << endl;
    s.print();

    cout << "\nInstructor Info:" << endl;
    i.print();

    return 0;
}
