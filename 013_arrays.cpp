#include<iostream>
using namespace std;

int main()

{
    //***********Array Examples*********
    int marks[4]={23,45,54,89};
    int mathMarks[4];
    mathMarks[0]=896;
    mathMarks[1]=457;
    mathMarks[2]=546;
    mathMarks[3]=454;

    cout<<"These are marks: "<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    cout<<"These are math marks: "<<endl;
    mathMarks[2]= 678; //changing value of an array
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;


// printing marks in array using loop
    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i<<" is: "<<marks[i]<<endl;
    }
    
    return 0;
}