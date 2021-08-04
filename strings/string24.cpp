#include<bits/stdc++.h>
using namespace std;

int main(){
 string s="sourABH";       //when string is a combination of both lowercase and uppercase
transform(s.begin(), s.end(), s.begin(), ::toupper);   //fn to convert into upercase
cout<<s<<endl;

  return 0;
}