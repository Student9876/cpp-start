#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    auto a = 1.0;
    cout << a << endl;

    vector<int> v = {2, 3, 5, 6, 7};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // We use auto keyword to shorten the iterator declaration
    // vector<int>::iterator it; //No need of this is line if we use auto
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;

    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}};
    // for(pair<int,int> &value :v_p){
    //     cout<<value.first<<" "<<value.second<<endl;
    // }
    // shortened Code
    for (auto &value : v_p)
    {
        cout << value.first << " " << value.second << endl;
    }

    return 0;
}