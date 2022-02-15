#include <iostream>
using namespace std;

class complex{
    int a,b;
    public:
            void setdata(int n1,int n2)
            {
                a = n1;
                b = n2;
            }

            //Here the sumComplex function is not a member function of that class because
            // we only declared as a friend function
            //If we write this friend function in private section then also it run
            friend complex sumComplex(complex o1, complex o2);

            void display()
            {
                cout<<a<<"+"<<b<<"i"<<endl;
            }
};

//WE written complex return type because we saying that complex class and sumComplex function are friend.
complex sumComplex(complex o1, complex o2)
{
    complex o3;
    // cout<<a;  We cannot write this way.
    //If we not write sumComplex function as a friend then it throughs an error
    // because we accesing private members of that class
    o3.setdata((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}

int main()
{
    complex c1,c2,sum;
    c1.setdata(1,2);
    c1.display();

    c2.setdata(3,4);
    c2.display();
    
    //Its an diclaration
    sum=sumComplex(c1,c2);
    sum.display();
    return 0;
}