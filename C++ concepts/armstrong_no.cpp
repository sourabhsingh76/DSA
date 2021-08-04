#include<iostream>
#include<math.h>
using namespace std;
 
int main(){                
    int n;
    cin>>n;
    int m=n;                //armstrong number
    int sum=0;                               // pow(a, b) is implemented as exp(b*ln(a))
                                             //Toh floating operations hoti hain
                                            // Toh answer = Ans + error where 1e-9 < error < 1e-9.
                                            // Agar error negative hai, toh int mein cast karte waqt
                                            //Floor ho jata hai
                                           //int(153 - 0.000001) = 152
 while(n>0){
     int lastdigit=n%10;
     int cube=pow(lastdigit,3);
sum+=cube;
n=n/10;
 }
 if(sum==m){
 cout<<"armstrong no."<<endl;
 }else{
 	cout<<"non armstrong no."<<endl;
 }
    return 0;
}