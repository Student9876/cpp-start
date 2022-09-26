#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void print(multiset<string> &s)
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
    // Multi Set stores multiple dulpicate elements in an ordered manner
    multiset<string> s;
    s.insert("abc"); // Time complexity O(log(n))
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("zsdf");
    // // multiset<string>::iterator it;
    // In this case find operation returns iterator of the first value if duplicate is present
    auto it = s.find("zsdf"); // Time complexity O(log(n))
    // if (it != s.end())
    // {
    //     s.erase(it); // this will delete only first of dupliacte item if present
    // }
    s.erase("zsdf"); // This will delete an item with all its duplicates
    print(s);
    return 0;
}