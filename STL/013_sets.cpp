#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void print(set<string> &s)
{
    for (string value : s)
    {
        cout << value << endl;
    }
    // for (auto it = s.begin(); it != s.end(); it++)
    // {
    //     cout << *it << endl;
    // }
}
int main()
{
    // Set stores unique elements in a sorted order
    set<string> s;
    s.insert("abc"); // Time complexity O(log(n))
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("zsdf"); // Only one copy will be stored
    // unordered_set<string>::iterator it;
    // auto it = s.find("abc"); // Time complexity O(log(n))
    // if (it != s.end())
    // {
    //     cout << (*it) << endl
    //          << endl;
    // }

    // // Erase function can take both iterator or a element as an argument
    // if (it != s.end())
    // {
    //     s.erase(it);
    // }
    // s.erase("bcd");
    print(s);
    return 0;
}