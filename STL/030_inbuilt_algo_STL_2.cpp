#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Lambda Function
    // Used for small temporary cases
    /*
    like adding 2 in a given number
    syntax:
    [](int x){return x+2;}
    */
    cout<<[](int x){return x+2;}(2); // Here we calling the temporary function and (giving value) prints 2+2=4
    cout<<endl;

    // Sum of two numbers
    cout<<[](int x, int y){return x+y;}(2,5) <<endl; //passing two values 

    // To reuse this functions we need to define them

    // Sum of three numbers
    auto sum = [](int x, int y, int z){return x+y+z;};
    cout<<sum(2,3,5)<<endl;

    // all_of function
    vector<int> v = {2,-3,5};
    // below all_of function is applying the given lambda function as third argument for all values in the vector.
    // Here it will return a boolean true or false. all_of function returns true if the condition is met for all of the elements in a container
    // Here we are checking if all of the numebrs in the vector is +ve or not
    cout<<all_of(v.begin(),v.end(), [](int x){return x>0;})<<endl;

    //any_of function
    // This functions returns true if any of the element met the condition. for false, all elements should be false for the condition
    cout<<any_of(v.begin(),v.end(), [](int x){return x>0;})<<endl;

    // none_of function
    // it returns true only when the return is false for all the elements
    cout<<none_of(v.begin(),v.end(), [](int x){return x>0;})<<endl;
    return 0;
}