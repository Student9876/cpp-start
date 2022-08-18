#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // Connecting our file with hout stream
    ofstream hout("log_sample.txt");

    // Creating a name string and filling it with 
    // the string entered by the user
    string name;
    cout<<"Enter your name: ";
    getline(cin,name); // To get the total name
    // cin>>name;

    // writing a string to the file
    hout<<"My name is "+name;
    hout.close();   //Closing the file

    ifstream hin("log_sample.txt");
    string content;
    getline(hin, content); //to get the total line
    // hin>>content;
    cout<<"The content of the file is: "<<content<<endl;
    hin.close();
    return 0;
}