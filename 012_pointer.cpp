#include<iostream>
using namespace std;

int main()

{
    //What is a pointer?--> Data type which holds the address of other
    //data types

    int a = 66;
    int* b = &a;
    // &--> Address of operator
    cout<<"The address of a is: "<<&a<<endl;
    cout<<"The address of a is: "<<b<<endl;

    // *--> (value at) Dereference operator
    cout<<"The value at the address b is: "<<*b<<endl;

    // Pointer to pointer 
    int** c = &b;
    cout<<"The address of b is: "<<&b<<endl;
    cout<<"The address of b is: "<<c<<endl;
    cout<<"The value at address c is: "<<*c<<endl; //shows the address of pointer b which is now stored in c
    cout<<"The value at address value_at(value_at(c)) is: "<<**c<<endl; //shows the value of a
    return 0;
}