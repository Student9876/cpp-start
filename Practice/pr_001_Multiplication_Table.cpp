//Printing Multiplication table

#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter number you want to see Multiplication Table: "<<endl;
    cin>>n;
    int i = 1;
    while(i<=10)
    {
        cout<<n<<"X"<<i<<"="<<(n*i)<<endl;
        i++;
    }
     return 0;
     
}