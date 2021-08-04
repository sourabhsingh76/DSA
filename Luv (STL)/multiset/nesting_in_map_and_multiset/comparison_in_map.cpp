#include <bits/stdc++.h>
using namespace std;

int main(){
map<pair<int,int>,int> m;     //nesting in map
pair<int,int> p1,p2,p3;
p1={2,5};
p2={4,5};
p3={2,4};
cout<<(p1<p2)<<endl;        //it will return true(1) or false(0)     //comparison is done on first element of both p1 and p2 (if their first elements are equal then their second element will be compared)
cout<<(p1<p3)<<endl; 
cout<<(p1>p2)<<endl;       
	return 0;
}