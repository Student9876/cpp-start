#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // This inbuilt sorting function is consedered as the best sorting algo
    // This algo is known as introsort algo. Its a mixture of 3 sorting algorithms.
    // quicksort, insertion sort and Heap sort
    // It takes two positions as arguments. (address of the start , address of the next position of the last element)
    
    // sort(a, a + n); // in array the "name of the array" itself considered as a address

    // A simple O(n^2) sorting algorithm (Also its BubbleSort)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (a[j] > a[j+1])
            { // change greater than to less than for reverse sort
                swap(a[j], a[j+1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}