#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n); // sorting is necessary for Lower and upper bound
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    // Lower and upper bound returns a location. In case of array-> pointer, other containers-> iterator
    // What lower bound does is finds the exact given element or finds its next greater element
    // Upper bounds returns the exact next element of the given element even if the given element is present in the container

    // Lower Bound takes (address of first element, address of the next place of the last element and the value)

    // Lower Bound Code
    int *ptr = lower_bound(a, a + n, 5); // prints 5
    cout << (*ptr) << endl;
    ptr = lower_bound(a, a + n, 6); // prints 7
    cout << (*ptr) << endl;
    ptr = lower_bound(a, a + n, 26); // prints garbage value
    if (ptr == (a + n))
        cout << "Not found lower bound" << endl;

    // Upper Bound Code
    ptr = upper_bound(a, a + n, 5); // prints 7
    cout << (*ptr) << endl;
    ptr = upper_bound(a + 4, a + n, 5); // prints 8
    cout << (*ptr) << endl;
    ptr = upper_bound(a, a + n, 26); // prints garbage value
    if (ptr == (a + n))
        cout << "Not found upper bound" << endl;

    return 0;
}