// Wap to check a number is palindrom or not
#include <iostream>
using namespace std;
void palindrom(int n)
{
    int temp = n, count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    int arr[count], r, i = 0, flag = 0;
    while (temp != 0)
    {
        r = temp % 10;
        arr[i] = r;
        i++;
        temp = temp / 10;
    }
    for (int i = 0; i < count / 2; i++)
    {
        if (arr[i] != arr[count - 1])
            flag = 1;
        break;
    }
    if (flag == 1)
        cout << "The number is not palindrome!!" << endl;
    else
        cout << "The number is palindrome!!" << endl;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    palindrom(n);
    return 0;
}