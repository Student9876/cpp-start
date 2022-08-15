//Sum of Even Numbers in range
#include <iostream>
using namespace std;

int suminRange(int end)
{

    int start = 1, sum = 0;

    if (end % 2 == 0)
    {
        for (int i = start; i <= end; i++)
        {
            if (i % 2 == 0)
                sum = sum + i;
        }
    }
    else if (end % 2 != 0)
    {
        for (int i = start; i < end; i++)
        {
            if (i % 2 == 0)
                sum = sum + i;
        }
    }
    return sum;
}
int main()
{
    int end;
    while (1 > 0)
    {
        // ctrl + c to exit

        cout << "Enter ending Range: " << endl;
        cin >> end;
        cout << suminRange(end)<<endl;
    }
        return 0;
}