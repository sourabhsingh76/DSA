#include <bits/stdc++.h>
using namespace std;

void rotation(string s1,string s2){
    if(s1.size()!=s2.size()){
        cout<<"string are not rotation of each other";
    }
string temp=s1+s1;       //concatenation meaning adding 
if(temp.find(s2)!= string::npos){     //remember this syntax    //it will return true if the s2 is a substring of temp
    cout<<"string are rotation of each other";
}else{
     cout<<"string are not rotation of each other";
}

}

int main(){
string s1,s2;
cin>>s1>>s2;
rotation(s1,s2);

    return 0;
}
