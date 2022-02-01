#include <bits/stdc++.h>
using namespace std;   

template <typename T>          //Cycle Detection in undirected graph using BFS
class Graph{                     
map<T,list<T>> m;                 
                          
public:       

void addEdge(T u, T v, bool biDir=true){         
    m[u].push_back(v);
    if(biDir){
        m[v].push_back(u);
    }
}

void print(){
for(auto k : m){
    cout<<k.first<<"->";
    for(auto l : k.second){
    cout<<l<<",";
    }
    cout<<endl;
}
}


bool bfsCycleDetection(T src){
queue<T> q;
map<T,bool> visited;
map<T,T> parent;

q.push(src);
visited[src]=true;
parent[src]=src;

while(!q.empty()){
T node=q.front();
q.pop();
for(T neighbour : m[node]){
if(visited[neighbour]==true && parent[node]!=neighbour){
return true;
}
else if(!visited[neighbour]){
q.push(neighbour);
visited[neighbour]=true;
parent[neighbour]=node;
}
}
}

return false;
}

};


int main(){
Graph<int> g;
g.addEdge(1,2);
g.addEdge(1,4);
g.addEdge(4,3);
g.addEdge(2,3);

g.print();
cout<<endl;

if(g.bfsCycleDetection(1)){
    cout<<"cyclic"<<endl;
}else{
    cout<<"non cyclic"<<endl;
}

return 0;
}

