#include <bits/stdc++.h>
using namespace std;

int decimalTooctal(int n){
    int ans=0;                            //decimal to octal number
    int x=1;
    while(x<=n){
        x=x*8;
    }
    x=x/8;                      //imp
    while(x>0){                        //take example of n=100 and x=64 then it will be easy to understand
        int lastdigit= n/x;             
        ans=ans*10 + lastdigit;
        n=n-lastdigit*x;
        x=x/8;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<decimalTooctal(n);
    return 0;
}