#include<bits/stdc++.h>
using namespace std;

int main(){  
int n;
cin>>n;                        //character array
  char arr[n+1];               //2st method
  cin>>arr;                     //given name is palindrome or not
bool check=1;
for(int i=0;i<n;i++){
    if(arr[i]!=arr[n-1-i]){
        check=0;
        break;
    }
}
if(check==true){
    cout<<"Yes"<<endl;
}else{
cout<<"No"<<endl;
}
  return 0;
}