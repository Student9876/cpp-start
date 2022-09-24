/*
Given N strings, print unique strings
in lexiographical order with their
frequency
N<=10^5
|S| <= 10000
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        // First m[s] is automatically initialized with value 0.
        // So after adding one value we need to increase it
        // m[s] = m[s] +1;
        m[s]++;
    }
    for (auto pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }

    return 0;
}