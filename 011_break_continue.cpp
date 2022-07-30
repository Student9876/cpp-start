#include<iostream>
using namespace std;

int main()

{
    for (int i = 0; i < 4; i++)
    {
        cout<<i<<endl;
        if(i==2)
        {
            break;
        }
    }
    cout<<"Loop exited due to break statement"<<endl;
    
    for (int i = 0; i < 5; i++)
    {
        if(i==2)
        {
            cout<<"hurr"<<endl;
            continue;  //continue means stop the current itretion and go on to the next loop itretion
        }
        cout<<i<<endl;
    }
    return 0;
}