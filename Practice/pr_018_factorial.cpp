// Wap to calculate factorial of a number
//Condition is must in case of recursion
#include <iostream>
using namespace std;

int fact(int n)
{
    int f = 1;
    if (n <= 1)
    {
        return 1;
    }
    f = n * fact(n - 1);
    return f;
}
int main()
{
    int n, f;
    cout << "Enter a number to find its factorial" << endl;
    cin >> n;
    cout << "Factorial of the given number " << n << " is :" << fact(n);
    return 0;
}