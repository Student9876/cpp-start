// Reference - https://en.cppreference.com/w/cpp/utility/functional
#include <iostream>
#include <functional>
#include <algorithm> //Contains sort() function
using namespace std;

int main()
{
    // Function Objects (Functor): Function wrapped in a class so
    // that it is available like an object
    int arr[] = {1, 4, 3, 45, 56, 12, 89, 40, 9};

    // Sorting in ascending order
    cout << "Sorting in ascending order" << endl;
    sort(arr, arr + 9); //+9 for first 9 terms to be sorted  in the array
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Sorting in descending order
    cout << "Sorting in descending order" << endl;
    sort(arr, arr + 9, greater<int>()); // greater<int>() passing function as an object
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}