#include <iostream>
using namespace std;

template <class T>
class Suraj{
    public:
        T data;
        Suraj(T x){
            data = x;
        }
        void display();
};

//Member Function Template
template <class T>
void Suraj<T> ::display(){
    cout<<"The value of data : "<<data<<endl;
}

//Function Overloading in Template
void fun(int a){
    cout<<"Regular called ";
}

template <class T>
void fun(T a){
    cout<<"Templatised called : "<<endl;
}
int main(){
    Suraj <int> obj(3);
    obj.display();

    fun(4);
    //Exact Match Having Highest Priority.

    return 0;
}