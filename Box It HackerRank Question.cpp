#include<bits/stdc++.h>

using namespace std;
class Box{
    private:
           int l=0;
           int b=0;
           int h=0;
    public:
            int getLength() const{
                return l;
            }
            int getBreadth() const{
                return b;
            }
            int getHeight() const{
                return h;
            }
            long long CalculateVolume(){
                return (long long)l*b*h;
            }


            Box(){}
            Box(int x, int y, int z):l(x),b(y),h(z){}
            Box(const Box &B){
                l=B.getLength();
                b=B.getBreadth();
                h=B.getHeight();
            } 

            bool operator<(const Box& B){
                int ll = B.getLength();
                int bb = B.getBreadth();
                int hh = B.getHeight();

                if(l<ll|| b<bb && l==ll|| h<hh && b==bb && l==ll){
                    return true;
                }
                else{
                    return false;
                }
            }

              
};
ostream& operator<<(ostream& out, Box B){
    int l=B.getLength();
    int b=B.getBreadth();
    int h=B.getHeight();
    return out<<l<<" "<<b<<" "<<h;
}    
void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}