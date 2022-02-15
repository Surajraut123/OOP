#include <iostream>
using namespace std;


template <class T1=int, class T2 = float>
class Suraj{
    public:
            T1 a;
            T2 b;
            Suraj(T1 x, T2 y){
                a = x;
                b = y;
            }
            void display(){
                cout<<"Sum of both "<<(a+b)<<endl;
            }
};
int main(){
    Suraj <> h(2,3.4);//Default template parameter
    //Because we intialised before.

    //Also we can change it if we want.Like,
    Suraj <char,float> s('d',9.3);
    s.display();

    h.display();
    return 0;
}