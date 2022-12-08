#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    try
    {
        cin >> age;
        if (age >= 18)
        {
            cout << "Access granted - you are old enough.";
        }
        else
        {
            throw(age); // It throws a value which is caugth by "catch function"
        }
    }
    catch (int myNum)
    {
        cout << "Access denied - You must be at least 18 years old.\n";
        cout << "Age is: " << myNum;
    }
    return 0;
}