// OOPs -Classes and objects 

    // C++ --> Initially called --> with classes by stroupstroup
    //Class --> extension of structures in C
    // structures had limitations
    //              --> members are public
    //              --> No methods
    //classes --> structures + more
    //classes --> can have methods and properties
    //classes --> can make few members as private & few as public 
    // Structures in C++ are typedefed
    // You can declare objects along with the class declaration
    /*   class Employee
        {
            //class declaration

        }zeon, zeus, rohan;
    */
   //zeon .salary = it makes no sense if salary is private

   // Nesting of member functions 

#include<iostream>
#include<string>

using namespace std;

class binary
    {
        string s;
        private:
            void chk_bin(void);  

        public:
            void read(void);
            void ones_complement(void);
            void display(void);
    };


void binary::read(void)
{
    cout<<"Enter a binary number: "<<endl;
    cin>>s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i< s.length(); i++)
    {
        if(s.at(i)!= '0' && s.at(i)!='1')  //at(i) means character at index i
        {
            cout<<"Incorrect Binary format"<<endl;
            exit(0);
        }
    }
}

void binary::ones_complement(void)
{
    chk_bin(); //function can be called directly without any object. Function in function
    for (int i = 0; i< s.length(); i++)
    {
        if(s.at(i)== '0')
        {
           s.at(i)='1';
        }
        else if(s.at(i)== '1')
        {
           s.at(i)='0';
        }
    }
}

void binary::display(void)
{
    cout<<"Displaying your binary number: ";
    for (int i = 0; i< s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}

int main()
{

    binary b;
    b.read() ;
    // b.chk_bin();
    //here chk_bin() cannot be accessed through main function as it is a private function.
    //can only be accessed by class methods. Means have to access through another class public function
    b.display();
    b.ones_complement();
    b.display();

    return 0;
}







