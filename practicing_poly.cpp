
// compile time polymorphism
// overloading
/*

#include<iostream>
using namespace std;

class add
{
   public:
       int sum(int a, int b)
       {
           cout<<"sum of integers is ="<<a+b<<endl;
       }

       int sum(int a, int b,int c)
       {
           cout<<"sum of 3 integers is ="<<a+b+c<<endl;
       }

       double sum(double a, double b)
       {
           cout<<"sum of float variables is ="<<a+b<<endl;
       }
};

int main()
{
    add d;
    d.sum(5,5);
    d.sum(0.5,2.0);
    d.sum(1,2,3);

    return 0;
}


*/

// run time polymorphism
// overriding

#include<iostream>
using namespace std;

class shape
{
public:
   virtual void draw()
    {
        cout<<"general drawing"<<endl;
    }
};

class circle:public shape
{
    void draw()
    {
        cout<<"circle is drawing"<<endl;
    }
};

class rectangle:public shape
{
    void draw()
    {
        cout<<"rectangle is drawing"<<endl;
    }
};

int main()
{
    shape *s;

    rectangle r;
    circle c;

    s=&c;
    s->draw();

    s=&r;
    s->draw();

}
