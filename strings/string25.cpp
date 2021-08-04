#include<bits/stdc++.h>
using namespace std;

int main(){
string s="53498626";
sort(s.begin(),s.end(),greater<int>());      //sorting in decreasing order
cout<<s<<endl;
  return 0;
}