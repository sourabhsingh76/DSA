#include <bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq;    //priority queue will print elements in dec order by default    //printing max heap with the help of priority queue
    int a[6]={3,4,11,5,1,55};
    for(int i=0;i<6;i++){
        pq.push(a[i]);
    }

    while(!pq.empty()){
        cout<<pq.top()<<",";    
        pq.pop();
    }
    return 0;
}
