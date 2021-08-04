#include<bits/stdc++.h>
using namespace std;

int main(){     
vector<int> v={2,1,4,9,6};
for(int i=0;i<v.size();++i){
  cout<< v[i] <<" ";
}   
cout<<endl;
//vector<int> :: iterator it;
for(auto it=v.begin(); it!=v.end();++it){   //we have put auto here so no need to declare iterator 'it' in line 10
    cout<< (*it) <<" ";
}
cout<<endl;
for(auto &value : v){     //here in line 15 we can replace int with auto      //& is applied here to get the original values of v not the copied values
cout<<value<<" ";          //range based loops
}
cout<<endl;

vector<pair<int,int>> v_p = {{1,3},{5,3},{7,55}};        
for(auto &value : v_p){                                //here in line 21 we can replace pair<int,int> with auto    //auto keyword can dynamically determine the datatype of 'value' which is pair<int,int>        
  cout<<value.first <<" " << value.second<<endl;
}   
auto a=1.0;                //auto keyword can dynamically determine the datatype of 'a' which is float
cout<<a<<endl;         
                 
return 0;
}
