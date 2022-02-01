#include <bits/stdc++.h>
using namespace std;

class Stack{                   //implementing stack using vector
    private:
    vector<int> v;
    public:
    void push(int data){
        v.push_back(data);     //in vector, we use push_back, pop_back 
    }                          //in stack, we use push, pop
    bool empty(){
        return v.size()==0;
    }
    void pop(){
        if(!v.empty()){      //use if, don't use while here 
            v.pop_back();
        }
    }
    int top(){
        return v[v.size()-1];
    }

};

int main(){
  Stack s;
  for(int i=1;i<=6;i++){        //LIFO
      s.push(i*i);
  }
  while(!s.empty()){
      cout<<s.top()<<endl;
      s.pop();
  }
  return 0;
}



