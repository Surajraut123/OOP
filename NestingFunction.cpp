#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;
    public:
        void get_binary_num();
        void check_binary();
        void ones_compliment();
        void display();
};
void binary :: get_binary_num()
{
    cout<<"Enter the number"<<endl;
    cin>>s;
}

void binary :: check_binary()
{
    for(int i = 0 ; i < s.length() ; i ++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Entered Number is Not a Binary"<<endl;
            exit(0);
        }
    }
}

void binary :: ones_compliment()
{
    for(int i = 0 ; i < s.length() ; i ++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else 
        {
            s.at(i)='0';
        }
    }
}
void binary :: display()
{
    cout<<"Your ones compliment is :"<<endl;
    for(int i = 0 ; i < s.length() ; i ++)
    {
        cout<<s.at(i);
    }
}
int main()
{
    binary b;
    b.get_binary_num();
    b.check_binary();
    b.ones_compliment();
    b.display();
    return 0;
}