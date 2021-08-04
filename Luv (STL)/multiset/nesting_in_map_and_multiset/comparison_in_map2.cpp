#include <bits/stdc++.h>
using namespace std;

int main(){
map<set<int>,int> m;     //nesting in map
set<int> s1,s2;
s1={2,5,7};
s2={4,5};
cout<<(s1<s2)<<endl;        //it will return true(1) or false(0)     //comparison is done on first element of both s1 and s2 (if their first elements are equal then their second element will be compared)
     
	return 0;
}