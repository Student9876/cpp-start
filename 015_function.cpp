#include<iostream>
using namespace std;


//function prototype
//Type function-name (arguments);
int sum(int a, int b);
void g(void); // no need to type void


int main()

{
    int num1 , num2;
    cout<<"Enter First Number: "<<endl;
    cin>>num1;
    cout<<"Enter Second Number: "<<endl;
    cin>>num2;
    cout<<"Sum is: "<<sum(num1, num2)<<endl;
    //num1 and num2 are actual parameters
    g();
    return 0;
}


int sum(int a, int b)
{
    //Formal parameters a and b. a and b will be taking values from actual parameters num1 and num2
    //Actual parameters and formal parameters can be same
    int c = a+b;
    return c;
}

void g()
{
    cout<<"Hello, Good Moring.."<<endl;

}