#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
 
int main(){
int courses=8;
int credit[]={3,4,2,2,3,3,2,2};      //we have taken the course credits in a certain order 
int grade[8];                         //so we have to take input of course grades accordingly
double prevCG=5.452;
 
for(int i=0;i<8;i++){
cin>>grade[i];
if(grade[i]<prevCG){
  grade[i]=0;         //s grade
  credit[i]=0;
}
}
 
int ans=0;
int sum=0;
 
for(int i=0;i<8;i++){
ans+=credit[i]*grade[i];
sum+=credit[i];
}
 
double sgpa= ans/(double)sum;
cout<<fixed<<setprecision(3);
cout<<sgpa<<endl;
 
double newCG= ((93*prevCG) + (sum*sgpa))/(93 + sum);
cout<<newCG<<endl;
 
return 0;
}