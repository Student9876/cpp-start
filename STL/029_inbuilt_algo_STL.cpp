// All this algorithms are O(n) time complexity for vector and arrays
// For arrays--> v is the begining point and v+n is the end point
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // min_element() is a built in algorithm which finds the minimum element in a given container
    // Need to give begin and end address as argument
    // it returns a pointer or an iterator
    int min = *min_element(v.begin(), v.end());
    cout << min << endl;
    int max = *max_element(v.begin(), v.end());
    cout << max << endl;
    // sum function accumulate takes begin and end and also a initial sum as an argument
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << sum << endl;
    // Counting a number if its reapeated
    int ct = count(v.begin(), v.end(), 3); // Third argument is for the number which is to be count
    cout << ct << endl;
    ct = count(v.begin(), v.end(), 6); // Third argument is for the number which is to be count
    cout << ct << endl;

    // Find algorithm finds a value and return its iterator
    // int element = *find(v.begin(), v.end(), 2);
    // cout << element << endl;
    vector<int>::iterator it = find(v.begin(), v.end(), 2);
    if (it != v.end())
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    // reverse algorithm reverse elements in a container
    reverse(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // reversing string
    string s = "abcdefghij";
    cout << s << endl;
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}

/*
Input
6
2 3 1 6 7 6
output
1
7
25
1
2
Element found
6 7 6 1 3 2
abcdefghij
jihgfedcba
*/