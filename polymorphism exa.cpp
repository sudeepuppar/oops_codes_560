
//
/*

#include<iostream>
using namespace std;

class base
    {
    public:
        void showbase()
        {
            cout<<"base"<<endl;
        }
    };

    class derive: public base
    {
    public:
        void showderive()
        {
            cout<<"derive"<<endl;
        }
    };

    int main()
    {
        derive d1;
        //derive* ptr;
        base* ptr;

        ptr= &d1;
        ptr->showbase();
        //ptr->showderive();
        ((derive*)ptr)->showderive();

        return 0;

    }
*/


// run time polymorphism using virtual functions

#include<iostream>
using namespace std;

class base
{
public:
    virtual void show()
    {
        cout<<"show"<<endl;
    }

    };

    class derive1:public base
    {
        void show()
        {
            cout<<"derive"<<endl;
        }
    };
    class derive2:public base
    {
        void show()
        {
            cout<<"derive"<<endl;
        }
};

int main()
{
    derive1 d1;
    derive2 d2;
    base* ptr;
    ptr=&d1;
    ptr->show();
    ptr=&d2;
    ptr->show();

    return 0;
}
