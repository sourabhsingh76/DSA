#include<iostream>
using namespace std;

int main(){                 //half pyramid after 180* rotation
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
if(j<=n-i){
    cout<<" ";
}else{
    cout<<"*";
}
        }
        cout<<endl;
    }
    return 0;
}