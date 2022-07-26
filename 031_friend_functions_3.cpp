//swaping private datas of the classes
#include<iostream>
using namespace std;

class c2;
class c1
{
    int val1;
    public:
        void indata(int a)
        {
            val1 =a;
        }
        void display(void)
        {
            cout<<val1<<endl;
        }
        friend void exchange( c1 &, c2 &);
};
class c2
{
    int val2;
    public:
        void indata(int a)
        {
            val2 =a;
        }
        void display(void)
        {
            cout<<val2<<endl;
        }
        friend void exchange( c1 &, c2 &);
};

/* 
Trick to swap 2 numbers:
temp = a;
a = b;
b = temp;
*/
//Call by reference
void exchange(c1 &x, c2 &y) // here we cannot use x instead of &x. Because 
                            //it makes a copy of the object. But to change 
                            //the value of the real object, we must call by reference
{
    int temp = x.val1 ;
    x.val1 = y.val2;
    y.val2 = temp;

}

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.indata(34);
    oc2.indata(67);

    exchange(oc1, oc2);
    cout<<"The value after exchange becomes: ";
    oc1.display();
    cout<<"The value after exchange becomes: ";
    oc2.display();
    return 0;
}