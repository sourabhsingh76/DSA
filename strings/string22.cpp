#include<bits/stdc++.h>
using namespace std;

int main(){
 string s="gryrevbrwufvhewiufgqyu";       //1st method
 for(int i=0;i<s.length();i++){
s[i]-=32;                //'a'-'A'=32(32 is the difference of ascii values of a and A)    //convert to uppercase
 }
 cout<<s<<endl;

for(int i=0;i<s.length();i++){
s[i]+=32;              //convert to lowercase
 }
cout<<s<<endl;

  return 0;
}