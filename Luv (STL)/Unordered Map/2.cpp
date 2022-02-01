#include<bits/stdc++.h>
using namespace std;

int main(){      //given n strings and q queries, in each query you are given a string,print frequency of that string
unordered_map<string,int> m;       //order is not mattering in this qsn
int n;
cin>>n;
for(int i=0;i<n;i++){
    string s;
    cin>>s;
    m[s]++;    //initially m[s] will take 0 by default and then increment will occur     //m[s] is the "value" 
}
int q;
cin>>q;
while(q--){
    string s;
    cin>>s;
    cout<<m[s]<<endl;
}

  return 0;
}