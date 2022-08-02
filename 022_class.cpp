#include<iostream>
using namespace std;


class Employee
{
    private:
        int a,b,c;
    public:
        int d,e;
        void setData(int a1,int b1,int c1); //Declaration. We can also assign function later outside the class
        void getData()
        {
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
            cout<<"The value of c is: "<<c<<endl;
            cout<<"The value of d is: "<<d<<endl;
            cout<<"The value of e is: "<<e<<endl;
        }
};

void Employee::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee zeon;
    // zeon.a = 23; we cant access a private data directly. It can be accessed through a function in the class
    zeon.d = 45;
    zeon.e = 56;
    zeon.setData(1,3,5);
    zeon.getData();

    return 0;
}