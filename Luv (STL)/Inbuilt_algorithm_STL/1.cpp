#include<bits/stdc++.h>
using namespace std;

int main(){             //we can use all these fn in case of array also-just replace v.begin() with v and v.end() with v+n
int n;                   //while using these fn in array ,these fn always return pointer not iterator
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++){           //fn from min_element() to find() has T.C. O(n) 
    cin>>v[i];                  //in case of vector and array, count and find has TC O(n) but in case of map and set , these have TC of O(log(n))
}
int min= *min_element(v.begin(),v.end());       //this fn returns the pointer thats why we have put *
cout<<min<<endl;

int min1= *min_element(v.begin()+3,v.end());       
cout<<min1<<endl;

auto it= min_element(v.begin(),v.end());      //or we can take iterator instead of pointer in case of vector
cout<<*it<<endl;

int max= *max_element(v.begin(),v.end());       
cout<<max<<endl;

int sum= accumulate(v.begin(),v.end(),0);   //initialise sum with 0
 cout<<sum<<endl;

 int ct= count(v.begin(),v.end(),6);      
 cout<<ct<<endl;

 int element= *find(v.begin(),v.end(),6);      //this fn returns the pointer thats why we have put *
 cout<<element<<endl;

 auto it1= find(v.begin(),v.end(),6);  
 if(it1 != v.end()){
     cout<<*it1<<endl;
 }else{
     cout<<"element not found"<<endl;
 }
reverse(v.begin(),v.end());
for(auto &p : v){
    cout<<p<<" ";
}
cout<<endl;
string s="shivam";
reverse(s.begin()+1,s.end());
cout<<s<<endl;

   return 0;
}