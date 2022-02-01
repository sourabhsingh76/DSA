#include <bits/stdc++.h>
using namespace std;

int main(){            //print all the duplicates in the input string with their frequency
    string s;                    //O(N)
    getline(cin,s);
    unordered_map<char,int> m;
    for(int i=0;i<s.size();i++){
        m[s[i]]++;                 //imp
    }
     for(auto &p:m){
         if(p.second>1){
             cout<<p.first<<" "<<p.second<<endl;
         }
     }
    return 0;
}