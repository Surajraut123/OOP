#include <iostream>
using namespace std;
template <class T1, class T2>
class myclass{
    T1 data1;
    T2 data2;
    public:
            myclass(T1 p, T2 q){
                data1 = p;
                data2 = q;
            }
            void display(){
                cout<<this->data1<<endl<<this->data2<<endl;
            }
};
int main(){
    myclass <int, char> obj(1,'c');
    obj.display();

    return 0;
}