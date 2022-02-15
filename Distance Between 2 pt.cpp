#include <iostream>
#include <cmath>
using namespace std;


class point{
    int a,b,res;
    public:
            point(int, int);

            void display(){
                cout<<"The two points are "<<a<<" and "<<b<<endl;
            }
            friend int disbetween(point,point);
};

point::point(int x, int y)
{
    a = x;
    b = y;
}

int disbetween(point p1, point p2){
    int res = sqrt(pow(p1.a-p2.a,2)+pow(p1.b-p2.b,2));
    return res;
}
int main()
{
    point a(1,0);
    a.display();
    
    point b(70,0);
    b.display();

    int result=disbetween(a,b);
    cout<<"Distance between two points are : "<<result<<endl;
    return 0;
}