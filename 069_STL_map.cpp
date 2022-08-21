#include<iostream>
#include<map>
#include<string>

using namespace std;


// Map is an associative array
int main()
{
    map<string, int> marksMap;
    marksMap["Zeon"]=94;
    marksMap["Sayan"]=98;
    marksMap["Rohan"]=85;

    marksMap.insert({{"Hinata", 169}, {"Kuroo", 187}});
    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter!=marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    cout<<"The size is: "<<marksMap.size()<<endl;
    cout<<"The max size is: "<<marksMap.max_size()<<endl;
    cout<<"The empty's return value is: "<<marksMap.empty()<<endl;
    return 0;
}