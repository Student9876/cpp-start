// All sources from https://cplusplus.com/reference/vector/vector/
#include <iostream>
#include <vector>

using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout<<"Displaying this vector "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    // ways to create a vector
    vector<int> vec1; //zero length vector 
    // vector<char> vec2(4); //4-element character vector
    // vec2.push_back('5');
    // display(vec2);

    // vector<char> vec3(vec2); //4-element character vector from vec2
    // display(vec3);

    // vector<int> vec4(6,13); //6-element vector of 3s
    // display(vec4);
    // cout<<vec4.size()<<endl;



// First program
    int element,size ;
    cout<<"Enter the size of the vector: ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector ";
        cin >> element;
        vec1.push_back(element);
    }
    display(vec1);

    vec1.pop_back();
    display(vec1);

// //deriving an iterator
// vector<int> :: iterator iter = vec1.begin();
//     vec1.insert(iter, 566); //pointing at first [osition from the begining.
//                             //Value is going to push in after the pointed element 
//     display(vec1);


//     vec1.insert(iter+5, 50); //now its pointing at 5th element 
//                              //Value is going to push in after the pointed element 
//     display(vec1);


    //inserting multiple values 
    // vec1.insert(iter+3,500, 69);
    // display(vec1);
    return 0;
}