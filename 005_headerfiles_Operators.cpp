#include<iostream>
/*There are two types of header files
1. System header files: It comes with compiler
2. User defined header files: It is written by the programmer
C++ reference for header files- https://en.cppreference.com/w/cpp/header
*/

// #include"this.h" //this will produce a error if this files isn't in the current directory


using namespace std;

int main()
{
    int a = 81, b= 9;
    float c = 45, d= 6;
    cout<<"This is hello world program"<<endl;  //'endl' works like '\n' newline command
    cout<<"Operators in C++"<<endl;
    
    //Arithmatic Operators
    cout<<"The value of a+b is "<<a+b<<endl; //
    cout<<"The value of a-b is "<<a-b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of a/b is "<<a/b<<endl;
    cout<<"The value of a%b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<"The value of c/d is "<<c/d<<endl;
    cout<<endl;
    //Assignment Operators--> Used to assign values to variables
    // int a = 3, b = 9;
    // char d = 'd';

    // Comparison Operators-->prints 0 for False and 1 for True
    cout<<"Following are the comparison Operators:"<<endl;
    cout<<"The value of (a==b) is "<<(a==b)<<endl;
    cout<<"The value of (a!=b) is "<<(a!=b)<<endl;
    cout<<"The value of (a>=b) is "<<(a>=b)<<endl;
    cout<<"The value of (a<=b) is "<<(a<=b)<<endl;
    cout<<"The value of (a>b) is "<<(a>b)<<endl;
    cout<<"The value of (a<b) is "<<(a<b)<<endl;
    cout<<endl;

    //Logical Operators
    cout<<"Following are the Logical  Operators:"<<endl;
    cout<<"The value of logical and operator ((a==b) && (a>b)) is  "<<((a==b) && (a>b))<<endl; //True if both true, Either False 
    cout<<"The value of logical or operator ((a==b) || (a>b)) is "<<((a==b) || (a>b))<<endl; //True if one true, False if both False
    cout<<"The value of logical not operator (!(a==b)) is "<<(!(a==b))<<endl; //prints opposite of the result
    cout<<endl;
    return 0;
}

