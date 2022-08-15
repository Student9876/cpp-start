#include <iostream>
using namespace std;

void reverse(int n)
{
    int r, n1 = 0;
    if (n == 0)
        cout << "You entered a wrong number" << endl;
    if (n > 0 && n <= 10)
        cout << "Reverse is: " << n << endl;
    if (n > 10)
    {
        while (1 > 0)
        {
            do
            {
                r = n % 10;
                n1 = n1 * 10 + r;
                n = n / 10;
            } while (n != 0);

            cout << "Reverse is: " << n1 << endl;
        }
    }
}
int main()
{
    int n;
    cout << "Enter a natural number: ";
    cin >> n;
    reverse(n);
    return 0;
}