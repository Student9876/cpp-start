// Distructors never takes an arguments and never returns a value

#include <iostream>
using namespace std;
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number " << count << endl;
    }
    ~num() //Declaration of destructor
    {
        cout << "This the time when my destructor called for object number " << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside our main function>" << endl;
    cout << "Creating first object n1" << endl;
    // Block
    num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    }
    // Things in the block will destroy automatically after the block is closed
    
    cout << "Back to main" << endl;
    return 0;
}