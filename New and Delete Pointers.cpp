#include <iostream>
using namespace std;

int main(){
    int a=10;
    int *p = &a;
    cout<<"*p"<<*p<<endl;

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}