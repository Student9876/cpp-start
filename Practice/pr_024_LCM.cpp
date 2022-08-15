// Wap to calculate LCM of two numbers
#include <iostream>
using namespace std;
void lcm(int n1, int n2)
{
    int min, temp, LCM = 1;
    // finding min between n1 and n2
    if (n1 > n2)
    {
        min = n2;
    }
    else
        min = n1;

    for (int i = 1; i <= min; i++)
    {
        if (n1 % i == 0 && n2 % i == 0) // a number which devides both n1 and n2
        {
            LCM = i;
                }
    }
    cout << "LCM is: " << LCM << endl;
}
int main()
{
    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    lcm(n1, n2);
    return 0;
}