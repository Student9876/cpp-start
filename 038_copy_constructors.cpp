// There is always a copy constructor is by default allocated by cpp compiler
// So if it is not allocated manually then the program willnot throw error

#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }; // Default constructor
    Number(int num)
    {
        a = num;
    }
    // When no copy constructor is found, compiler supplies its own copy constructor
    //So Number z1(x); will not throw error
    //commennt out below function to check

    Number(Number &obj)
    {
        cout << "Copy constructor call!!!" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number for the object is " << a << endl;
    }
};
int main()
{
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    // z1 should exactly resemble z or y or x
    Number z1(x);
    z1.display();   //Copy constructor invoked

    z2 = z;     //Copy constructor not called. When assignment operator is used, copy constructor is not called
    z2.display();

    Number z3 = z;     //Copy constructor invoked, when declaration is made
    z3.display();

    return 0;
}