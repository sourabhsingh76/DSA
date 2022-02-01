#include <bits/stdc++.h>
using namespace std;

template <typename T, typename U>          //template stack class
class Stack{                   //implementing stack using vector
    private:
    vector<T> v;
    vector<U> v2;
    public:
    void push(T data){
        v.push_back(data);   
    }                          
    bool empty(){
        return v.size()==0;
    }
    void pop(){
        if(!v.empty()){      
            v.pop_back();
        }
    }
    T top(){
        return v[v.size()-1];
    }

};

int main(){
  Stack<char,int> s;
  for(int i=65;i<=70;i++){        //ascii value
      s.push(i);
  }
  while(!s.empty()){
      cout<<s.top()<<endl;
      s.pop();
  }
  return 0;
}



