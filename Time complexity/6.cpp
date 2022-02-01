#include<bits/stdc++.h>
using namespace std;
//N < 100000
//a[i] < 100000

int main(){
int n;
cin>>n;
int ct=0;
for(int i=0;i<n;i++){  
    for(int j=0;j<n;j++){
    ct++;            //counter ct will give the time complexity of code
}
}
cout<<ct;
}

//O(1) + O(1) + O(1) + O(ct) +O(1) = O(ct)