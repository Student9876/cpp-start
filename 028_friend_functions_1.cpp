#include<iostream>
using namespace std;


class Complex
{
    int a,b;
    public:
        void setNumber(int n1, int n2)
        {
            a= n1;
            b= n2;
        }
        //Just to declare that the function which is not a member function 
        // of the class has permission to access private data.
        friend Complex sumComplex(Complex s1, Complex s2);

        void printNumber(void)
        {
            cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
        }

};

//This function is not a member of the class. So need to declare it 
// as a friend function. 
Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;

}

int main()
{
    Complex c1, c2, c3;
    c1.setNumber(1, 4);
    c1.printNumber();
    
    c2.setNumber(5,8);
    c2.printNumber();

    // c3.sumComplex(c1, c2);  //as sumComplex is not a member of the class
    c3=sumComplex(c1, c2);
    c3.printNumber();
    


    return 0;
}

/* Properties of friend function 
1. Not in the scope of class.
2. Since it is not in the scope of class, it cannot be called from the object of 
the class. c1.sumComplex()== Invalid
3. Can be invoked without the help of any object
4. Usually contains the object as arguments.
5. Can be declared inside the public or private section of the class
6. It cannot access the members directly by their names and need 
object_name.member_name to access any member

*/