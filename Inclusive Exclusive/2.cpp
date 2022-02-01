#include<bits/stdc++.h>
using namespace std;
 
 int gcd(int a, int b){          //gcd stands for greatest common divisor (or hcf)
while(b!=0){
  int rem=a%b;                    //a%b=rem
  a=b;                            //gcd of a and b are same as gcd of b and rem
  b=rem;
}
return a;
 }


 
int main(){
 int a,b;
 cin>>a>>b;
 cout<<gcd(a,b);
    return 0;
  }
