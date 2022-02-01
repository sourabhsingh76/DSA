#include <bits/stdc++.h>
using namespace std;         

template <typename T>  
class Graph{                       //single source shortest path (sssp)
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
    map<T,int> dist;
    for(auto i: m){
        dist[i.first]=INT_MAX;
    }

    q.push(src);
    dist[src]=0;
    while(!q.empty()){
        T node=q.front();
        cout<<node<<endl;
        q.pop();
        for(auto neighbour : m[node]){
            if(dist[neighbour]==INT_MAX){           //first visited
                q.push(neighbour);
                dist[neighbour]=dist[node]+1;
            }
        }
    }

for(auto i: dist){
    cout<<"dist of "<<i.first<<" from "<<src<<" is "<<i.second<<endl;
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
