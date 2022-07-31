#include<iostream>

using namespace std;

//*********Structure************
typedef struct employee
{
    int eId;
    char favChar;
    float salary;

} ep;

//*********Union************
union money
{
    //For better memory management. Only wanna use 1 type from below
    int rice; //4
    char car;  //1
    float pounds; //4   //So union will allocate only 4 bits to share one 
                        //datatype at a time. This comparitively uses less 
                        //memory than structure
};

int main()

{
    //structure
    cout<<"Here Structure begins"<<endl;
    ep zeon;
    struct employee shubham; //we can use typedef as well as normal name of the structure
    zeon.eId = 1;
    zeon.favChar = 'I' ;
    zeon.salary = 120000;
    cout<<"Employee ID of zeon is "<<zeon.eId<<endl;
    cout<<"Salary of zeon is "<<zeon.salary<<endl;
    cout<<"Favourite character of zeon is "<<zeon.favChar<<endl;
    
    //Union
    cout<<"Here Union begins"<<endl;
    union money m1;
    m1.rice = 39; 
    // m1.car ='Lambo';   //this will print garbage value. Because Already one variable is being used
    

    cout<<"The price of rice is: "<<m1.rice<<endl;
    cout<<"The price of car is: "<<m1.car<<endl;

    //Enum
    cout<<"Here enum begins"<<endl;
    enum Meal{breakfast, lunch, dinner}; //Allocates breakfast=0, lunch=1, dinner=2
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    Meal m2 = lunch;
    cout<<"Value: "<<m2;

    return 0;
}