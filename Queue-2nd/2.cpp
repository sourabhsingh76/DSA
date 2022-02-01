#include <bits/stdc++.h>
using namespace std;

template<typename T>
class Queue{        //implementing a Templated Circular Queue Class   //2nd
    T *arr;         //dynamic array of fixed size, we will define the size when queue constructor is called
    int f;           //f is front, r is rear 
    int r;
    int cs;       //these front and rear should not overlap(or cross each other) so we have to maintain two things cs ad ms
    int ms;

    public:
    Queue(int ds=4){      //Constructors   
        f=0;                  //ds is defaut size, ms is maximum size, cs is current size
        ms=ds;
        r=ms-1;
        arr= new T[ms];    //imp   //we should initialize this array to some valid memory which is of the size ms so array should poit to new memory of type T and its size is ms
        cs=0;
    }

    bool isEmpty(){
        return cs==0;
    }

    bool isFull(){  
        return cs==ms;
    }

    void push(T data){           //put T here not int
        if(!isFull()){           //imp
            r=(r+1)%ms;          //V.imp     //front and rear will follow circular rotation  //this %ms ensure when you cross last index,you will come to the 0th index back
            arr[r]=data;
            cs++;
        }
    }

    void pop(){
            if(!isEmpty()){      //imp
            f=(f+1)%ms;          //V.imp    //front and rear will follow circular rotation    //this %ms ensure when you cross last index,you will come to the 0th index back
            cs--;
        }
    }

    T front(){                  //put T here not int
        return arr[f];
    }


};


int main(){
    Queue<int> q(10);              //user has declared queue of size 10
    for(int i=1;i<=6;i++){
        q.push(i);
    }
    q.pop();
    q.push(8);
    while(!q.isEmpty()){
        cout<<q.front();
        q.pop();
    }
    return 0;
}
