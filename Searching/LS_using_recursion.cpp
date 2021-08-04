#include<bits/stdc++.h>
using namespace std;

int search(int a[], int i, int n, int key){      //or we can pass int* a
    if(i==n){                                 //linear search using recursion
        return -1;
    }
    if(a[i]==key){
        return i;
    }
    return  search(a, i+1, n, key);       //here whatever is returning from remaining part is returned by current part
}

int main(){
 int n;
 cin>>n;
 int key;
 cin>>key;
 int a[n];
 for(int i=0;i<n;i++){
     cin>>a[i];
 }
cout<<search(a,0,n,key);
}