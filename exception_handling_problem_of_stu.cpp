
// writ cpp to read roll number name and subject marks of a student and
//implement a suitable exception handling methods to validate the input

#include<iostream>
using namespace std;

class student
{
public:
    int roll;
    //string name;
    //int age;
    //float marks;
};

void roll_er()
{   int roll;
    cout<<"enter the roll of student ";
    cin>>roll;
    try
    {
       if (roll>999)
            throw "roll number is only 3 digit";
       cout<<"the roll of student is "<<roll<<endl;
    }
    catch(const char* msg)
    {
        cout<< "ERROR :"<<msg<<endl;
    }
}

void name_er()
{
    string name;
    cout<<"enter the name of student ";
    cin >> name;

    try {
        for (int i = 0; i < name.length(); i++) {
            if (!isupper(name[i])) {
                throw "Name should be in capital letters";
            }
        }

        // Only prints if no error
        cout<<"the student name is" << name << endl;
    }
    catch (const char* msg) {
        cout << "ERROR: " << msg<<endl;
    }
}

void age_er()
{
    int age;
    cout<<"enter the age of student ";
    cin>>age;
    try
    {
        if(age<18)
            throw "age must be greater than 18";
            cout<<"the student age is"<<age<<endl;
    }
    catch(const char* msg)
    {
    cout<<"ERROR :"<<msg<<endl;
    }
}

int main()
{
    roll_er();
    name_er();
    age_er();
}
