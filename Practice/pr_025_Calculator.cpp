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
    void display1()
    {
        cout << "Value of a and b is :" << a1 << " " << b1 << endl
             << "And the result is :";
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
    void display2()
    {
        cout << "Value of a and b is :" << a2 << " " << b2 << endl
             << "And the result is :";
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{

public:
    
};

int main()
{
    int n, a, b;
    SimpleCalculator s;
    ScientificCalculator scal;
    HybridCalculator h;
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
                s.get_input(a, b);
                h.display1();
                s.sum();
                break;
            }
            case 2:
            {
                cout << "Enter two values " << endl;
                cin >> a >> b;
                s.get_input(a, b);
                h.display1();
                s.sub();
                break;
            }
            case 3:
            {
                cout << "Enter two values " << endl;
                cin >> a >> b;
                s.get_input(a, b);
                h.display1();
                s.mul();
                break;
            }
            case 4:
            {
                cout << "Enter two values " << endl;
                cin >> a >> b;
                s.get_input(a, b);
                h.display1();
                s.div();
                break;
            }
            }
        }
        else
        {

            switch (n)
            {
            case 5:
            {
                cout << "1.sin\n2.cos\3.tan" << endl;
                cin >> a;
                switch (a)
                {
                case 1:
                {
                    cout << "Enter a value: " << endl;
                    cin >> b;
                    scal.get_input(b);
                    h.display2();
                    scal.cal_sin();
                    break;
                }
                case 2:
                {
                    cout << "Enter a value: " << endl;
                    cin >> b;
                    scal.get_input(b);
                    h.display2();
                    scal.cal_cos();
                    break;
                }
                case 3:
                {
                    cout << "Enter a value: " << endl;
                    cin >> b;
                    scal.get_input(b);
                    h.display2();
                    scal.cal_tan();
                    break;
                }
                }
            }
            case 6:
            {
                cout << "Enter Number and the power:  ";
                cin >> a >> b;
                scal.get_input(a, b);
                h.display2();
                scal.cal_power();
                break;
            }
            case 7:
                exit(0);
            default:
                cout << "Wrong choice!!" << endl;
            }
        }
    }
    return 0;
}