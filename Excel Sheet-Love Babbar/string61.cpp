#include <bits/stdc++.h>
using namespace std;   //to Check if a string is a valid shuffle of two distinct strings

int main(){
string s1,s2,s3;     //order of string s1 should be same in the resultant string s3  
cin>>s1>>s2>>s3;     //order of string s2 should be same in the resultant string s3
int l1=s1.size();
int l2=s2.size();
int l3=s3.size();

if(l1+l2 != l3){
cout<<"No"<<endl;
return 0;
}

int i=0;
int j=0;
int k=0;
while(k<l3){                         //imp
    if(i<l1 && s1[i]==s3[k]){
        i++;
    }else if(j<l2 && s2[j]==s3[k]){
        j++;
    }else{
        break;
    }
    k++;
}

if(i<l1 || j<l2){
cout<<"no"<<endl;
}else{
    cout<<"Yes"<<endl;
}

    return 0;
}
