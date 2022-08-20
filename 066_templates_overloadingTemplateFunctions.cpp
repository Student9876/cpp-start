#include <iostream>
using namespace std;

template <class T>
class Zeon
{
public:
    T data;
    Zeon(T a)
    {
        data = a;
    }
    void display();
};
template <class T>
void Zeon<T>::display()
{
    cout << "The value of data is: " << data << endl;
}

// Overloading
void func(int a)
{
    cout << "I am the first func() " << a << endl;
}
template <class T>
void func(T a)
{
    cout << "I am the templatised func() " << a << endl;
}

int main()
{
    // Zeon <float>z(6.7);
    // Zeon <char>z('I');
    Zeon<int> z(89);
    cout << z.data << endl;
    z.display();

    // Overloading
    func(4);         // Here the first function called. Exact match takes the hightest priority
    func<char>('I'); // Here the templatised function called

    return 0;
}