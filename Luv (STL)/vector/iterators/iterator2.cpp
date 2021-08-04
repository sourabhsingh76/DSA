#include<bits/stdc++.h>
using namespace std;

int main(){     
vector<int> v={2,1,4,9,6};
for(int i=0;i<v.size();++i){
  cout<< v[i] <<" ";
}   
cout<<endl;
vector<pair<int,int>> v_p = {{1,3},{5,3},{7,2}};        //vector of pair
vector<pair<int,int>> :: iterator it;              //declaring an iterator it of vector of pair
for(it=v_p.begin();it!=v_p.end();++it){
  cout<<(*it).first<<" "<<(*it).second<<endl;     //we can also use (it->first) in palce of (*it).first
}                     //*it will give the value of a element and since it is pair thats why we have applied .first and .second 
return 0;
}
