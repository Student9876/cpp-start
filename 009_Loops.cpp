#include<iostream>

using namespace std;

int main()
{
    int age;
    cout<<"Tell me your age: "<<endl;
    cin>>age;

    //Selction Control Structure: If-else ladder
    if((age<18) && (age>0))
    {
        cout<<"You cannot come to my party"<<endl;
    }
    else if(age==18)
    {
        cout<<"You are a kid and you will get a kid pass to the party"<<endl;   
    }
    else if(age<1)
    {
        cout<<"You are not yet born"<<endl;
    }
    else
    {
        cout<<"You can come to the party"<<endl;
    }



    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 22:
        cout<<"You are 22"<<endl;
        break;
    
    default:
        cout<<"No special Cases"<<endl;
        break;
    }
    cout<<"Done with switch case"<<endl;
    return 0;
}