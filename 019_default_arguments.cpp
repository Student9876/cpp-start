//default arguments
#include<iostream>
using namespace std;

float moneyReceived(int currentMoney, float factor = 1.04) //factor has a default value. Write default arguments at last in function
{
    return currentMoney*factor;
}

int strlen(const char *p)
{
    //there is no way that this function can 
    //change the value of the arguments and give us a false result
}
int main()

{
    // int a,b;
    // cout<<"Enter the value of a and b: "<<endl;
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money)<<" Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money, 1.10)<<" Rs after 1 year"<<endl;
    return 0;
}