#include <iostream>

using namespace std;

class base1{
    public:
            int var1;
   
            void display(){
                cout<<"The value of var1 :"<<var1<<endl;
            }
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
    base_class_pointer->display();
    
    // base_class_pointer->var2=344;//This will Throw an Error
    // base_class_pointer->display();
    
    derived * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var1 = 45;
    derived_class_pointer->var2 = 56; 
    derived_class_pointer->display();

    return 0;
}





















