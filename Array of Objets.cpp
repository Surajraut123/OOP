#include <iostream>
using namespace std;

class shop{
    int id;
    float price;
    public:
            void setdata(int p, float q){
                id = p;
                price = q;
            }
            void getdata(){
                cout<<"Id : "<<id<<endl;
                cout<<"Price : "<<price<<endl;
            }
};

int main(){
    int size,p;
    float q;
    cout<<"Enter How Many Item : "<<endl;
    cin>>size;

    shop *ptr = new shop[size];
    shop *ptrTemp = ptr;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter Id and Price : "<<i+1<<endl;
        cin>>p>>q;
        (ptr)->setdata(p,q);
        ptr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout<<"Your Id and Price : "<<i+1<<endl;
        (ptrTemp)->getdata();
        ptrTemp[i];
    }

    
}