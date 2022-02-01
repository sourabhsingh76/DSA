#include<bits/stdc++.h>
using namespace std;


int main(){
int n;
cin>>n;
pair<int,int> p;
for(int i=0;i<n;i++){
cin>>p.first>>p.second;
}
for(auto &a : p){
    cout<<a.first<<" "<<a.second<<endl;
}

    return 0;

}
