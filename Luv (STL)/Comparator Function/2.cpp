#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.first != b.first){
        return a.first < b.first;           //increasing order
    }
    return a.second > b.second;               //decreasing order
} 

int main(){
int n;
cin>>n;                           //sorting of a vector of pair using comparator
vector<pair<int,int>> a(n);
for(int i=0;i<n;i++){           //we can sort in ascending or descending order just by making changes in comparator fn
cin>>a[i].first>>a[i].second;   //we have defined size of vector of pair in line 14 so we dont need to write v[i]={3,5} , we can directly take input
}
sort(a.begin(),a.end(),cmp);           //or we can put greater<pair<int,int>> () here in place of cmp if we want to sort the pair in decreasing order only

for(int i=0;i<n;i++){
cout<<a[i].first<<" "<<a[i].second<<endl;
}

  return 0;
}