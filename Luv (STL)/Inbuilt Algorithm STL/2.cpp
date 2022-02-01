#include<bits/stdc++.h>
using namespace std;

int main(){
cout<< [](int x){return x;}(2)<<endl;       //lambda function


cout<< [](int x, int y){return x+y;}(2,8)<<endl;

auto sum= [](int x, int y){return x+y;};
cout<<sum(3,4);

  return 0;
}