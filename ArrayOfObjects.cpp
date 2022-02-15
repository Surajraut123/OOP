#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;
    public:
            void setdata(void)
            {
                cout<<"Enter the id "<<endl;
                cin>>id;
            }
            void getdata(void)
            {
                cout<<"Your Id is : "<<id<<endl;
            }
};

int main()
{
    employee em[4];
    for(int i=0;i<4;i++)
    {
        em[i].setdata();
        em[i].getdata();
    }
    return 0;
}