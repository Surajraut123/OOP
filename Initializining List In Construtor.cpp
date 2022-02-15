#include <iostream>
using namespace std;

class test{
    int a,b;
    public:
        // test(int i, int j) : a(i),b(j)
        // test(int i, int j) : a(i),b(i+j)
        // test(int i, int j) : a(i),b(a+j)
        // test(int i, int j) : b(i),a(j+b) --->Gives an error because sequence 
        // of declared value of a and b
        test(int i, int j) : b(i),a(j)
        {
            cout<<"A : "<<a<<endl;
            cout<<"B : "<<b<<endl;
        }
};
int main(){
    test a(1,2);
    return 0;

}