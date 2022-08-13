#include<iostream>
using namespace std;

class Base{
    protected:
        int a;
    private:
        int b;

};

/*
For a protected member:
                        Public Derivation       Private Derivation      Protected Derivation
1. Private Member       Not inherited           Not inherited               Not Inherited
2. Protected Member        Protected            private                     protected
3. Public Member            Public              Private                     Protected
*/
class Derived : protected Base{

};
int main()
{
    Base b;
    Derived d;
    // cout<<d.a; //will not work since a is protected in both base as well as derived class
    return 0;
}