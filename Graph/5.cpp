#include <bits/stdc++.h>
using namespace std;       

template <typename T> 

class Graph{                      //snake and ladder problem (using single source shortest path (sssp))
map<T,list<T>> m;                 //see the video for understading 

public:
void addEdge(T u, T v, bool biDir=true){
    m[u].push_back(v);
    if(biDir){
        m[v].push_back(u);
    }
} 

int bfs(T src, T dest){
    queue<T> q;
    map<T,int> dist;
    map<T,T> parent;
    for(auto i: m){
        dist[i.first]=INT_MAX;
    }

    q.push(src);
    dist[src]=0;
    parent[src]=src;
    while(!q.empty()){
        T node=q.front();
        q.pop();
        for(auto neighbour : m[node]){
            if(dist[neighbour]==INT_MAX){            //first visited
                q.push(neighbour);
                dist[neighbour]=dist[node]+1;
                parent[neighbour]=node;
            }
        }
    }

T temp=dest;
while(temp!=src){
    cout<<temp<<"<--";
    temp=parent[temp];
}
cout<<src<<endl;

return dist[dest];

}

};


int main(){
Graph<int> g;
int board[50]={0};        //array has jump ad fall info.

board[2]=13;            //ladder   //jump
board[5]=2;
board[9]=18;
board[17]=-13;          //snake   //fall
board[18]=11;
board[20]=-14;
board[24]=-8;
board[25]=10;
board[32]=-2;
board[34]=-22;


for(int u=1;u<=36;u++){                  //starting from src 1
    for(int dice=1;dice<=6;dice++){
        int v= u + dice + board[u+dice];
        g.addEdge(u,v,false);
    }
}

cout<<"The shortest dist is "<<g.bfs(1,36)<<endl;

return 0;

}
