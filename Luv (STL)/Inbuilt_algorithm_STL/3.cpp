#include<bits/stdc++.h>
using namespace std;
 bool is_positive(int x){
     return x>0;
 }
int main(){
vector<int> v={2,-30,-5};
cout<<all_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;

cout<<all_of(v.begin(),v.end(),is_positive)<<endl;

cout<<any_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;

cout<<any_of(v.begin(),v.end(),[](int x){return x%2==0;})<<endl;

cout<<none_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;

  return 0;
}