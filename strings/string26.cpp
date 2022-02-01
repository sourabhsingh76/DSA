#include<bits/stdc++.h>
using namespace std;

int main(){
string s="asdsfsssfd";          //max no. of same char in a string    //1st method
int arr[26];
for(int i=0;i<26;i++){          //V V imp
 arr[i]=0;
}
for(int i=0;i<s.length();i++){
  arr[s[i]-'a']++;
}
int mx=0;
char ans='a';
for(int i=0;i<26;i++){
if(arr[i]>mx){
    mx=arr[i];
    ans='a'+i;
}
}
cout<<mx<<" "<<ans<<endl;
return 0;
}