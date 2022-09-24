// pair is used to combine two diff datatypes in one place
#include <iostream>
using namespace std;

void display(pair<int, int> *p_array)
{
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }
}
int main()
{
    pair<int, string> p;

    // method to add values in a pair
    // p = make_pair(2,"abc");
    p = {2, "abcd"};
    pair<int, string> &p1 = p;
    p1.first = 3; // changing value in a pair using reference
    cout << p.first << " " << p.second << endl;

    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};
    pair<int, int> p_array[3];
    p_array[0] = {1, 2};
    p_array[1] = {2, 3};
    p_array[2] = {3, 4};
    display(p_array);
    swap(p_array[0], p_array[2]);
    cout << endl;
    display(p_array);

    return 0;
}