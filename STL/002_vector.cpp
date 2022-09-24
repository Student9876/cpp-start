// vector is like continuous memory block like arrays. But in dynamic size 
#include<iostream>
#include<bits/stdc++.h>
// #include<vector>
using namespace std;

void printVec( vector<int> &v){
    cout<<"size: "<<v.size()<<endl;
    // v.size has a time complexity of O(1)
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<< " ";
    }
    v.push_back(2); // as reference of the vector has passed as an argument so value will change in the original vector
    cout<<endl;
}
int main()
{
//     vector<int> v;
//     int n;
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin>>x;
//         // printVec(v);
//         v.push_back(x); // It pushed values at the end of the vector array
//         // It has a time complexity O(1)
//     }
//     printVec(v);


    // declaring sized vector 
    // vector<int> v1(10);

    // vector<int> v1(10, 3); // prints 10 3s 
    vector<int> v1;
    v1.push_back(7); // Here size of the vector increased by one 
    v1.push_back(6); // Here size of the vector increased by one 
    printVec(v1);
    v1.pop_back(); // pops last element. O(1)
    printVec(v1);
    printVec(v1);

    // top copy a total vector 
    vector<int> v2 = v1; // It has a time complexity of O(n). Because it copies values 1 by 1 
    printVec(v2);
    v2.push_back(9);
    printVec(v2);

    return 0;
}