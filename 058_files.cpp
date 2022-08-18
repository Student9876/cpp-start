#include <iostream>
#include <fstream>
/*
The useful classes for working with files in C++ are (included in fstream library):
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/

// In order work wuth files in C++, you will have to open it.
// Primarily, there are 2 ways to open a file:
// 1. Using the constructor
// 2. Using the member function open() of the class

using namespace std;

int main()
{
    string st = "zeon plays valorant\nHe plays bgmi also";
    string st2;
    // //Opening files using constructor and writing it
    // ofstream out("log_sample_001.txt"); // 'out' is just a name of an object. Can be anything
    // //Write operation
    // out<<st;

    // run this part of codes after commenting out above codes
    //  Opening files using constructor and reading from it
    ifstream in("log_sample_001.txt");
    // Read operation
    //  in>>st2;// This will output only one word from a line.
    getline(in, st2);
    // getline(in, st2); // to get each and every line we have to run getline function multiple times
    cout << st2 << endl;
    return 0;
}