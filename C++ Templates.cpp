#include <iostream>

using namespace std;

template <class T>
class vector{
    public:
        T *arr;
        int size;

        vector(T m){
            size = m;
            arr = new int[size];
        }

        T dotproduct(vector &v){
            T d=0;
            for (T i = 0; i < size; i++)
            {
                d+=this->arr[i] * v.arr[i];
            }
            return d;
            
        }
};

int main(){

    vector <int> v(3);
    v.arr[0] = 4;
    v.arr[1] = 3;
    v.arr[2] = 1;

    vector <int> v1(3);
    v1.arr[0] = 1;
    v1.arr[1] = 0;
    v1.arr[2] = 1;
    int d;
    d = v.dotproduct(v1);
    cout<<d; 

    vector <float> v2(3);
    v2.arr[0] = 4;
    v2.arr[1] = 3;
    v2.arr[2] = 1;

    vector <float> v3(3);
    v3.arr[0] = 1;
    v3.arr[1] = 0;
    v3.arr[2] = 1;
    int d;
    d = v.dotproduct(v1);
    cout<<d; 

    

    return 0;
}