#include <iostream>
#include <cstring>
using namespace std;

class CWH{
    protected:
            string title;
            float rating;
    public:
           
            CWH(string s, float r){
                title = s;
                rating = r;
            }    

            virtual void display()=0;
            /*
            It is a abstract base class. Means in an abstract base class 
            having at least one pure virtual function. 

            Means if we called display function then that fun not present in
            an below lines then it will shows an error. Because it's an pure.

            If we not write pure virtual function then program run successfully
            and display function not present in an below lines then this display
            function called by default.

            */

};

class CWHvideo : public CWH
{
    float video_length;
    public:
            CWHvideo(string s, float r, float vl) : CWH(s,r){
                video_length = vl;
            }

            void display(){
                cout<<"The Title of your channel "<<title<<endl;
                cout<<"The rating of your channel "<<rating<<endl;
                cout<<"The length of your video "<<video_length<<endl;
            }     
};
class CWHtext : public CWH{

    int words;
    public:
            CWHtext(string s, float r, int wc) : CWH(s,r){
                words = wc;
            }

            void display(){
                cout<<"The total words of your content "<<words<<endl;
            }     
};

int main(){
    string title;
    float rating, vlen;
    int words;
    
    //For Video
    title = " C++ Tutorial ";
    rating = 4.5;
    vlen = 2.4;
    CWHvideo djvideo(title, rating, vlen);
    // video.display();

    // For Text
    title = " C++ text tutorial ";
    rating = 4.6;
    words = 234;
    CWHtext djtext(title, rating, words);

    CWH * tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    tuts[1]->display();


    return 0;



}