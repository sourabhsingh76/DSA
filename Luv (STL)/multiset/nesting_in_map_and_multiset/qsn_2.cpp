#include <bits/stdc++.h>
using namespace std;

int main(){
map<int,multiset<string>> m;
int n;                                  //imp
cin>>n;
while(n--){                              //qsn 1   //2st method
    int marks;
    string name;
    cin>>name>>marks;
m[-1*marks].insert(name);            //multiply by -1
}
for(auto &marks_students_pr : m){
    auto &students=marks_students_pr.second;
    auto &mrk=marks_students_pr.first;
    for(auto &student : students){
        cout<<student<<" "<<-1*mrk<<endl;
    }
        
}
   
	return 0;
}