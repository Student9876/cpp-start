#include <iostream>
using namespace std;
template <class T1 = int, class T2 = float, class T3 = char>
class Zeon
{
public:
    T1 a;
    T2 b;
    T3 c;
    Zeon(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
    }
};
int main()
{
    // Utilizing default parameters
    Zeon<> z(5, 7.9, 'c');
    z.display();

    cout << endl;
    // Using custom
    Zeon<double, char, int> g(56.769, 'j', 100);
    g.display();

    return 0;
}