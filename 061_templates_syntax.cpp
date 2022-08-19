/*
***********Syntax for Templates***********
Template represents many classes

template <class T>
class vector{          // T can be int, float, char etc
    T* arr;
    public:
        vector(T*arr){          // Now this is not only one class. It represents many class
            //code
        }
        // & many other methods 
}

int main(){
    vector <int> myVec(ptr); 
    vector <float> myVec(ptr1); 
}
*/