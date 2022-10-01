#include <bits/stdc++.h>
using namespace std;

int main()
{
    // sets and maps are by default sorted. So no need to code any sorting algorithm
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    // auto it = lower_bound(s.begin(), s.end(), 5); // using lower bound like this in sets and map makes it a O(n) function. We can make it O(log(n)) :)
    auto it = s.lower_bound(5); // This is a O(log(n)) function
    cout << *it << endl;        // prints 5

    return 0;
}