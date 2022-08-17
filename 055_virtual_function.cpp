#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base = 123;
    // Virtual makes the pointer of the object of one class to ignore its functions and run other derived class functions
    virtual void display()
    {
        cout << "1 Display Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 456;
    void display()
    {
        cout << "2 Display Base class variable var_base " << var_base << endl;
        cout << "2 Display Base class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    return 0;
}