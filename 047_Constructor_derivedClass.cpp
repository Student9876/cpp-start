#include<iostream>
using namespace std;

/*
Case1:
class B:public A{
    //Order of execution of constructor ->first A() then B()
};

Case2:
class A: public B, public C{
    //Order of execution of constructor -> B() then C() then A()
};

Case3:
class A: public B, virtual public C{
    //Order of execution of constructor -> C() then B() then A()
};
*/
class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Base1 class constructor called"<<endl;
        }
        void printDataBase1(void){
            cout<<"The value of data1 is "<<data1<<endl;
        }
};
class Base2{
    int data2;
    public:
        Base2(int i){
            data2 = i;
            cout<<"Base2 class constructor called"<<endl;
        }
        void printDataBase2(void){
            cout<<"The value of data1 is "<<data2<<endl;
        }
};


class Derived: public Base1, public Base2{
    int derived1, derived2;
    public:
        Derived( int a, int b, int c, int d): Base1(a), Base2(b){
            //Case4: if we change to Base2(b) , Base(a). 
            //The order will not change as it has a pre defined order public Base1, public Base2
            derived1 = c;
            derived2 = d;
            cout<<"Derived class constructor called"<<endl;
        }
        void printDataDerived(void){
            cout<<"The value of derived1 is "<<derived1<<endl;
            cout<<"The value of derived2 is "<<derived2<<endl;
        }
};
int main()
{
    Derived zeon(1,2,3,4);
    zeon.printDataBase1();
    zeon.printDataBase2();
    zeon.printDataDerived();
    return 0;
}