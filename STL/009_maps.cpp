#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void print(map<int, string> &m)
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
    map<int, string> m;
    // inserting values in map
    m[1] = "abc"; // Time complexity -> O(log(n))
    m[5] = "cdc";
    m[3] = "acd";
    m[6] = "a";
    m[5] = "cde"; // What it does is just replaces the value
    // m["abcd"] = "adcb"; // Time complexity O(string.size * log(n)). Because it has to compare the key value to sort with other keys.
    // Other method of inserting values
    m.insert({4, "afg"});
    // if there is no value then m.find() returns m.end()
    auto it = m.find(5); // time complexity O(log(n))
    if (it == m.end())
    {
        cout << "NO value" << endl;
    }
    else
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

    // map<int, string> :: iterator it;
    // // prints values in sorted order
    // for(it = m.begin(); it != m.end(); it++){
    //     cout<<(*it).first<< " "<<(*it).second<<endl;
    // }

    // deletes 3 from the map
    m.erase(3); // Time complexity O(log(n))
    print(m);
    // for safety. Because if there is no iterator, it'll through error
    if (it != m.end())
        m.erase(it); // can also provide an iterator. it was previously determined
    print(m);        // 5 has been deleted
    m.clear();
    print(m);
    return 0;
}