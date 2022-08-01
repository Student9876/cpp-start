//Inline functions

#include<iostream>
using namespace std;

inline int product(int a, int b) //when a function is working to small, Then make it inline.
                                // it will replace the called function with the code.
{
    return a*b;
}

int main()

{
    int a,b;
    cout<<"Enter the value of a &b:"<<endl;
    cin>>a>>b;
    //repeating too much time
    cout<<"The product of a and b is: "<<product(a,b)<<endl;
    cout<<"The product of a and b is: "<<product(a,b)<<endl;
    cout<<"The product of a and b is: "<<product(a,b)<<endl;
    cout<<"The product of a and b is: "<<product(a,b)<<endl;
    cout<<"The product of a and b is: "<<product(a,b)<<endl;
    cout<<"The product of a and b is: "<<product(a,b)<<endl;
    cout<<"The product of a and b is: "<<product(a,b)<<endl;
    cout<<"The product of a and b is: "<<product(a,b)<<endl;
    
    return 0;
}