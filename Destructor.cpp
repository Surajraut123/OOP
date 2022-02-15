#include <iostream>
using namespace std;

int count=0;
class num{
    public:
            num(){
                count++;
                cout<<"Constructor called "<<count<<endl;
            }
            ~num(){
                cout<<"Destructor called "<<count<<endl;
                count--;
            }
};
int main(){
    cout<<"Inside Main Function"<<endl;
    cout<<"First Object Called "<<endl;
    num n1;
    {
        cout<<"Entered n1 block"<<endl;
        cout<<"Creating 2 obj "<<endl;
        num n2 ,n3;
        cout<<"Exiting Block"<<endl;
    }
    cout<<"Back To Main Function "<<endl;
}