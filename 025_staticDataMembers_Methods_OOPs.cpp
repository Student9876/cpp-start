#include<iostream>
using namespace std;

class Employee
{
    int id;
    static int count;    //as Variables inside a class is different for every object
    //Static variable    //So we can't record a track of number of counts. for passing 
    //is by default 0     //the count variable throughout the object we need static variable
    
    public:             
        void setData(void)
        {
            cout<<"Enter the id: "<<endl;
            cin>>id;
            count++;
        }
        void getData(void)
        {
            cout<<"The id of the employee is:"<<id<<" and this is employee number "<<count<<endl;
        }

        static void getCount(void)              //static functions are used to access all the static variables[Functions or var]
        {                                       //we cannot access any other variables(like--> id here) except static variables
            // cout<<id;    //throws an error
            cout<<"The value of count is: "<<count<<endl;
        }
};

int Employee:: count; //This is a static member. This memory will not come with every obeject. It will come once with the class
// default value is 0
// If need to start from another value, just declare it here.
//int Employee:: count= 1000;


int main()
{
    Employee zeon, rohan, saikat;
    //count is static data member of class Employee
    // zeon.id = 1;                 //cannot do this as id and count is private 
    
    zeon.setData();
    zeon.getData();
    Employee::getCount();           // getCount can be accessed directly with the name of class.


    rohan.setData();
    rohan.getData();
    Employee::getCount();

    saikat.setData();
    saikat.getData();
    Employee::getCount();
    return 0;
}