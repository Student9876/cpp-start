/*
Given N strings and Q queries.
In each query you are given a string
print frequency of that string

N <=10^6
|S| <= 100
Q <= 10^6
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<string, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        string s;
        cin >> s;
        cout << m[s] << endl;
    }

    return 0;
}

/*
Use test case:
Input:
9
abc
def
abc
ghj
jkl
ghj
def
ghj
abc
2
abc
ghj

Output:
3
3
*/