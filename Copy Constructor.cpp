#include <iostream>
using namespace std;

class number{
    int a;
    public:
            number(){a=0;}
            number(int num){
                a = num;
            }


            //If we not write this copy constructor then also it invoked;
            //Because compiler invoked its own copy constructor by default if we are not declared
            number(number &obj){
                a = obj.a;
            }
            void display(){
                cout<<"The value of is : "<<a<<endl;
            }
};
int main()
{
    number p,q,r(45),z2;
    p.display();
    q.display();
    r.display();

    //This is the writing method of copy contructor
    number z1(r);
    z1.display();

    //if we write
    z2 = r;       //It will run without any error.but copy cons not called
    z2.display();//Then copy constructor not called because we are declaring object r
    //which are already declared to z1. and now we are declaring r object
    //to z2 object which is totally wrong.

    //So instead of this we can do
    number z3 = r;//It is invoked now because
    // we are declaring new line with class name and object
    //It is totally permitted
    z3.display();
    return 0;
}