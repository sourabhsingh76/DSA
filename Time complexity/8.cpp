#include<bits/stdc++.h>
using namespace std;
//N < 100000

int main(){
int n;
cin>>n;
int ct=0;
for(int i=0;i<=n;i++){
    for(int j=0;j<i;j++){
    ct++;
}
}

}

//O(1) + O(1) + O(1) + O((n*(n+1))/2) = O(n^2)        //refer notes