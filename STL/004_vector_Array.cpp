#include<iostream>
using namespace std;
#include <bits/stdc++.h>

void printVec(vector<int> &v)
{
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i]<<" ";
    }
    cout << endl;
}
int main()
{
    // Array of vectors 
    int N;
    cin>>N;
    vector<int> v[N];
    for (int i = 0; i < N; i++)
    {
        int n;
        cin>>n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
        
    }
    for (int i = 0; i < N; i++)
    {
        printVec(v[i]);
    }
    

    return 0;
}