#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;
        }
        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

};
int main()
{
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;
    //Using *ptr instead of c1
    // (*ptr).setData(3,7); //this bracket is important.
    // Arrow Operator 
    ptr->setData(3,7); //It means, dereference this ptr pointer and run its setData function.
    ptr->getData(); //It means ptr is pointing an object and we are running its getData function



    //Array of Objects
    Complex *ptr1 = new Complex[4];
    ptr1->setData(5,12); 
    ptr1->getData(); 
    (ptr1+1)->setData(8,10); 
    (ptr1+1)->getData(); 
    (ptr1+2)->setData(67,89); 
    (ptr1+2)->getData(); 
    (ptr1+3)->setData(567,345); 
    (ptr1+3)->getData(); 
    return 0;
}