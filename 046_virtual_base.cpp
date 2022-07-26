#include <iostream>
using namespace std;

/*
Inheritance:
student-->test [done]
student-->sports [done]
test--> result [done]
sports--> result [done]
*/

class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "Your roll no is " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }

    void print_marks(void)
    {
        cout << "Your result is here: " << endl
             << "Maths:" << maths << endl
             << "Physics:" << physics << endl;
    }
};

class Sports : virtual public Student // virtual public or public virtual, Both are same
{
protected:
    float score;

public:
    void set_score(float s)
    {
        score = s;
        
    }
    void print_score(void)
    {
        cout << "Your PT score is " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << " Your total score is: " << total << endl;
    }
};
int main()
{
    Result zeon;
    zeon.set_number(24);
    zeon.set_marks(84, 90);
    zeon.set_score(7);
    zeon.display();
    return 0;
}