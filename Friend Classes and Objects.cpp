#include <iostream>
using namespace std;
class complex;
class calculator{
    public:
        int add(int a,int b)
        {
            return a+b;
        }

        //Here we are saying that The complex class 
        //is exist in upcoming line ,
        //We are not saying that object of complex(o1,o2) are also exist.
        //We can't write here o1 and o2;
        int sumcomplex(complex , complex );
        int sumCompcomplex(complex , complex );
};

class complex{
    int a,b;
    // friend int calculator :: sumcomplex(complex o1, complex o2);
    // friend int calculator :: sumCompcomplex(complex o1, complex o2);

    //Instead of doing this Again and again we can directly
    // do friend as a class

    friend class calculator;
    public:
            void setdata(int n1,int n2)
            {
                a = n1;
                b = n2;
            }
            void display()
            {
                cout<<a<<" + "<<b<<"i"<<endl;
            }
};

int calculator :: sumcomplex(complex o1, complex o2)
{
    return (o1.a+o2.a);
}
int calculator :: sumCompcomplex(complex o1, complex o2)
{
    return (o1.b+o2.b);
}
int main()
{
    complex o1,o2;
    o1.setdata(1,4);
    o2.setdata(5,7);

    calculator c;
    int res = c.sumcomplex(o1,o2);
    cout<<"The real part Sum is : "<<res<<endl;

    int resc = c.sumCompcomplex(o1,o2);
    cout<<"The Complex part Sum is : "<<resc<<endl;
    return 0;
}