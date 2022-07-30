#include<iostream>

using namespace std;

int main()
{
    /*
    Loops is C++
    1. for loop
    2. while loop
    3. do-while loop
    */
   //for loop in C++
   //for(initialization; condition; updation)
   //{
    // loop body
   //}

   for (int i = 1; i <= 40; i++)
   {
        cout<<i<<endl;
   }
   
   //Example of infinite for loop
   /*
   for(int i=1; 34<= 40; i++)
   {
        cout<<i<<endl;
    }
    */
   //while loop in C++
   //syntax
//    while(condition)
//    {
//         c++ statements;
//    }

    // Printing 1-40 using while loop
    int i = 1;
    while(i<=40)
    {
        cout<<i<<endl;
        i++;
    }
    //Example of infinite while loop
    // int j = 1;
    // while(true)
    // {
    //     cout<<j<<endl;
    //     j++;
    // }


    //do - while loop in C++. This loop will run atleast on time
   //syntax:
//    do
//    {
//         c++ statements;
//    }while(condition)
    int k = 1;
   do
   {
        cout<<k<<endl;
        k++;
   }while(k<=40);

   return 0;

}