#include <bits/stdc++.h>
using namespace std;   

template <typename T>     
class Graph{                                 //Dijkstra's algorithm 
unordered_map<T, list<pair<T,int>>> m;             //O(ElogV)     
                          
public:                                                //imp
void addEdge(T u, T v, int dist, bool biDir=true){         
    m[u].push_back(make_pair(v,dist));            //don't use .insert here 
    if(biDir){
        m[v].push_back(make_pair(u,dist));        //don't use .insert here 
    }
}

void print(){
for(auto j : m){
    cout<<j.first<<"->";
    for(auto l : j.second){
    cout<<"("<<l.first<<","<<l.second<<")";
    }
    cout<<endl;
}
}


void dijkstraSSSP(T src){
    unordered_map<T,int> dist;
    for(auto j:m){
        dist[j.first]=INT_MAX;
    }
    set<pair<int,T>> s;               //sorting according to distance
    dist[src]=0;
    s.insert(make_pair(0,src));

    while(!s.empty()){
        auto p= *(s.begin());
        T node=p.second;
        int nodeDist= p.first;
        s.erase(s.begin());

        for(auto childPair: m[node]){
            if(nodeDist + childPair.second < dist[childPair.first]){
                T dest=childPair.first;
                auto f=s.find(make_pair(dist[dest],dest));
                if(f!=s.end()){                       
                    s.erase(f);               //first remove from set
                }
                dist[dest]= nodeDist +childPair.second;         //update it in unordered map
                s.insert(make_pair(dist[dest],dest));           //then insert in set
            }
        }
    }

for(auto d: dist){
    cout<<d.first<<" is located at a distance of "<<d.second<<endl;
}
}

};


int main(){
Graph<int> g;
g.addEdge(1,2,1);
g.addEdge(1,3,4);
g.addEdge(2,3,1);
g.addEdge(3,4,2);
g.addEdge(1,4,7);
g.print();
g.dijkstraSSSP(1);

cout<<endl;

Graph<string> india;
india.addEdge("Amritsar","Delhi",1);
india.addEdge("Amritsar","Jaipur", 4);
india.addEdge("Jaipur","Delhi", 2);
india.addEdge ("Jaipur","Mumbai",8);
india.addEdge("Bhopal","Agra", 2);
india.addEdge ("Mumbai", "Bhopal", 3);
india.addEdge("Agra","Delhi",1);
india.print();
india.dijkstraSSSP("Amritsar");


return 0;
}


