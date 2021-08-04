#include<iostream>
using namespace std;

int main(){
    int n;                   //code to find whether a number is prime or not
    cin>>n;          
    int i;                   //declare i outside for loop if u want to use it outside for loop
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"Non prime"<<endl;
            break;
        }
    }
    if(i==n){                    //this is done to find whether the for loop run completely or the loop stops due to break
        cout<<"prime"<<endl;
    }
    return 0;
}