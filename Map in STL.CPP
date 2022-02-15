#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {1, 72, 5, 90, 5, 63};
    // sort(arr, arr+6);
    sort(arr, arr+6, greater<int>());//In an descending Order
    //More functions have in that , Function of object.(functor)
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}