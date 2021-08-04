#include <bits/stdc++.h>
using namespace std;

int binaryTodecimal(int n){
    int ans=0;
    int x=1;
    while(n>0){
        ans=ans + x*(n%10);           //binary to decimal number
        x=x*2;
        n=n/10;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<binaryTodecimal(n);
    return 0;
}