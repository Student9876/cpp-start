#include <iostream>
#include <math.h>

using namespace std;

class SimpleCalculator
{
protected:
    int a1, b1;

public:
    void get_input(int n1, int n2)
    {
        a1 = n1;
        b1 = n2;
    }
    void sum()
    {
        cout << a1 + b1 << endl;
    }
    void sub()
    {
        cout << a1 - b1 << endl;
    }
    void mul()
    {
        cout << a1 * b1 << endl;
    }
    void div()
    {
        if (b1 != 0)
            cout << a1 / b1 << endl;
        else
            cout << "Denominator can't be Zero" << endl;
    }
};

class ScientificCalculator
{

protected:
    int a2, b2;

public:
    void get_input(int n1, int n2 = 0)
    {
        a2 = n1;
        b2 = n2;
    }
    void cal_sin()
    {
        cout << sin(a2);
    }
    void cal_cos()
    {
        cout << cos(a2);
    }
    void cal_tan()
    {
        cout << tan(a2);
    }
    void cal_power()
    {
        cout << pow(a2, b2);
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{

public:
    int v;
    void val(int v1)
    {
        v = v1;
    }
    void display()
    {
        if (v == 1) // Derived class became ambiguous when there are more than one value of same variable is available
            cout << "Value of a and b is :" << a1 << " " << b1 << endl
                 << "And the result is :";
        else
            cout << "Value of a and b is :" << a2 << " " << b2 << endl
                 << "And the result is :";
    }
};

int main()
{
    int n, a, b;
    SimpleCalculator s;
    ScientificCalculator scal;
    while (1 > 0)
    {
        cout << "Enter your choice: \n1.Summation\n2.Subtraction\n3.Multiplication\n4.Division\n5.Determine trignometric Values\n6.Power a number\n7.Exit" << endl;
        cin >> n;
        if (n > 0 && n < 5)
        {
            switch (n)
            {
            case 1:
            {
                cout << "Enter two values " << endl;
                cin >> a >> b;
                HybridCalculator h;
                h.val(1);
                s.get_input(a, b);
                h.display();
                s.sum();
                break;
            }