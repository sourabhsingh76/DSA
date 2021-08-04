#include<bits/stdc++.h>
using namespace std;

int main(){
map<string,int> m;       //given n strings, print unique strings in lexiographical order(increasing order) with their frequency 
int n;
cin>>n;
for(int i=0;i<n;i++){
    string s;
    cin>>s;
    m[s]++;    //initially m[s] will take 0 by default and then increment will occur     //m[s] is the "value" 
}
for(auto &p : m){
        cout<<p.first<<" "<<p.second<<endl;
}

  return 0;
}