// Wap to calculate sum of first and last digit of a number

#include <iostream>
using namespace std;

int sumCornerDigits(int n)
{
    int len = 0, rem, n1 = n;
    int arr[len];
    int count = 0;
    while (n != 0)
    {
        len++;
        n = n / 10;
    }
    while (n1 != 0)
    {
        rem = n1 % 10;
        arr[count] = rem;
        count++;
        n1 = n1 / 10;
    }
    return arr[0] + arr[len - 1];
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of the first and last digit of the number " << n << " is: " << sumCornerDigits(n);
    return 0;
}