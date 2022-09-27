#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "This is stack implementation using STL" << endl;
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    // s.empty() returns a boolean. if empty then true either false
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    cout << endl;
    cout << "This is queue implementation using STL" << endl;
    queue<string> q;
    q.push("abc");
    q.push("bcd");
    q.push("cde");
    q.push("def");
    q.push("ghi");
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}