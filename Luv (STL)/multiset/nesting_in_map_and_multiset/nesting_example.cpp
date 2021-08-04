#include <bits/stdc++.h>
using namespace std;

int main(){
map<pair<string,string>,vector<int>> m;
int n;
cin>>n;
for(int i=0;i<n;i++){
    string fn,ln;
    int count;
    cin>>fn>>ln>>count;
    for(int j=0;j<count;j++){
        int x;
        cin>>x;
        m[{fn,ln}].push_back(x);          // m[{fn,ln}] is a vector
    }
}
    for(auto &pr : m){
       auto &fullname= pr.first;        //key of map
       auto &marks= pr.second;          //value of map
       cout<<fullname.first<<" "<<fullname.second<<endl;
       cout<<marks.size()<<endl;
       for(auto &mk: marks){
        cout<<mk<<" ";
    }
    cout<<endl;
    }
   
	return 0;
}