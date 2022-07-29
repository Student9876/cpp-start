//Constants, Manipulators, Operator Precedence
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int a = 34;
    cout<<"The value of a was: "<<a<<endl;
    a = 56;
    cout<<"The value of a is: "<<a<<endl;
    

    //******Constant******
    const int b = 4;
    cout<<"The value of constant b is: "<<b<<endl;
    // b = 45; This throws an error as constant value of b cannot be changed

    //******Manipulator******
    // endl
    int x = 5, y = 34, z = 6767;
    cout<<"The value of x is: "<<x<<endl;
    cout<<"The value of y is: "<<y<<endl;
    cout<<"The value of z is: "<<z<<endl;
    //setw()--> is alligns various lengths of number
    cout<<"The value of x with setw is: "<<setw(4)<<x<<endl;
    cout<<"The value of y with setw is: "<<setw(4)<<y<<endl;
    cout<<"The value of z with setw is: "<<setw(4)<<z<<endl;

    //*********Operators Presedence*********
    // link-https://en.cppreference.com/w/cpp/language/operator_precedence
    int i = 3, j = 4;
    int k = (i*5)+b-45+87;
    cout<<k;
    return 0;
    
}