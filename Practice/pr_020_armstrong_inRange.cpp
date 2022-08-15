// Wap to find armstrong number in a range
//doesn't show 153
#include <iostream>
#include <math.h>

using namespace std;

void armstrong(int n1, int n2)
{
    int temp1, temp2, count = 0, num = 0, r;
    for (int i = n1; i <= n2; i++)
    {
        temp1 = i;
        temp2 = i;
        while (temp2 != 0)
        {
            temp2 = temp2 / 10;
            count++;
        }
        while (temp1 != 0)
        {
            r = temp1 % 10;
            num = num + pow(r, count);
            temp1 = temp1 / 10;
        }
        if (num == i)
            cout << i << "\t";

        count = 0;
        num = 0;
    }
}
int main()
{
    int n1, n2;
    cout << "Enter range(start-end): " << endl;
    cin >> n1 >> n2;
    armstrong(n1, n2);
    return 0;
}