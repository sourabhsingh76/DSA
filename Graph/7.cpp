#include <bits/stdc++.h>
using namespace std;         

template <typename T>     
class Graph{                    //Use of DFS to print 2 components of graph              
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


void dfsHelper(T node,map<T,bool> &visited){
cout<<node<<",";
visited[node]=true;
for(T neighbour : m[node]){
if(!visited[neighbour]){
    dfsHelper(neighbour,visited);        //recursive call
} 
}
}

void dfs(T src){                                 
map<T,bool> visited;
int component=1;
dfsHelper(src,visited);
cout<<endl;

for(auto i : m){          //put auto here not T
    T node=i.first;
    if(!visited[node]){
    dfsHelper(node,visited);
    component++;
}
}
cout<<endl;
cout<<"The graph has "<< component <<" components";

}

};


int main(){
Graph<string> g;
g.addEdge("Amritsar","Jaipur");         //This graph has 2 components
g.addEdge("Amritsar","Delhi"); 
g.addEdge("Delhi","Jaipur");
g.addEdge("Mumbai","Jaipur");
g.addEdge("Mumbai","Bhopal");
g.addEdge("Delhi","Bhopal");
g.addEdge("Mumbai","Bangalore");
g.addEdge("Agra","Delhi");
g.addEdge("Andaman","Nicobar");
g.print();
cout<<endl;

g.dfs("Amritsar");

return 0;
}
