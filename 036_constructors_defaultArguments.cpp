#include <iostream>
using namespace std;

class Simple
{
    int data1, data2, data3;

public:
    Simple(int a, int b = 10, int c = 6)  //Constructor with default data
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printData();
};

void Simple::printData()
{
    cout << "The value of data is " << data1 <<" ,"<<data2<< " and " << data3 << endl;
}
int main()
{
    Simple s1(4, 5);
    s1.printData();

    Simple s2(3);
    s2.printData();
    return 0;
}