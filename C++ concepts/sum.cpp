#include<iostream>
using namespace std;

int sum(int n){
    int ans=(n*(n+1))/2;
    return ans;
}

int main(){        //sum of n number using function 
int n;
cin>>n;
cout<<sum(n);

    return 0;
}