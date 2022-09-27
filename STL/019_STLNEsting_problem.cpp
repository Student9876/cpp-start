// https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, multiset<string>> marks_map;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int marks;
        cin >> name >> marks;
        marks_map[marks].insert(name); // This will input the names corresponding to the marks
    }
    auto cur_it = --marks_map.end(); // One iterator before the next of the last element means last element
    while (true)
    {
        auto &students = (*cur_it).second;
        int marks = (*cur_it).first;
        for (auto student : students)
        {
            cout << student << " " << marks << endl;
        }
        if (cur_it == marks_map.begin())
            break;
        cur_it--;
    }

    return 0;
}