#include<iostream>
using namespace std;
 
bool pythagoras(int a,int b,int c){
    int x= max(a,max(b,c));                 //imp
    int y,z;
    if(x==a){
    y=b;
    z=c;
    } else if(x==b){
y=a;
z=c;
    }else if(x==c){
        y=a;
        z=b;
    }                               //to check pythagoras triplet
    if(x*x == y*y + z*z){                  //imp
        return true;
    }else{
        return false;
    }
}
                           
int main(){      
int a,b,c;
cin>>a>>b>>c;
if(pythagoras(a,b,c)){
    cout<<"pythagoras triplet ";
}else{
     cout<<"non pythagoras triplet ";
}
 
    return 0;
}