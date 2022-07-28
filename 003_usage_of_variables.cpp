#include<iostream>

using namespace std;
int glo =6; //global var


void sum()
{
    int a;
    a = glo;
    cout<<"Value of glo in global"<<a;
}
int main()
{
    // int a = 14;
    // int b = 15;
    int glo = 7;    //local variable get presidence over global
    int a = 16, b= 45;
    float pi;
    char c = 'u'; //only one character can be used. We cannot use it like c ='ghgt'
    sum();
    pi  = 22/7;
    cout<<"\nThe value of a is "<<a<<". \nThe value of b is "<<b;
    cout<<"\nThe value of pi is "<<pi;
    cout<<"\nThe value of c is "<<c;
    cout<<"\nThe value of glo in local is "<<glo;
    return 0;

}