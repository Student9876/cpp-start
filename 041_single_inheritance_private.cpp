#include <iostream>
using namespace std;
class Base
{
    int data1; // private by default
public:
    int data2;
    void setData();
    void setData1(int n);
    int getData1(); // private data maybe be inheritable, but can be accessed using this public method which will be inheriting
    int getData2();
};

class Derived : private Base
{
    // class is being derived publically
    int data3;

public:
    void process();
    void display();
};

// methods defining
void Base::setData(void)
{
    data1 = 10;
    data2 = 20;
}
void Base ::setData1(int n)
{
    data1 = n;
}
int Base::getData1(void)
{
    return data1;
}
int Base::getData2(void)
{
    return data2;
}
void Derived ::process(void)
{
    // as the derived class is private, we cant call this functions directly from main.
    // We need derived class's methods to call them
    setData();
    setData1(5);

    data3 = data2 * getData1();
}
void Derived ::display(void)
{
    cout << "Value of Data 1 is: " << getData1() << endl;
    cout << "Value of Data 2 is: " << data2 << endl;
    cout << "Value of Data 3 is: " << data3 << endl;
}

int main()
{
    Derived der;
    // We can't call this methods because Derived class is now private
    // der.setData();
    // der.setData1(5); // we can also set value of data 1 using derived class objectF
    der.process();
    der.display();
    return 0;
}