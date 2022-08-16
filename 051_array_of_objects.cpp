#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "Code of the item is " << id << endl;
        cout << "Price of the item is " << price << endl;
    }
};

int main()
{
    int size = 3;
    int p, i; // i is declared here so that we can use it in two for loops
    float q;
    // int *ptr = new int[50]; //it means dynamically allocating 50 spaces for storing integeres

    // general store item
    // veggies item
    // hardware item
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;
    for (i = 0; i < size; i++)
    {
        cout << "Enter Id and price of item " << i + 1 << endl;
        cin >> p >> q;
        // (*ptr).setData(p,q);
        ptr->setData(p, q);
        ptr++;
    }
        for (int i = 0; i < size; i++)
        {
            cout << "Item number: " << i + 1 << endl;
            ptrTemp->getData();
            ptrTemp++;
        }

    return 0;
}