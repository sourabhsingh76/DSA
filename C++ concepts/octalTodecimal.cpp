#include <bits/stdc++.h>
using namespace std;

int octalTodecimal(int n){
    int ans=0;
    int x=1;
    while(n>0){
        ans=ans + x*(n%10);
        x=x*8;
        n=n/10;                     //octal to decimal number
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<octalTodecimal(n);
    return 0;
}