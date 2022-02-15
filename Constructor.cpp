#include <iostream>
using namespace std;

class complex{
    int a,b;
    public:
            complex (void);
            void display()
            {
                cout<<a<<"+"<<b<<"i"<<endl;
            }
};
complex :: complex(void){//Default Constructor
    a=10;
    b=20;
}
int main(){
    complex c1,c2;
    c1.display();
    c2.display();
}