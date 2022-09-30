#include <bits/stdc++.h>
using namespace std;

bool should_i_swap(int a, int b)
{
    if (a > b)
        // a<b for dec order and a>b for inc order
        return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // A simple n^2 sorting algorithm
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (should_i_swap(a[j], a[j + 1]))
            { // change greater than to less than for reverse sort
                swap(a[j], a[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}