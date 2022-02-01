#include<bits/stdc++.h>
using namespace std;


int main(){
queue<int> q;          //we can also put any other datatypes in queue
q.push(2);             //FIFO
q.push(3);
q.push(5);
q.push(6);
while(!q.empty()){
cout<<q.front()<<endl;
q.pop();
}

  return 0;
}