#include<iostream>
using namespace std;
 

int sum(int x,int y){
    int q=x+y;
    return q;                      //add two no. using function 
}

int main(){                
   int x,y;
   cin>>x>>y;
   int p=sum(x,y);
   cout<<p<<endl;
    return 0;
}