#include <iostream>
using namespace std;


class base1{
    int data;
    public:
            base1(int a){
                data = a;
            }
            void display(){
                cout<<"Data1 : "<<data<<endl;
            }
};
class base2{
    int data1;
    public:
            base2(int a){
                data1 = a;
            }
            void display1(){
                cout<<"Data2 : "<<data1<<endl;
            }
};
class derived : public base1,public base2{
    int derived1,derived2;
    public:
            derived(int a,int b,int c,int d): base1(a),base2(b){
                derived1 = c;
                derived2 = d;
            }
            void print(){
                cout<<"Derived1 : "<<derived1<<endl;
                cout<<"Derived2 : "<<derived2<<endl;
            }
};
int main(){
    derived f(1,2,3,4);
    f.display();
    f.display1();
    f.print();
    return 0;
}