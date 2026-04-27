
/*
A software development team is designing a Student Management System. The system must ensure that student data is secure and cannot be modified directly from outside the class.
You are required to design a C++ program using appropriate access modifiers to achieve this.



 Requirements
Create a class named Student with the following data members:
Roll Number
Name
Marks
Ensure that all data members are:
Not directly accessible from outside the class
Provide the following member functions:
A function to set student details
Functions to get each data member
A function to display student details
Add validation:
Marks should be between 0 and 100
If invalid, assign marks as 0
In the main() function:
Create an object of the class
Set the student details
Display the details


Objective
Demonstrate the use of:
private access modifier (data hiding)
public member functions (controlled access)
Understand the importance of encapsulation in real-world applications
*/


#include<iostream>
using namespace std;

class student
{
private:
    string name;
    int roll;
    int marks;

    public:

    void setdetails(string n,int r,int m)
    {
        name=n;
        roll=r;
        if (m>=0&&m<=100)
        {
           marks=m;
        }
        else
            marks=0;

    }

    void display()
    {
        cout<<"the student details are :"<<endl;
        cout<<"student name :"<<name<<endl;
        cout<<"student roll number :"<<roll<<endl;
        cout<<"student marks :"<<marks<<endl;
    }

};
int main()
{
    student s;
    s.setdetails("sudeep",560,940);
    s.display();
   // cout<<marks<<endl;
    return 0;
}



