#include <iostream>

using namespace std;

int c = 65; //Global var


int main()
{
//***************Built in data types**************

    // int a, b, c;
    // cout<<"Enter value of a and b: "<<endl;
    // cin>>a>>b;

    // c = a+b;
    // cout<<"The sum is:"<<c<<endl;
    // cout<<"The global c is:"<<::c<<endl; //'::' is scope resolution operator, Used to get global var
    // cout<<endl;

//***************float, double and long double Literals**************

    //by default 35.6 is a Double in C++. So to pass the number as a float type 35.6f
    // float d = 35.6f; //f for making the number float
    // long double e = 35.6l; //l for making the number long double
    // cout<<"The value of float is:"<<d<<endl<<"The value of long double is: "<<e<<endl;



    // cout<<"The size of 34.4 is:"<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is:"<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is:"<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is:"<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is:"<<sizeof(34.4L)<<endl;

//***************Reference Variables**************
// Rohan --> Monty --> Rohu --> Dangerous Coder
    // float x = 455;
    // float & y =x;

    // cout<<x<<endl;
    // cout<<y<<endl;


//***************Typecasting**************
    int z = 45;
    float i = 34.67;

    cout<<"The value of float z is: "<<(float)z<<endl;
    cout<<"The value of float i is: "<<(float)i<<endl;

    cout<<"The value of int z is: "<<(int)z<<endl;
    cout<<"The value of int i is: "<<(int)i<<endl;

    cout<<"The expression z+i is: "<<(z+i)<<endl; //prints a float
    cout<<"The expression is z + int(i) is: "<< z + int(i)<<endl; //prints a int
    cout<<"The expression is z + (int)i is: "<<z + (int)i<<endl;  //prints a int 

    return 0;
}