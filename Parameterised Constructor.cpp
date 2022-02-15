#include <iostream>
using namespace std;


class complex{
    int a,b;
    public:
            complex(int ,int);
            void display()
            {
                cout<<a<<" + "<<b<<"i"<<endl;
            }
};

complex::complex(int x, int y)
{
    a=x;
    b=y;
}
int main(){
    //It is called an Implicit call
    complex a(3,4);
    a.display();

    //It is called an explicit call
    complex b = complex(5,6);
    b.display();
    return 0;


}