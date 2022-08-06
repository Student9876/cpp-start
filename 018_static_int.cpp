#include<iostream>
using namespace std;

int product(int a, int b)
{
    static int c=0; //this executes only once
                    //static int variables initializes only one time.
    c= c+1;         // Here the value of c increases after each time the function executes.
    return a*b+c;
}

int main()

{
    int a,b;
    cout<<"Enter the value e of a & b: "<<endl;
    cin>>a>>b;
    cout<<"Product of a and b is: "<<product(a,b)<<endl;
    cout<<"Product of a and b is: "<<product(a,b)<<endl;
    cout<<"Product of a and b is: "<<product(a,b)<<endl;
    cout<<"Product of a and b is: "<<product(a,b)<<endl;
    cout<<"Product of a and b is: "<<product(a,b)<<endl;
    return 0;
}