#include <bits/stdc++.h>
using namespace std;                        //Kahn's algorithm

template <typename T>          //O(V+E)        //see the video for more clarification
class Graph{                     //Topological sort using BFS        //Dependency Graph   
map<T,list<T>> m;                 //works only on directed acyclic graph(DAG)
                          
public:       //Topological sort is a simple algorithm that outputs linear ordering of vertices of the graph, such that for every edge(u->v) vertex u comes before vertex v in the ordering.

void addEdge(T u, T v, bool biDir=true){         //node with minimum dependency will print first
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

void bfsTopologicalSort(){
    queue<T> q;
    map<T,bool> visited;
    map<T,int> indegree;
    for(auto i : m){
        T node= i.first;
        visited[node]=false;
        indegree[node]=0;
    }

    for(auto i : m){
        T node= i.first;
      for(T v : m[node]){
          indegree[v]++;
      }
    }

    for(auto i : m){
    T node= i.first;
    if(indegree[node]==0){
        q.push(node);
    }
    }

    while(!q.empty()){
    T n=q.front();
    q.pop();
    cout<<n<<"-->";
    for(T neighbour : m[n]){
        indegree[neighbour]--;
    if(indegree[neighbour]==0){
        q.push(neighbour);
    }
    }
    }

}

};


int main(){
Graph<string> g;
g.addEdge("English","Programming Logic",false);
g.addEdge("Maths","Programming Logic",false);
g.addEdge("Programming Logic","HTML",false);
g.addEdge("Programming Logic","Python",false);
g.addEdge("Programming Logic","Java",false);
g.addEdge("Programming Logic","JS",false);
g.addEdge("Python","Web Dev",false);
g.addEdge("HTML","CSS",false);
g.addEdge("CSS","JS",false);
g.addEdge("JS","Web Dev",false);
g.addEdge("Java","Web Dev",false);
g.addEdge("Python","Web Dev",false);

g.print();
cout<<endl;

g.bfsTopologicalSort();

return 0;
}
