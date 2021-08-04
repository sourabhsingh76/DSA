#include <bits/stdc++.h>
using namespace std;

bool isSorted(int* a,int n){      //since a is storing address so we pass pointer here    //check if array is sorted or not using recursion
    if(n==1){
        return true;
    }
    return ((a[0]<a[1]) && (isSorted(a+1,n-1)));     //a+1 represents the address of 0th element of new array of size n-1
}
int main(){
int a[]={2,4,5,7,88};         //strictly increasing
if(isSorted(a,5)){      //a represents the address of 0th element
    cout<<"Yes"<<endl;
}else{
     cout<<"No"<<endl;
}

return 0;
}