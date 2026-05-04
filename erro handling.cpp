

//exception handling

/*
#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 0;
cout<<a/b;
}
*/



#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 0;

    try {
        if (b == 0)
            throw "Division by zero!";
        cout << a / b;
    }
    catch (const char* msg) {
        cout << "Error: " << msg;
    }

    return 0;
}

