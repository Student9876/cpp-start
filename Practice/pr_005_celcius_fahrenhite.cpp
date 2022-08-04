#include<iostream>
using namespace std;

int main()
{
    int val;
    float c,f;
    while(0<1)
    {
        cout<<"Choose Options:\n1.Celsius--> Fareinheit\n2.Fareinheit--> Celsius\n3.Exit"<<endl;
        cin>>val;
        switch(val)
        {
            case 1:
                {
                    cout<<"Enter celsius value: "<<endl;
                    cin>>c;
                    cout<<"Fareinheit Value:"<<(((c*9)/5)+32)<<endl;
                    break;
                }
            case 2:
                {
                    cout<<"Enter Fareinheit value: "<<endl;
                    cin>>f;
                    cout<<"Celsius Value:"<<(((f-32)/9)*5)<<endl;
                    break;
                }
            case 3:
                exit(0);
            default:
                cout<<"Wrong Choice:"<<endl;
                break;

        }

    }

    return 0;
}