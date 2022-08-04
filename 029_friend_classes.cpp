//Friend class, forward declaration
#include<iostream>
using namespace std;

//Forward Declaration
class Complex;

class Calculator
{
    public:
        int add(int a, int b)
        {
            return (a+b);
        }
        // declaring first. Then completeing the function below to avoid the error "o2 has incomplete type"
        int sumRealComplex(Complex , Complex);
        int sumCompComplex(Complex , Complex);
       
}; 


class Complex
{
    int a,b;
    //giving right to sumRealComplex of calculator to access private data of Complex
    //Individually Declaring
    // friend int Calculator :: sumRealComplex(Complex , Complex);
    // friend int Calculator :: sumCompComplex(Complex , Complex);

    //How many times we are going to make the functions, friends.
    //Declaring the entire class as friend
    friend class Calculator;

    public:
        void setNumber(int n1, int n2)
        {
            a = n1;
            b = n2;
        }

        void printNumber(void)
        {
            cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
        }

};
int Calculator::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    Calculator c;
    int resr =c.sumRealComplex(o1, o2);
    int resc =c.sumCompComplex(o1, o2);
    cout<<"The sum of real part of o1 and o2 is: "<<resr<<endl;
    cout<<"The sum of Img part of o1 and o2 is: "<<resc<<endl;
    return 0;
}