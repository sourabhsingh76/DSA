#include <bits/stdc++.h>
using namespace std;

int decimalTobinary(int n){
    int ans=0;
    int x=1;
    while(x<=n){
        x=x*2;
    }                        //take example of n=10 and x=8 then it will be easy to understand
    x=x/2;                                  //imp
    while(x>0){                            //decimal to binary number
        int lastdigit= n/x;
        ans=ans*10 + lastdigit;
        n=n-lastdigit*x;
        x=x/2;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<decimalTobinary(n);
    return 0;
}