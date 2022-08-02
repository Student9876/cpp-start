//There can be function with same name. But they must have different Arguments
#include<iostream>
using namespace std;


int sum(int a, int b)
{
    cout<<"Using function with two arguments"<<endl;
    return a+b;
}

int sum(int a, int b, int c)
{
    cout<<"Using function with three arguments"<<endl;
    return a+b+c;
}

//calculate the volume of a cylinder
float volume(double r, int h)
{
    return(3.14*r*r*h);
}

//Calculate the volume of a cube
int volume(int a)
{
    return(a*a*a);
}
//Rectangular box
int volume(int l, int b, int h)
{
    return (l*b*h);

}


int main()

{
    cout<<"The sum of 7 and 8 is: "<<sum(7,8)<<endl;
    cout<<"The sum of 7, 8, 9 is: "<<sum(7,8,9)<<endl;
    cout<<"The volume of a cube with side 4 is: "<<volume(4)<<endl;
    cout<<"The volume of a cuboid with length 8 breadth 4 and height 6 is: "<<volume(8,4,6)<<endl;
    cout<<"The volume of a cylinder with radius 3 and height 6 is: "<<volume(3,6)<<endl;
    return 0;
}