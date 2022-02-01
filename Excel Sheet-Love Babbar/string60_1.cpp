#include <bits/stdc++.h>
using namespace std;

bool rotation(string s1,string s2){
    if(s1.size()!=s2.size()){
        return false;
    }
queue<char> q1;      //A Program to check if strings are rotations of each other or not
for(int i=0;i<s1.size();i++){
q1.push(s1[i]);
}
queue<char> q2;
for(int i=0;i<s2.size();i++){
q2.push(s2[i]);
}
int k=s2.size();
while(k--){
    char a=q2.front();
    q2.pop();
    q2.push(a);
    if(q2==q1){                 //we can directly write q1==q2
        return true;
    }
}
return false;

}

int main(){
string s1,s2;
cin>>s1>>s2;
if(rotation(s1,s2)){
    cout<<"string are rotation of each other";
}else{
    cout<<"string are not rotation of each other";
}

    return 0;
}
