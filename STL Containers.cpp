#include <iostream>
#include <vector>
using namespace std;


void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<" "<<v[i];
    }
    cout<<endl;
}

int main(){

    vector<int> vec1;
    int size,ele;
    cout<<"Enter the total no : ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>ele;
        vec1.push_back(ele);
    }
    // vec1.pop_back();
    vec1.push_back(23);
    display(vec1);
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter, 45);
    cout<<"After Inserting : ";
    display(vec1);
    

    return 0;
}