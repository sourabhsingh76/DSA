#include <bits/stdc++.h>
using namespace std;         

template <typename T>     //using template to generalise(for every data type)       //don't put semicolon here
class Graph{              //breadth first search - graph traversal method(iterative)
map<T,list<T>> m;

public:
void addEdge(T u, T v, bool biDir=true){
    m[u].push_back(v);
    if(biDir){
        m[v].push_back(u);
    }
}


void bfs(T src){
    queue<T> q;
    map<T,bool> visited;
    q.push(src);
    visited[src]=true;
    while(!q.empty()){
        T node=q.front();
        cout<<node<<",";
        q.pop();
        for(auto neighbour : m[node]){
            if(!visited[neighbour]){
                q.push(neighbour);
                visited[neighbour]=true;
            }
        }
    }

}



};


int main(){
Graph<int> g;
g.addEdge(0,1);
g.addEdge(1,2);
g.addEdge(0,4);
g.addEdge(2,4);
g.addEdge(2,3);
g.addEdge(3,5);
g.addEdge(3,4);

g.bfs(0);

return 0;

}
