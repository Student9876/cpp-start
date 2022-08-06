#include<iostream>
using namespace std;

int sum (int a, int b)
{
    int c = a+b;
    return c;
}

//This will not swap a and b
void swap(int a, int b)
{                   
    int temp = a;
    a = b;
    b = temp;
}

//This will change the values by using pointer
void swapPointer(int* a, int* b) //call by reference using pointer
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void swapReferenceVar(int &a, int &b) //call by reference using C++ reference variable
{
    int temp = a;
    a = b;
    b = temp;
}

int & swapReferenceVari(int &a, int &b) //call by reference using C++ reference variable
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}
int main()
{
    int x=4,y=5; //this declared values do not change
    cout<<"The value of x is: "<<x<<endl<<"The value of y is: "<<y<<endl;
    cout<<"The sum of 4 and 5 is: "<<sum(x,y)<<endl;
    // swapPointer(&x, &y);
    swapReferenceVar(x,y);
    cout<<"The value of x is: "<<x<<endl<<"The value of y is: "<<y<<endl;
    swapReferenceVari(x,y) = 625; //changing value of reference variable. 
    cout<<"The value of x is: "<<x<<endl<<"The value of y is: "<<y<<endl;
    return 0;
}