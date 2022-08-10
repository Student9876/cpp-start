//Wap to calculate compound interest
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int p,r,n,t;
    float a;
    cout<<"Enter amount of Principal :";
    cin>>p;
    cout<<"Enter rate of interest(%) :";
    cin>>r;
    cout<<"Enter how many time the interest is applied in 1 year :";
    cin>>n;
    cout<<"Enter time(years) :";
    cin>>t;
    a = p*pow((1+r/n),n*t);
    cout<<"Return after "<<t<<" years is: "<<a;
    return 0;
}