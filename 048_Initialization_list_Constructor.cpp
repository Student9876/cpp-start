#include <iostream>
using namespace std;
/*
Syntax for initialization list in constructor:
constructor (argument-list): initialization-section
{
    assignment + other code;
}

*/
class Test
{
    int a;
    int b;

public:
    // All cases here can be executed
    // Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : a(i), b(2*j)
    // Test(int i, int j) : a(i), b(a+j)
    // Test(int i, int j) : b(j), a(i+b) --> [RED FLAG, This will create problems as a will have garbage value in windows
    // Because a will be initialized first, Because a is declared first ]
    Test(int i, int j) : a(i), b(j) // Constructor can be initialized outside or inside
    {
        cout << "Constructor Executed" << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
    // Alternative way to assign value with a constructor
};

int main()
{
    Test t(4, 5);
    return 0;
}