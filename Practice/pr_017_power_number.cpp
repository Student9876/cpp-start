// Wap to calculate power a number
#include <iostream>
using namespace std;

int main()
{
    int p, n;
    int n1 = 1;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the power: ";
    cin >> p;
    for (int i = 1; i <= p; i++)
    {
        n1 = n1 * n;
    }
    cout << "Result: " << n1;

    return 0;
}