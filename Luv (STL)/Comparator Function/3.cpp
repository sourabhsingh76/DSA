#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b){
    return a>b;              //decreasing order
}

int main(){
int n;
cin>>n;                           //sorting of a vector using comparator
vector<int> a(n);
for(int i=0;i<n;i++){            //we can sort in ascending or descending order just by making changes in comparator fn
cin>>a[i];
}
sort(a.begin(),a.end(),cmp);     //or we can put greater<int> () here in place of cmp if we want to sort the vector in decreasing order only

for(int i=0;i<n;i++){
cout<<a[i]<<" ";
}
cout<<endl;

  return 0;
}