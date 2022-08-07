//One class can contain multiple constructors
//This is called constructor overloading 
#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)      
    {
        a = x;
        b = 0;
    }
    Complex()      
    {
        a = 0;
        b = 0;
    }
    void printNumber()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};
int main()
{
    Complex c1(4, 7);
    c1.printNumber();

    Complex c2(9);
    c2.printNumber();

    Complex c3;
    c3.printNumber();

    return 0;
}