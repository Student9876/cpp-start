#include <iostream>
using namespace std;

// Base class
class Employee
{
public:
    int id;
    float salary;
    Employee() {}
    Employee(int inpid)
    {
        id = inpid;
        salary = 34.0;
    }
};

// Derived class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{                               Maybe public or private
    class member/methods etc...
};

Note:
1. Default visibility mode private
2. Public visibility Mode: Public Members of the base class becomes public members of the derived class
3. Private visibility Mode: Public Members of the base class becomes private members of the derived class
4. We cannot inherite private members of the base class
*/

class Programmer : public Employee
{
public:
    Programmer(int inpid)
    {
        id = inpid;
    }
    int languageCode = 9;
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee zeon(1), saikat(2);
    cout << zeon.salary << endl;
    cout << saikat.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;

    skillF.getData();
    return 0;
}