// Wap tp print natural numbers

#include <iostream>
using namespace std;

void printInc(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << "\t";
    }
    cout << endl;
}
void printDec(int n)
{
    for (int i = n; i >= 1; i--)
    {
        cout << i << "\t";
    }
    cout << endl;
}
int main()
{
    int val, n;
    cout << "Choose an option:\n1. Print Natural Numbers is increasing order\n2. Print Natural Numbers is decreasing order" << endl;
    cin >> val;
    switch (val)
    {
    case 1:
    {
        cout << "Enter number of terms: ";
        cin >> n;
        printInc(n);
        break;
    }
    case 2:
    {
        cout << "Enter number of terms: ";
        cin >> n;
        printDec(n);
        break;
    }
    
    default:
        cout << "Wrong choice:" << endl;
    }
    return 0;
}