#include<bits/stdc++.h>
using namespace std;
 
class heap{
    vector<int> v;
    bool minHeap;

    public:
        heap(bool type=true){
            minHeap=type;

        }

        void push(int data){
            v[0]=-1;
            v.push_back(data);
            int index=v.size()-1;
            int parent=index/2;
            if(index>1 && v[index]<v[parent]){
                swap(v[index], v[parent]);
                index=parent;
                parent=parent/2;
            }

        }

        bool empty(){
            return v.size()==1;
        }

        int top(){
            return v[1];
        }
};
 
int main(){
heap h(true);
h.push(5);
h.push(20);
h.push(2);
h.push(8);
h.push(15);

cout<<h.top()<<endl;

 return 0;
  }