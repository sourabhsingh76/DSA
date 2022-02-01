#include <bits/stdc++.h>
using namespace std;   

template <typename T>      //doubt    //Cycle Detection in directed graph using DFS
class Graph{                  //tough to visualise the recursive call    
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

bool isCyclicHelper(T node,map<T,bool> &visited,map<T,bool> &inStack){        //this recursive call samaj hi aa rhi
visited[node]=true;
inStack[node]=true;

for(T neighbour : m[node]){
    if((!visited[neighbour] && isCyclicHelper(neighbour,visited,inStack)) || inStack[neighbour]){   //inStack[neighbour] written here due to back edge
        return true;
    }
}
inStack[node]=false;
return false;
}

bool dfsCycleDetection(){
    map<T,bool> visited;
    map<T,bool> inStack;             //imp

    for(auto i : m){
        T node= i.first;
        if(!visited[node]){
            bool cyclePresent=isCyclicHelper(node,visited,inStack); 
            if(cyclePresent){
                return true;
            }
        }
    }
    return false;
}


};


int main(){
Graph<int> g;
g.addEdge(0,2,false);
g.addEdge(0,1,false);
g.addEdge(2,3,false);
g.addEdge(2,4,false);
g.addEdge(3,0,false);
g.addEdge(4,5,false);
g.addEdge(1,5,false);

g.print();
cout<<endl;

if(g.dfsCycleDetection()){
    cout<<"cycle present"<<endl;
}else{
    cout<<"cycle not present"<<endl;
}


return 0;
}

