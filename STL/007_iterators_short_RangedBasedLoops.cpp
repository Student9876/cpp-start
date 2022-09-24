#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 5, 6, 7};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;

    // Ranged Based Loops
    // It prints the values of the vector without writing any loop
    // Here the copy of actual value is being printed
    for (int value : v)
    {
        cout << value << " ";
    }
    cout << endl;
    // Here we are using reference. And actual value is being printed
    for (int &value : v)
    {
        cout << value << " ";
    }

    cout << endl;
    return 0;
}