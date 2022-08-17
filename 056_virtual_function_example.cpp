#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    // In case there is no display function in the derived class
    // and it is still being called then it will not throw error.
    // instead it will run code inside virtual function

    virtual void display() { cout << "bogus code" << endl; }
    // void display() {
    //     cout<<"Bogus code"<<endl;
    //     // if we dont use virtual in this Base class, the pointer is going to call
    //     //base class idplay function 2 times.
    // }
};

class CWHVideo : public CWH
{
    float videolength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        title = s;
        videolength = vl;
    }
    void display(void)
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings " << rating << " out of 5 stars" << endl;
        cout << "Length of the video is " << videolength << " minutes" << endl;
    }
};
class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display(void)
    {
        cout << "This is an amazing text with title " << title << endl;
        cout << "Ratings of this text  tutorial " << rating << " out of 5 stars" << endl;
        cout << "Number of words in this text tutorial is: " << words << " words" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // for Code with harry video
    title = "Django Tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djvideo(title, rating, vlen);
    // djvideo.display();

    // for Code with harry text
    title = "Django Tutorial text";
    words = 500;
    rating = 4.19;
    CWHText djtext(title, rating, words);
    // djtext.display();

    // Calling Functions using pointers
    CWH *tuts[2]; // Two pointer declared
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}
    /*
        // Rules for Virtual function
        1. They cannot be static
        2. They are accessef by objects pointers
        3. Virtual Functions can be a friend of another class
        4. A virtual function is base class might not be used
        5. A virtual function defined in the base class, there is no necessity of redefining it in the derived class
    */