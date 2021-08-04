#include<iostream>
using namespace std;

int main(){
int pocketmoney=3000;
for(int date=1;date<=30;date++){   //code for go outside only on odd days of month and if pocketmoney become 0 then stop going out
if(date%2==0){
    continue;              //skip to the next iteration of the loop
}
if(pocketmoney==0){
    break;             //to terminate the loop
}
cout<< "Go out today"<<endl;
pocketmoney=pocketmoney-300;
}
    return 0;
}