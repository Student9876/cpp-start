/*
Given N strings and Q queries.
In each query you are given a string
print yes if string is present
else print no.

N <= 10^6
|S| <=100
Q <= 10^6
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    unordered_set<string> s;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin>>str;
        s.insert(str);
    }
    int q;
    cin>>q;
    while(q--){
        string str;
        cin>>str;
        if(s.find(str) == s.end()){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
    }
    return 0;
}