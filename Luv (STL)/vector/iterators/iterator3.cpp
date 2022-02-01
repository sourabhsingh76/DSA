#include<bits/stdc++.h>
using namespace std;

int main(){     
vector<int> v={2,1,4,9,6};
for(int i=0;i<v.size();++i){               //change in only line 13 as compared to iterator2.cpp
  cout<< v[i] <<" ";
}   
cout<<endl;
vector<pair<int,int>> v_p = {{1,3},{5,3},{7,55}};        
vector<pair<int,int>> :: iterator it;             
for(it=v_p.begin();it!=v_p.end();++it){
  cout<<(it->first)<<" "<<(it->second)<<endl;    //when the iterator is pointing to a pair then we can use this syntax  
}                    
return 0;
}
