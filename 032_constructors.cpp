//Constructor--> a special member function

#include<iostream>
using namespace std;


class Complex
{
    int a,b;

    public:
    //Creating a constructor
    //Constructor is a special member function with same name as of the class.
    //It is used to initialize the objects of its class.
    //It is automatically invoked(called) whenever an object is created
    //No need of return type here
    //Name must be same as class.

    //This is called default constructor. As it isn't accept any parameters
    Complex(void); //Constructor declaration

    void printData(void)
        {
            cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
        }

};


Complex::Complex(void) //-----> Default Constructor. Do not accept Parameters
{
    a = 10;
    b = 25;
}
int main()
{
    Complex c;
    c.printData();
    return 0;
}

// Characteristics of Constructor

/* 
1. It should be decalred in the public part of the class.
2. They are automatically invoked whenever the object is created.
3. They cannot return values. Do not have return types. 
4. It can have default arguments. Like--> addNum(int a, int b=0)
5. We cannot refer to their address

*/