#include <iostream>
using namespace std;
class student{
    protected:
    int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number();
};

void student::set_roll_number(int p)
{
    roll_number = p;
}
void student::get_roll_number()
{
    cout<<"Student Roll Number is "<<roll_number<<endl;
}

class marks : public student{
    protected:
    float math,physics;
    public:
        void set_marks(float,float);
        void get_marks();
};

void marks ::set_marks(float p, float r){
    math = p;
    physics = r;
}

void marks:: get_marks(){
    cout<<"Maths Marks are "<<math<<endl;
    cout<<"Physics Marks are "<<physics<<endl;
}

class exam : public marks{
    protected:
    float percentage;
    public:
        void display(){
            get_roll_number();
            get_marks();
            cout<<"The Percentage of student are "<<(math+physics)/2<<"%"<<endl;
        }
};

int main(){
    exam e;
    e.set_roll_number(42);
    e.set_marks(42.4,67.4);
    e.display();
    return 0;
}