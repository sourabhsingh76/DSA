#include<bits/stdc++.h>
using namespace std;

int main(){      //given n strings and q queries, in each query you are given a string,print yes if string is present else print no
unordered_set<string> s;       //order is not mattering in this qsn
int n;
cin>>n;
for(int i=0;i<n;i++){
    string str;
    cin>>str;
    s.insert(str);     
}
int q;
cin>>q;
while(q--){
    string str;
    cin>>str;
 if(s.find(str)==s.end()){
     cout<<"No"<<endl;
 }else{
     cout<<"Yes"<<endl;
 }
}

  return 0;
}