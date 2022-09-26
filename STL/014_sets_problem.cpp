/*
Given N strings, print unique strings
in lexiographical order
N<=10^5
|S| <= 10000
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<string> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        s.insert(str);
    }

    for (auto value : s)
    {
        cout << value << endl;
    }
    return 0;
}

/*
Sample Input
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

Sample output
abc
def
ghj
jkl

*/
