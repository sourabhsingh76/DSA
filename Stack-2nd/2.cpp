#include <bits/stdc++.h>
using namespace std;

template <typename T>          //template stack class      //implementing stack using vector
class Stack{            //generalising the class Stack for all types of data 
    private:
    vector<T> v;
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
  Stack<char> s;
  for(int i=65;i<=70;i++){        //ascii value
      s.push(i);
  }
  while(!s.empty()){
      cout<<s.top()<<endl;
      s.pop();
  }
  return 0;
}



