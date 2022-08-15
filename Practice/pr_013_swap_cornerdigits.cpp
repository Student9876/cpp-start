// Wap to swap corner digits of a number

#include <iostream>
using namespace std;

void swapDigits(int n)
{
    int len = 0, rem, n1 = n;
    int arr[len];
    int count = 0;
    int temp;
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
    temp = arr[0];
    arr[0] = arr[len - 1];
    arr[len - 1] = temp;

    for (int i = len - 1; i >= 0; i--)
    {
        cout << arr[i];
    }
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    swapDigits(n);
    return 0;
}