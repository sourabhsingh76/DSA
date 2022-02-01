#include<bits/stdc++.h>
using namespace std;
//N < 100000

int main(){
int n;
cin>>n;
int ct=0;
while(n>0){
    n=n/2;
    ct++;
}

cout<<ct<<endl;
}

//O(1) + O(1) + O(1) + O(log(n)) + O(1) = O(log(n))