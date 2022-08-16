#include <iostream>
using namespace std;

int main()
{
    // Basic Example
    int a = 4;
    int *ptr = &a;
    // *ptr = 45; //Changes the value of a
    cout << "The value of a is " << *(ptr) << endl;

    // new operator
    //  int *p = new int(40);
    float *p = new float(40.56);
    cout << "The value of at address p is " << *(p) << endl;

    // Allocating block of memory dynamically

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    /*
    Also can be written as
    arr[0]=10;
    *(arr+1)=20;
    *(arr+2)=30;
    */
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    // delete operator
    delete[] arr; // dinamically allocated memory becomes free to store other values
    cout << "After using delete keyword" << endl;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    return 0;
}