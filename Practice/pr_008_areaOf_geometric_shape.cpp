#include<iostream>
using namespace std;
void square(int a)
{
    cout<<"Area of the Square with side of length "<<a<<" is: "<<(a*a)<<endl;
}
void rect(int a, int b)
{
    cout<<"Area of the Rectangle with length "<<a<<"and breadth "<<b<< " is: "<<(a*b)<<endl;
}
void circle(int a)
{
    cout<<"Area of circle with radius "<<a<<" is: "<<float(3.14*a*a)<<endl;
}
int main()
{
    int r,x,val;
    while(0<1)
    {
        cout<<"*********Area calculator***********\nChoose Option:\n1.Circle\n2.Rectangle\n3.Square\n4.Exit"<<endl;
        cin>>val;
        switch (val)
        {
        case 1:
            cout<<"Enter Radius:";
            cin>>r;
            circle(r);
            break;
        case 2:
            cout<<"Enter length:";
            cin>>r;
            cout<<"Enter breadth:";
            cin>>x;
            rect(r,x);
            break;
        case 3:
            cout<<"Enter Side length:";
            cin>>r;
            square(r);
            break;
        case 4:
            exit(0);
        default:
            cout<<"Wrong Choice!!"<<endl;
            break;
        }
    }
    return 0;
}