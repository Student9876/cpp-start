#include<iostream>
using namespace std;
void sum(int a, int b, int c=0)
{
    cout<<"Summation is: "<<(a+b+c)<<endl;
}
void sub(int a, int b)
{
    cout<<"Subtraction value is: "<<(a-b)<<endl;
}
void mul(int a, int b, int c=1)
{
    cout<<"Multiplication value is: "<<(a*b*c)<<endl;
}
void divide(float a, float b)
{
    if (b!=0)
        cout<<"Division value is: "<<(a/b)<<endl;
    else
        cout<<"Error. Denominator can't be zero!!";
}
int main()
{
    int a,b,c,val;
    float x,y;
    while (0<1)
    {
        cout<<"Choose Option:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Divition\n5.Exit"<<endl;
        cin>>val;
        switch(val)
        {
            case 1:
                {
                    cout<<"Enter first number: "<<endl;
                    cin>>a;
                    cout<<"Enter second number: "<<endl;
                    cin>>b;
                    cout<<"Enter third number: "<<endl;
                    cin>>c;
                    sum(a,b,c);
                    break;
                }
            case 2:
                {
                    cout<<"Enter first number: "<<endl;
                    cin>>a;
                    cout<<"Enter second number: "<<endl;
                    cin>>b;
                    sub(a,b);
                    break;
                }
            case 3:
                {
                    cout<<"Enter first number: "<<endl;
                    cin>>a;
                    cout<<"Enter second number: "<<endl;
                    cin>>b;
                    cout<<"Enter third number: "<<endl;
                    cin>>c;
                    mul(a,b,c);
                    break;    
        }
            case 4:
                {
                    cout<<"Enter first number: "<<endl;
                    cin>>x;
                    cout<<"Enter second number: "<<endl;
                    cin>>y;
                    divide(x,y);
                    break;                        
                }
            case 5:
                exit(0);
            default:
            {
                cout<<"You entered a wrong choice!!"<<endl;
                break;
            }

        }
    }
    return 0;
}