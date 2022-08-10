// Wap to find a number is armstrong number or not
#include <iostream>
// #include <math.h>

using namespace std;

void armstrong(int n)
{
    int n1, r, num = 0;
    n1 = n;
    while (n != 0)
    {
        r = n % 10;
        num = num + r * r * r;
        n = n / 10;
    }
    if (num == n1)
        cout << "This number " << n1 << " is an armstrong number!!" << endl;
    else
        cout << "This number " << n1 << " is not an armstrong number!!" << endl;
}
int main()
{
    int n;
    cout << "Enter a number to check it is armstrong or not: " << endl;
    cin >> n;
    armstrong(n);
    return 0;
}