#include <iostream>
using namespace std;

class student{
    protected:
        int roll_no;
    public:
        void set_no(int a){
            roll_no = a;
        } 
        void print_no(void){
            cout<<"Your Roll No is "<<roll_no<<endl;
        }   
};
class test : virtual public student{
    protected:
        float maths,physics;
    public:
        void set_marks(float a, float b){
            maths = a;
            physics = b;
        } 
        void print_marks(void){
            cout<<"Your Marks"<<endl<<"Maths : "<<maths<<endl<<"Physics : "
                <<physics<<endl;
        }   
};
class sports : virtual public student{
    protected:
        int sport;
    public:
        void set_score(int a){
            sport = a;
        } 
        void print_score(void){
            cout<<"Your Score : "<<sport<<endl;
        }   
};

class result :public test,public sports{
    protected:
        float result;
    public:
        void display(){
            float total = maths + physics;
            print_no();
            print_marks();
            print_score();
            cout<<"Your Total result : "<<total<<endl;
        }    
};
int main(){
    result a;
    a.set_no(42);
    a.set_marks(67.6,78.9);
    a.set_score(9);
    a.display();
    return 0;
}