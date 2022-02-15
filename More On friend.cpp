#include <iostream>
using namespace std;

class y;//Is called forword declaration
class x{
    int data;
    friend void swaps(x &,y &);
    public:
            void setdata(int val){
                data = val;
            }
            void display(void)
            {
                cout<<data;
            }
            
};
class y{
    int num;
    friend void swaps(x &,y &);
    public:
            void setdata(int val){
                num = val;
            }
            void display(void)
            {
                cout<<num;
            }
            
};

void swaps(x &o1, y &o2){

    //Here object &o1 is a referrence
    //variable which is pointing to (data) variable

    //if we remove refference then it not work.
    //when we not given a reffernce to a object
    //Copy of object is happened here thats why not work.
    //So the object never be changed.
    int tmp = o1.data;
    o1.data = o2.num;
    o2.num = tmp;
}

int main()
{
    x a;
    a.setdata(4);
    y b;
    b.setdata(5);

    swaps(a,b);

    cout<<"After swaping value : ";
    a.display();
    cout<<" ";
    b.display();

    return 0;
}