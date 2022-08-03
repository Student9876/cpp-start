#include<iostream>
using namespace std;

class Shop
{
    int itemId[100];            //by default functions and variables are declared as private.
    int itemPrice[100];
    int counter;
    public:
        void initCounter(void) {counter = 0;}
        void setPrice(void);
        void displayPrice(void);
};

void  Shop::setPrice(void)
{
    cout<<"Enter Id of your item no."<<counter<<": "<<endl;
    cin>>itemId[counter];
    cout<<"Enter Price of your item: "<<endl;
    cin>>itemPrice[counter];
    counter++;

}

void Shop::displayPrice()
{
    for (int i = 0; i < counter; i++)

    {
        cout<<"The price of item with ID "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
    
}

int main()
{
    int val;
    Shop dukaan;
    dukaan.initCounter();
    while (1<2)
    {
        cout<<"Choose one Option:\n"<<"1. Set the Price\n2. Display the Price\n3. Exit"<<endl;
        cin>>val;
        switch (val)
        {
        case 1:
            dukaan.setPrice();
            break;
        case 2:
            dukaan.displayPrice();
            break;
        case 3:
            exit(0);
        default:
            cout<<"You entered wrong choice!!";
            break;
        }
    }
    

    return 0;
}