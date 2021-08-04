#include <bits/stdc++.h>
using namespace std;

int main(){
map<int,multiset<string>> m;
int n;
cin>>n;
while(n--){                              //qsn 1   //1st method
    int marks;
    string name;
    cin>>name>>marks;
m[marks].insert(name);
}
auto curr_it=--m.end();
while(true){
    auto &students=(*curr_it).second;
    int mrk=(*curr_it).first;
    for(auto &student : students){
        cout<<student<<" "<<mrk<<endl;
    }
        if(curr_it==m.begin()){
            break;
        }
      curr_it--;
}
   
	return 0;
}