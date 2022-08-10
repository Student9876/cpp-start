// Wap to calculate product of digits of a number

#include <iostream>
using namespace std;

int productDigits(int n)
{
    int rem, mul = 1;
    while (n != 0)
    {
        rem = n % 10;
        mul = mul * rem;
        n = n / 10;
    }
    return mul;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Product of the digits of the entered number " << n << " is: " << productDigits(n);

    return 0;
}