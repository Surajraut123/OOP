#include <iostream>
using namespace std;


class bankdeposit{
    int principle;
    int years;
    float interest;
    float returnValue;
    public:
            bankdeposit(){}
            bankdeposit(int p,int y,float r);
            bankdeposit(int p,int y,int R);

            void show();
};

bankdeposit::bankdeposit(int p,int y,float r){
    principle = p;
    years = y;
    interest = r;
    returnValue = p;
    for(int i=0;i<y;i++)
    {
        returnValue = returnValue * (1+interest);
    }
}
bankdeposit::bankdeposit(int p,int y,int r){
    principle = p;
    years = y;
    interest = float(r)/100;
    returnValue = p;
    for(int i=0;i<y;i++)
    {
        returnValue = returnValue * (1+interest);
    }
}

void bankdeposit::show(){
    cout<<"Principle amount is "<<principle<<" and the years "<<years
    <<" and the rate of is "<<interest<<" the return value after the years is "<<returnValue<<endl;
}

int main(){
    int p,y;
    float r;
    int R;

    cout<<"Enter the value of p, y, r "<<endl;
    cin>>p>>y>>r;
    bankdeposit a,b;
    a = bankdeposit(p,y,r);
    a.show();

    cout<<"Enter the value of p, y, r "<<endl;
    cin>>p>>y>>R;
    b = bankdeposit(p,y,R);
    b.show();

}