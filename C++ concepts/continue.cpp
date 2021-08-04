#include<iostream>
using namespace std;

int main(){
for(int date=1;date<=30;date++){    //code for go outside only on odd days of month
if(date%2==0){
    continue;              //skip to the next iteration of the loop
}
cout<< "Go out today"<<endl;
}
    return 0;
}
