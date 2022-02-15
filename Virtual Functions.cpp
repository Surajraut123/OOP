#include <iostream>

using namespace std;

class base1{
    public:
            int var1;
   
            virtual void display(){
                cout<<"The value of var1 :"<<var1<<endl;
            }
            // void display(){
            //     cout<<"The value of var1 :"<<var1<<endl;
            // }
};
class derived: public base1{
    public:
    int var2;
    
            void display(){
                cout<<"The value of var1 :"<<var1<<endl;
                cout<<"The value of var2 :"<<var2<<endl;
            }
};

int main(){
    base1 * base_class_pointer;
    base1 obj_base;
    
    derived obj_derived;
    base_class_pointer = &obj_derived;
    
    base_class_pointer->var1 = 34;
    base_class_pointer->display(); //Before writing virtual keyword, the display function of
                                    //  class base1 will called
                                    //After writing virtual display of derived class will called
    
    

    return 0;
}





















