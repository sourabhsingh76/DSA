#include <bits/stdc++.h>
using namespace std;

int ways(int n){       
if(n==1 || n==2 || n==3){     //tiling problem (Count number of ways to fill a ā4 x nā grid using ā4 x 1ā tiles)
    return 1;
}

if(n==4){
    return 2;
}

    return ways(n-1)+ways(n-4);   //doubt //why have we added these two

}

int main(){           
int n;
cin>>n;
cout<<ways(n);

return 0;
}