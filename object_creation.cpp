
// class and objects in oops

/*
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    int roll_no;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << roll_no << endl;
    }
};

int main() {
    Student s1;

    s1.name = "Rahul";
    s1.age = 20;
    s1.roll_no = 101;

    s1.display();

    return 0;
}

*/


// without using the oops no object and class

/*

#include <iostream>
using namespace std;

string name;
int age;

void display() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

int main() {
    name = "Rahul";
    age = 20;

    display();

    return 0;
}

*/


// more than two objects or students

/*

#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    int roll_no;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << roll_no << endl;
    }
};

int main() {
    Student s1;
    Student s2;

    s1.name = "Rahul";
    s1.age = 20;
    s1.roll_no = 101;

    s2.name="sudeep";
    s2.age=21;
    s2.roll_no=560;

    s1.display();
    cout<<endl;
    s2.display();

    return 0;
}

*/



//bank account examples

#include <iostream>
using namespace std;

class bank_account {
private:
    int balance;
    int account_nbr;
    string name;
    static int totalaccounts;

public:
    // Constructor
    bank_account(string accountholder, int initialbalance) {
        name = accountholder;
        balance = initialbalance;
        totalaccounts++;
        account_nbr = totalaccounts;
    }

    // Deposit function
    void deposit(int amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    // Withdraw function
    void withdraw(int amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }

    // Display account details
    void display() {
        cout << "Account Number: " << account_nbr << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

// Static variable initialization
int bank_account::totalaccounts = 0;

int main() {
    bank_account acc1("Rahul", 1000);
    bank_account acc2("Anjali", 2000);

    acc1.deposit(500);
    acc1.withdraw(300);
    acc1.display();

    cout << endl;

    acc2.display();

    return 0;
}

// car class and objects oops

/*


#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string color;

    void start() {
        cout << brand << " car has started." << endl;
    }

    void stop() {
        cout << brand << " car has stopped." << endl;
    }
};

int main() {
    Car c1;

    c1.brand = "Toyota";
    c1.color = "Red";

    c1.start();
    c1.stop();

    return 0;
}


*/
