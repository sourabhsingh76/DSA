#include <bits/stdc++.h>
using namespace std;         

template <typename T>     //using template to generalise(for every data type)       //don't put semicolon here
class Graph{              //implementation of adjacency list of Graph using map
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

};


int main(){
Graph<string> g;
g.addEdge("Trump","Modi",true);
g.addEdge("Putin","Modi",false);
g.addEdge("Putin","Trump",false);
g.addEdge("Putin","Pope",false);
g.addEdge("Yogi","Modi",true);
g.addEdge("Yogi","Prabhu",false);
g.addEdge("Prabhu","Modi",false);

g.print();

cout<<endl;

Graph<int> g2;
g2.addEdge(1,2);
g2.addEdge(100,2);
g2.addEdge(100,3);

g2.print();
return 0;

}
