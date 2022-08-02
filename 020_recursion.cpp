#include<iostream>
using namespace std;

int factorial(int n)
{   
    int fact =1;
    if (n<= 1)
    {
        return 1;
    }
    fact = n * factorial((n-1));
    return fact;
}


int main()
{
    //Factorial of a Number
    // 6! = 6*5*4*3*2*1 =720
    //n! = n*(n-1)!
    //0! = 1
    //1! = 1
    int  a;
    cout<<"Enter a number:"<<endl;
    cin>>a;
    cout<<"The factorial of the given number is: "<<factorial(a)<<endl;
    return 0;
}