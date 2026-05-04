
// without using the class

/*
#include<iostream>
using namespace std;

void display(int );
void display(float );
void display(int , float );

int main()
{
    int a=5;
    float b=5.5;

    display(a);
    display(b);
    display(a,b);
    return 0;
}
void display(int var1, float var2)
{
    cout<<"a="<<var1<<endl;
    cout<<"b="<<var2<<endl;

}
void display(int var1)
{
    cout<<"a="<<var1<<endl;

}
void display(float var2)
{
    cout<<"b="<<var2<<endl;

}

*/

// with using the class


#include<iostream>
using namespace std;

class variable
{
public:

void display(int );
void display(float );
void display(int , float );

};
void display(int var1, float var2)
{
    cout<<"a="<<var1<<endl;
    cout<<"b="<<var2<<endl;

}
void display(int var1)
{
    cout<<"a="<<var1<<endl;

}
void display(float var2)
{
    cout<<"b="<<var2<<endl;

}

int main()
{
    int a=5;
    float b=5.5;

    variable v1;
    v1.display(a);
    v2.display(b);
    v1.display(a,b);
    return 0;
}

