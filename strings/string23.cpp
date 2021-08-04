#include<bits/stdc++.h>
using namespace std;

int main(){
 string s="gryrevbrwufvhewiufgqyu";       //2st method
transform(s.begin(), s.end(), s.begin(), ::toupper);   //fn to convert into upercase
cout<<s<<endl;

transform(s.begin(), s.end(), s.begin(), ::tolower);   //fn to convert into lowercase
cout<<s<<endl;
  return 0;
}