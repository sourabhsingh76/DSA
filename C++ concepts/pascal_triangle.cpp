#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int main(){                          //pascal triangle using nCr
    int n;
    cin>>n;
    for(int i=0;i<n;i++){            //start from i=0
        for(int j=0;j<=i;j++){
int ans=factorial(i)/(factorial(j)*factorial(i-j));
cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}