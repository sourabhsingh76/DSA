#include <bits/stdc++.h>
using namespace std;         

template <typename T>          //O(V+E)        //see the video for more clarification
class Graph{                //doubt      //Topological sort using DFS        //Dependency Graph   
map<T,list<T>> m;                 //works only on directed acyclic graph
                          
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


void dfsHelper(T node,map<T,bool> &visited,list<T> &ordering){
visited[node]=true;
for(T neighbour : m[node]){
if(!visited[neighbour]){
    dfsHelper(neighbour,visited,ordering);        //recursive call
} 
}
ordering.push_front(node);             //imp
}


void dfsTopologicalSort(){                                 
map<T,bool> visited;
list<T> ordering;
for(auto i : m){          //put auto here not T
    T node=i.first;
    if(!visited[node]){
    dfsHelper(node,visited,ordering);
}
}
for(T element : ordering){
    cout<<element<<"-->";
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
g.dfsTopologicalSort();

return 0;
}
