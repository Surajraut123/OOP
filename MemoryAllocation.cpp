#include <iostream>
using namespace std;
class shop
{
    int itemId[100];
    int itemPrice[100];
    int count;
    public:
        void initcount(void)
        {
            count=0;
        }
        void setdata(void);
        void displaydata(void);
};

void shop :: setdata(void)
{
    cout<<"Enter item id"<<endl;
    cin>>itemId[count];
    cout<<"Enter item price"<<endl;
    cin>>itemPrice[count];
    count++;
}

void shop :: displaydata(void){
    for (int i = 0; i < count; i++)
    {
        cout<<"The itemId "<<itemId[i]<<" is "<<"Price is "<<itemPrice[i]<<endl;
    }
    
}

int main()
{
    shop p;
    p.initcount();
    p.setdata();
    p.displaydata();
    return 0;

}