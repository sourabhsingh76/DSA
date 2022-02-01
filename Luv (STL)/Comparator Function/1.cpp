#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++){          //size of vector is defined in line 7, so we have to take input like this,we will not apply push_back concept 
cin>>a[i];
}
for(int i=0;i<n;i++){
   for(int j=i+1;j<n;j++){            //sorting in O(n^2)
    if(a[i]>a[j]){
        swap(a[i],a[j]);
    }
} 
}
for(int i=0;i<n;i++){
cout<<a[i]<<" ";
}
cout<<endl;

  return 0;
}