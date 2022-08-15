#include<iostream>
using namespace std;

int main()
{
    int a,b,temp;
    cout<<"Enter first value:";
    cin>>a;
    cout<<"Enter second value:";
    cin>>b;
    cout<<"Before swap\nFirst value:"<<a<<"\nSecond value:"<<b<<endl;
    temp = a;
    a = b;
    b = temp;
    cout<<"After swap\nFirst value:"<<a<<"\nSecond value:"<<b<<endl;

    return 0;
}