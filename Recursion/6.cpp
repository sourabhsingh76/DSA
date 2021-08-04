#include <bits/stdc++.h>
using namespace std;

void dec(int n){     //print number till n in decreasing order
    if(n==0){
        return;
    }
    cout<<n<<" ";
    dec(n-1);
}


void inc(int n){      //print number till n in increasing order
    if(n==0){
        return;
    }
    inc(n-1);
    cout<<n<<" ";
}


int main(){
int n;
cin>>n;
dec(n);
cout<<endl;
inc(n);

return 0;
}