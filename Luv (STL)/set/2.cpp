#include<bits/stdc++.h>
using namespace std;

int main(){
set<string> s;
int n;                //given n strings, print unique strings in lexiographical order(increasing order)
cin>>n;
while(n--){
    string a;
    cin>>a;
    s.insert(a);
}
for(auto &p : s){
    cout<<p<<endl;
}

  return 0;
}