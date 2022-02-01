#include <bits/stdc++.h>
using namespace std;     //we will implement the circular queue using fixed size array

template<typename T>   
class Queue{        //implementing a Templated Circular Queue Class   //1nd
    T *arr;         //dynamic array of fixed size, we will define the size when queue constructor is called
    int f;           // we will keep two pointers f and r        //f is front, r is rear 
    int r;
    int cs;       //these front and rear should not overlap(or cross each other) so we have to maintain two things cs ad ms
    int ms;

    public:
    Queue(int ds=4){      //Constructors   
        f=0;                   //ds is defaut size, ms is maximum size, cs is current size
        ms=ds;
        r=ms-1;
        arr= new T[ms];    //V.imp   //we should initialize this array to some valid memory which is of the size ms so array should point to new memory of type T and its size is ms
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
    Queue<int> q;       //user does not give the size so by default it will take the queue of size 4 from constructor 
    for(int i=1;i<=6;i++){
        q.push(i);
    }
    q.pop();
    q.push(8);
    while(!q.isEmpty()){
        cout<<q.front();       //printing starts from element where there is f and ends at r
        q.pop();
    }
    return 0;
}
