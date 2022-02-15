#include <iostream>
using namespace std;

template <class t, class p>
void avge(t x, p y){
    float d = (x+y)/2;
    cout<<"Avg : "<<d<<endl;
}

int main(){
    //We can use any data type using template there is no need to
    //Create new function for data type
    
    avge(5,8.9);
    return 0;
}