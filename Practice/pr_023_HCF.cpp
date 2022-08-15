// Wap to calculate HCF of two numbers
#include <iostream>
using namespace std;
void hcf(int n1, int n2)
{
    int min, temp, HCF;
    // finding min between n1 and n2
    if (n1 > n2)
    {
        min = n2;
    }
    else
        min = n1;

    for (int i = 1; i < min; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            HCF = i;
        }
    }
        cout << "HCF is: " << HCF << endl;
}
int main()
{
    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    hcf(n1, n2);
    return 0;
}