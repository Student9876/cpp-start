#include <iostream>
using namespace std;

class A
{
    int a;

public:
    // A & setData(int a)
    void setData(int a)
    {
        // a = a; //This set a garbage value in the variable
        this->a = a;
        // return *this;       //another characteristic of 'this' is it can return itself;
    }
    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};
int main()
{
    //'this' is a keyword which is a pointer which points to the object which invokes the member function
    A a;
    // a.setData(4).getData();
    a.setData(5);
    a.getData();
    return 0;
}