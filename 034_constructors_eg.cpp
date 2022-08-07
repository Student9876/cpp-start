#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;


class Point{
    int x,y;
    public: 
    friend void Distance(Point p1, Point p2);

    Point(int a, int b){
        x = a;
        y = b;
    }

    void displayPoint(){
        cout<<"The point is : ("<<x<<","<<y<<")"<<endl;
    }
};

void Distance(Point p1, Point p2)
{
    float d;
    d = pow((p2.x-p1.x), 2) + pow((p2.y-p1.y), 2);
    cout<<fixed;
    cout<<setprecision(3);
    cout<<"Distance between 2 points is: "<<sqrt(d);
}
int main()
{
    int x,y;
    cout<<"Enter first point: "<<endl;
    cin>>x>>y;
    Point p(x, y);
    p.displayPoint();

    cout<<"Enter second point: "<<endl;
    cin>>x>>y;
    Point q(x, y);
    q.displayPoint();

    Distance(p,q);
    return 0;
}