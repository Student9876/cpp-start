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
    // if we comment out any display functions in derived classes and call them in main, then it runs 'virtual void display(){}'
    // that means program is still going to run without any error.
    // thats why pure virtual function is being declared to specify that we have to make a display function in derived classes

    virtual void display()=0; //do-nothing function --> pure virtual function
    // Pure Virtual Function is used to make Abstarct Base class
    // Pure virtual function has to be overwritten with other same functions of derived class either it will throw error
};

class CWHVideo : public CWH
{
    float videolength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
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