#include<bits/stdc++.h>
using namespace std;

void sorting(int a[], int n){          //or we can pass int* a       //bubble sort using recursion
    if(n==1){
        return;
    }
    for(int i=0;i<=n-2;i++){
        if(a[i]>a[i+1]){
            swap(a[i],a[i+1]);
        }
    }
    return sorting(a, n-1);
}
int main(){
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++){
     cin>>a[i];
 }
sorting(a,n);
for(int i=0;i<n;i++){
     cout<<a[i]<<" ";
 }
}