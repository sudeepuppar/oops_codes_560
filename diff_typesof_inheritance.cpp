//write a cpp program to demonstrate single, multiple and multilevel inheritance

// single inheritance

/*

#include<iostream>
using namespace std;

class student
{
    int roll;

public:
    string name;

    void setroll(int r)
    {
        roll=r;
    }

    void display()
    {
        cout<<"the name of student is= "<<name<<endl;
        cout<<"the roll of student is= "<<roll<<endl;
    }
};


class frd : public student
{
private:
    long long mobno;
public:
    string frdname;

    void setmob(long long m)
    {
        mobno=m;
    }

    void displayfrd()
    {
        cout<<"the mobile number of frd is= "<<mobno<<endl;
        cout<<"the name of frd is= "<<frdname<<endl;
    }

};

int main()
{
    frd f;
    f.setroll(60);
    f.name="sudeep";
    f.frdname="kiran";
    f.setmob(8970031724);
    f.display();
    f.displayfrd();

    return 0;
}

*/


// multiple inheritance

/*

#include<iostream>
using namespace std;

class student
{
    int roll;

public:
    string name;

    void setroll(int r)
    {
        roll=r;
    }

    void display()
    {
        cout<<"the name of student is= "<<name<<endl;
        cout<<"the roll of student is= "<<roll<<endl;
    }
};

class teacher
{
    string sub;

public:
    void setsub(string s)
    {
        sub=s;
    }
    void displaysub()
    {
        cout<<"the subject  is= "<<sub<<endl;
    }

};

class frd : public student , public teacher
{
private:
    long long mobno;
public:
    string frdname;

    void setmob(long long m)
    {
        mobno=m;
    }

    void displayfrd()
    {
        cout<<"the mobile number of frd is= "<<mobno<<endl;
        cout<<"the name of frd is= "<<frdname<<endl;
    }

};

int main()
{
    frd f;
    f.setroll(60);
    f.name="sudeep";
    f.frdname="kiran";
    f.setmob(8970031724);
    f.display();
    f.displayfrd();
    f.setsub("OOPS");
    f.displaysub();

    return 0;
}

*/

// multilevel inheritance

#include<iostream>
using namespace std;

class student
{
    int roll;

public:
    string name;

    void setroll(int r)
    {
        roll=r;
    }

    void display()
    {
        cout<<"the name of student is= "<<name<<endl;
        cout<<"the roll of student is= "<<roll<<endl;
    }
};


class frd : public student //, public teacher
{
private:
    long long mobno;
public:
    string frdname;

    void setmob(long long m)
    {
        mobno=m;
    }

    void displayfrd()
    {
        cout<<"the mobile number of frd is= "<<mobno<<endl;
        cout<<"the name of frd is= "<<frdname<<endl;
    }

};

class teacher : public frd
{
    string sub;

public:
    void setsub(string s)
    {
        sub=s;
    }
    void displaysub()
    {
        cout<<"the subject  is= "<<sub<<endl;
    }

};

int main()
{
    frd f;
    f.setroll(60);
    f.name="sudeep";
    f.frdname="kiran";
    f.setmob(8970031724);
    f.display();
    f.displayfrd();
    teacher t;
    t.setsub("OOPs");
    t.displaysub();
    t.display();

    return 0;
}

