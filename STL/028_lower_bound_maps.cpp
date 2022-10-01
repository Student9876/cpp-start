#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> m;
    // In case of map we can apply lower bound and upper bound only on the key
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m.insert({x, i});
    }
    auto it = m.lower_bound(6);
    cout << (*it).first << " " << (*it).second << endl;

    return 0;
}