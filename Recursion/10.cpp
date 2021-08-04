#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char src, char dest, char helper){     //means moving n blocks from src to dest using helper
    if(n==0){
return;
    }
    towerOfHanoi(n-1, src, helper, dest);       //means moving n-1 blocks from src to helper using dest
    cout<<"Move disc "<<n<<" from "<<src<<" to "<<dest<<endl;
    towerOfHanoi(n-1, helper, dest, src);      //means moving n-1 blocks from helper to dest using src 
}

int main(){           //dry run of n=3 is not clear   //doubt
int n;
cin>>n;
towerOfHanoi(n,'A','C','B');

return 0;
}