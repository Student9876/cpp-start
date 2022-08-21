// Reference- https://cplusplus.com/reference/list/list/
#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst)
{
    // Defining Iterator
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1; // list of 0 length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(56);
    list1.push_back(12);
    display(list1);

    // list1.pop_back(); // Removes an element from last
    // display(list1);
    // list1.pop_front();
    // display(list1); //Removes an element from front

    // list1.remove(9); //Removes 9 from the list
    // display(list1);

    // reversing lists
    list1.reverse();
    display(list1);

    // Sorting the list
    list1.sort();
    display(list1);

    list<int> list2(3); // Empty list of size 7
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 7;
    iter++;
    *iter = 78;
    iter++;
    display(list2);

    // Merging of two lists
    cout << "After merging" << endl;
    list1.merge(list2);
    list1.sort(); // sorting after merging
    display(list1);

    return 0;
}