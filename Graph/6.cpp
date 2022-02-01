#include <bits/stdc++.h>
using namespace std;         

template <typename T>     
class Graph{                                    //Depth First Search(DFS)
map<T,list<T>> m;           //It traverses graph 'Depth-first', starting from source, then picks one of the unvisited neighbours and visits it. 
                            //This process is repeated and traversal goes deeper into a branch until it reaches a vertex where it can't go further. 
                            //After this happens, DFS will explore other unvisited neighbours.

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


void dfsHelper(T node,map<T,bool> &visited){
cout<<node<<",";
visited[node]=true;
for(T neighbour : m[node]){
if(!visited[neighbour]){
    dfsHelper(neighbour,visited);
}
}
}

void dfs(T src){                                 
map<T,bool> visited;
dfsHelper(src,visited);
}

};


int main(){
Graph<int> g;
g.addEdge(0,1);
g.addEdge(1,2);
g.addEdge(0,4);
g.addEdge(2,4);
g.addEdge(2,3);
g.addEdge(3,4);
g.addEdge(3,5);

g.print();
cout<<endl;

g.dfs(0);

return 0;
}
