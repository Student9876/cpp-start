#include <iostream>
using namespace std;

class BankDeposite
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposite(){} //If this is removed then error. Without this we cannot 
                        // declare objects like BankDeposite bd1, bd1.....
    BankDeposite(int p, int y, float r); // r can be a value like 0.04
    BankDeposite(int p, int y, int r);   // r can be a value like 14 (percentage)
    void show(void);
};

BankDeposite::BankDeposite(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
BankDeposite::BankDeposite(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposite::show()
{
    cout << endl
         << "Principal amount was " << principal << endl
         << "Return value after " << years
         << " years is " << returnValue << "." << endl;
}
int main()
{
    BankDeposite bd1,bd2, bd3;
    int p, y;
    float R;
    int r;
    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd1 = BankDeposite(p,y,R);
    bd1.show();

    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd2 = BankDeposite(p,y,r);
    bd2.show();

    return 0;
}