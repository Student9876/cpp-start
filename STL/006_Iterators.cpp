#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {2, 3, 4, 6, 7};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // Iterators
    // Syntax for declaring iterator
    // Container Name :: iterator <name>

    vector<int>::iterator it;

    it = v.begin();
    cout << *(it) << endl;
    cout << *(it + 1) << endl;

    // printing using iterators
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {4, 5}};
    vector<pair<int, int>>::iterator it_p;
    it_p = v_p.begin();
    for (it_p = v_p.begin(); it_p != v_p.end(); it_p++)
    {
        cout << (*it_p).first << " " << (*it_p).second<<endl;
    }
    cout << endl;
    return 0;
}