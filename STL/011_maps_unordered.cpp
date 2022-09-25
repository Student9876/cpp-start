#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void print(unordered_map<int, string> &m)
{
    cout << m.size() << endl;
    for (auto &pr : m)
    {
        // Getting every value out of the map to print has a Time complexity of O(log(n)).
        cout << pr.first << " " << pr.second << endl;
    }
}
int main()
{
    // 1. Inbuilt implementation-> Hash table is used
    // 2. Time complexity is O(1) for insertion and access
    // 3. Valid keys datatype. Cannot use complex key datatypes
    // Like unordered_map<pair<int,int>,string> m;
    // Diffrence between map and multimap is in multimap their can exist duplicate values
    unordered_map<int, string> m;
    m[1] = "abc"; // Time complexity is
    m[5] = "cdc";
    m[3] = "acd";
    m[6] = "a";
    m[5] = "cde";
    print(m);            // Here keys will print in a random order
    auto it = m.find(5); // time complexity O(1)
    if (it != m.end())
        m.erase(3); // Time complexity log(1)
    print(m);
    return 0;
}