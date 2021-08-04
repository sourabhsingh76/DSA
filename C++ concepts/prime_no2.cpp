#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int n;
    cin>>n;              
    bool flag=0;                      //2nd method
    for(int i=2;i<=sqrt(n);i++){       //check upto square root of n for prime no.
        if(n%i==0){
            cout<<"non prime"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"prime"<<endl;
    }
    return 0;
}