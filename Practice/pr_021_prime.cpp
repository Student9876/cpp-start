// Wap to check a number is prime or not
#include <iostream>
using namespace std;
void Prime(int n)
{
    int flag = 0;
    if (n == 0)
    {
        cout << "Not prime!!" << endl;
    }
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }
    }
    if(flag == 1)
        cout << "Not Prime!!" << endl;
    else
        cout << "Prime!!" << endl;

}
int main()
{
    int n;
    cout << "Enter a number to check: ";
    cin >> n;
    Prime(n);
    return 0;
}