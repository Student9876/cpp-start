// Today we are using the class functions using objects

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream out;
    out.open("log_sample.txt");
    out << "This is me\n";
    out << "This is zeon";
    out.close();

    ifstream in;
    string st;
    in.open("log_sample.txt");
    // getline(in,st);
    // cout<<st<<endl;
    // getline(in,st);
    // cout<<st<<endl;

    
    // For printing every line
    while (in.eof() == 0)  //eof() means end of line 
    {
        getline(in, st);
        cout << st << endl;
    }

    in.close();
    return 0;
}