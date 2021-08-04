#include <bits/stdc++.h>
using namespace std;

int multiply(int x,int y){          //multiply 2 numbers(including negative numbers) without using *
    if(y>x){
        return multiply(y,x);
    }
    if(y==0){
return 0;
    }
    return x+ multiply(x,y-1);
}

int main(){
int x,y;
cin>>x>>y;

if(x<0 && y>0){
  cout<<-1*(multiply(-1*x,y));  
}
else if(x>0 && y<0){
    cout<<-1*multiply(x,-1*y);
}
else if(x<0 && y<0){
    cout<<multiply(-1*x,-1*y);
}
else{
    cout<<multiply(x,y);
}

return 0;
}