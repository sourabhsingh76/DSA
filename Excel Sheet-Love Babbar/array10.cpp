#include <bits/stdc++.h>
using namespace std;

void rearrange(int a[], int n){      //V.V.imp function    //partition process of quicksort
    int j=0;                         //moving all negative numbers to the left side of array    //order will not get maintain
    for(int i=0;i<n;i++){
    if(a[i]<0){                 //0 is pivot here
        if(i!=j){
            swap(a[i],a[j]);
        }
        j++;
    }
}
}

int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
rearrange(a,n);                  
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}

return 0;
}