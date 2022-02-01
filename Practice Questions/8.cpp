#include <bits/stdc++.h>
using namespace std;

long long decimal(int x,int k){
int n=0;
long long sum=0;
while(x>0){
sum=sum + (x%10)*pow(k,n);
n++;
x=x/10;
}
return sum;
}

int main(){
int k,a,b;
cin>>k>>a>>b;
long long p= decimal(a,k)*decimal(b,k);
cout<<p<<endl;
return 0;
}
