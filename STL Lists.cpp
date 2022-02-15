#include <iostream>
#include <list>

using namespace std;

void display(list<int> &li){
    list<int> :: iterator it;
    for (it = li.begin();it!=li.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
}
int main(){

    list<int> list1;
    list1.push_back(51);
    list1.push_back(12);
    list1.push_back(3);
    list1.push_back(40);
    display(list1);

    //Removing Elements
    // list1.remove(3);
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove();
    // cout<<"Using Pop Front : ";
    // display(list1);

    // Sorting List
    // list1.sort(); 
    // cout<<"Sorted List : ";
    // display(list1);  

    // Reversing list
    // list1.reverse();
    // display(list1);


    list<int> list2(3);
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 12;
    iter++;
    *iter = 13;
    iter++;
    *iter = 14;
    iter++;
    display(list2);

    list1.merge(list2);
    cout<<"After Merging : ";
    display(list1);


}