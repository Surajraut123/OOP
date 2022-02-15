#include <iostream>
#include <fstream> 
#include <string>
using namespace std;

int main(){
    // string str = "Hi I am Suraj ";
    // string st1;

    // //Opening file using constructor and writing to it
    // //out is an object we can take any number
    // ofstream out("Rsample.txt");
    // out<<str;

    // //Opening file using constructor and reading to it
    // //out is an object we can take any number
    // ifstream in("Rsample.txt");
    // // in>>st1;//By writing this only the first word of the statement will printed

    // getline(in,st1);//By using this the whole statemtn will print
    // cout<<st1;

    string str,st;
    cout<<"Enter your name : "<<endl;
    cin>>str;

    ofstream out("Rsample.txt");
    // out<<str;
    out<<"Your name is: " +str <<endl;

    out.close();

    ifstream in("Rsample.txt");
    // in>>st;
    getline(in, st);
    cout<<st;
    in.close();
    return 0;
}