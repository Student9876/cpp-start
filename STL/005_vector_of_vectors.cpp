#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v)
{
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    int N;
    cin >> N;
    vector<vector<int>> v;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        vector<int> temp; // init a new vector to temporarily store data and then push_back into the declared vector
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    v[0].push_back(10);         // pushing an element in a the 0th vector in the vector
    v.push_back(vector<int>()); // just pushed an empty vector in a vector
    for (int i = 0; i < v.size(); i++)
    {
        printVec(v[i]);
    }

    // like 2D vector
    cout << v[0][1] << endl;
    return 0;
}