#include<iostream>

using namespace std;

int glo =6; //global var


void sum()
{
    int a;
    a = glo;
    cout<<"\nValue of glo in global is "<<a;
}
int main()
{
    // int a = 14;
    // int b = 15;
    int glo = 7;    //local variable get presidence over global
    int a = 16, b= 45;
    float pi;
    char c = 'u'; //only one character can be used. We cannot use it like c ='ghgt'
    bool is_true=false;
    pi = 3.14;
    cout<<glo<< is_true; //prints 71, 7 glo value and 1 for true. prints 70, 0 for false
    cout<<"\nThe value of a is "<<a<<". \nThe value of b is "<<b;
    cout<<"\nThe value of pi is "<<pi;
    cout<<"\nThe value of c is "<<c;
    cout<<"\nThe value of glo in local is "<<glo; //first it'll search for glo locally. If not found then go for globally
    sum();
    return 0;

}
//variable names must begin with letter of the alphabet or an underscore(_)