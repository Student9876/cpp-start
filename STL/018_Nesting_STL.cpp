#include <bits/stdc++.h>
using namespace std;

int main()
{
    // map<pair<int, int>, int> m;
    // pair<int, int> p1, p2;
    // p1 = {2, 2};
    // p2 = {2, 3};
    // cout << (p1 < p2) << endl;
    // cout << (p1 > p2) << endl;

    // map<set<int>, int> s;
    // set<int> s1 = {1, 2, 3};
    // set<int> s2 = {2, 3};
    // cout << (s1 < s2) << endl;

    // Run the test case for below codes 
    map<pair<string,string>,vector<int>> m1;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string fn,ln;
        int ct;
        cin>>fn>>ln>>ct;
        for (int j = 0; j < ct; j++)
        {
            int x;
            cin>>x;
            m1[{fn,ln}].push_back(x);
        }
        
    }
    for(auto &pr:m1){
        // Here pr.first is full name
        // pr.first,first is first name
        // pr.first.second is last name
        // pr.second is elements of the vector
        auto &full_name = pr.first;
        auto &list = pr.second;
        cout<<full_name.first <<" "<<full_name.second<<endl;
        cout<<list.size() <<endl;
        for(auto &element :list){
            cout<<element <<" ";
        }
        cout<<endl;
    }
    return 0;
}