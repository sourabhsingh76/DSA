#include <bits/stdc++.h>
using namespace std;

void print(priority_queue<int,vector<int>,greater<int>> pq){
while(!pq.empty()){
   cout<< pq.top()<<",";             
    pq.pop();
}
}

int main(){              //printing k largest elements in a runnning stream         //nlog(k)
int no;                
int cs=0;
int k=3;

priority_queue<int,vector<int>,greater<int>> pq;       //min heap

while(scanf("%d",&no)!=EOF){    //due to runnning stream(can't store all the numbers)    //EOF is end of file
  if(cs<k){
      pq.push(no);
      cs++;
  }
  else if(no> pq.top()){
      pq.pop();
      pq.push(no);
  }
  else if(no==-1){
print(pq);
  }
}

return 0;
}
