#include<iostream>
using namespace std;
class BaseClass{
    public:
        int var_base;
        void display(){
            cout<<"Display Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass: public BaseClass{
    public:
        int var_derived;
        void display(){
            cout<<"Display Base class variable var_base "<<var_base<<endl;
            cout<<"Display Base class variable var_derived "<<var_derived<<endl;

        }

};
int main()
{
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; //Base class pointer pointing a derived class object 
    
    base_class_pointer->var_base= 507658;
    // base_class_pointer->var_derived =40; //Will throw an error
    base_class_pointer->display(); //it will run the display funtion of base class. Because the pointer is the type of base class

    DerivedClass * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived= 67;
    derived_class_pointer->display();

    derived_class_pointer->var_base=789;
    derived_class_pointer->display();
    return 0;
}