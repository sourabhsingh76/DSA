#include<bits/stdc++.h>
using namespace std;
 
class heap{                  //implementation of heap using vector(dynamic array)
    vector<int> v;
    bool minHeap;             //Configuration 

 bool compare(int a,int b){
            if(minHeap){
                return a<b;
            }else{
                return a>b;
            }
        }

    public:
        heap(bool type){
            minHeap=type;
            v.push_back(-1);        //block the 0th index

        }

        void push(int data){
            v.push_back(data);
            int index=v.size()-1;      //take that element to correct position to restore the heap property(acc to minHeap or maxHeap)
            int parent=index/2;
            while(index>1 && compare(v[index], v[parent])){          //V.imp
                swap(v[index], v[parent]);
                index=parent;
                parent=parent/2;
            }

        }

        bool empty(){
            return v.size()==1;            //size is 1 as 0th index is blocked 
        }

        int top(){
            return v[1];
        }
};
 
int main(){
heap h(false);     //maxHeap
h.push(5);
h.push(15);
h.push(2);
h.push(20);
h.push(3);

cout<<h.top()<<endl;

 return 0;
  }