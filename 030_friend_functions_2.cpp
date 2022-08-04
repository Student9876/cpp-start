#include<iostream>
using namespace std;

//Acknoledgement for Y is present here
class Y;
class X
{
    int data;
    public:
        void setValue(int value)
        {
            data = value;
        }
        friend void add(X, Y);  //here compiler doesn't know what Y is. So we have to declare its presence at the begining
};

class Y
{
    int num;
    public:
        void setValue(int value)
        {
            num = value;
        }
        friend void add(X, Y);
};

void add(X o1, Y o2)
{
    cout<<"Summing datas of X and Y objects gives me "<<o1.data + o2.num;
}
int main()
{
    X a1;
    a1.setValue(3);
    Y b1;
    b1.setValue(5);
    add(a1 , b1);
    return 0;
}