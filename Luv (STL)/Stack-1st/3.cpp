#include<bits/stdc++.h>
using namespace std;

vector<int> NGE(vector<int> v){                 //O(n);
 stack<int> stk;                  //refer notes
 vector<int> nge(v.size());            //next greater element
 for(int i=0;i<v.size();i++){
     while(!stk.empty() && v[i]>v[stk.top()]){
nge[stk.top()]=i;          //in nge vector we are storing indexes and in stack also
stk.pop();
     }
stk.push(i);                          
 }
 while(!stk.empty()){      
     nge[stk.top()]=-1;
     stk.pop();
 }
     return nge;
 }


int main(){
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
 vector<int> nge=NGE(v);
 for(int i=0;i<v.size();i++){
  cout<<v[i]<<" "<<(nge[i]==-1 ? -1 : v[nge[i]])<<endl;
     }
  return 0;
}