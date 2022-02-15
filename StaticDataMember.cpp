#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;
    public:
            void setdata(void)
            {
                cout<<"Enter the id : "<<endl;
                cin>>id;
                count++;
            }
            void getdata(void)
            {
                cout<<"The id is: "<<id<<" and the count is: "<<count<<endl;
            }
            static void displaycount(void)
            {
                cout<<"The count is: "<<count<<endl;
            }
};

int employee :: count;
int main()
{
    employee em;
    em.setdata();
    em.getdata();
    em.displaycount();
    
    employee e;
    e.setdata();
    e.getdata();
    e.displaycount();
    return 0;
}