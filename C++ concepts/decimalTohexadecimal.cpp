#include <bits/stdc++.h>
using namespace std;

string decimalTohexadecimal(int n){
    string ans="";                       //imp
    int x=1;
    while(x<=n){
        x=x*16;
    }
    x=x/16;
    while(x>0){                               //decimal to hexadecimal number
        int lastdigit= n/x;
        n=n-lastdigit*x;
        x=x/16;

        if(lastdigit>=0 && lastdigit<=9){
            ans=ans+ to_string(lastdigit);                   //to_string is used to convert int to string
        }else{
            char c='A' + lastdigit - 10;                    //ex- if lastdigit is 14 then 'A' +14 -10 = 'A' +4 = 'E'
            ans.push_back(c);                             //push_back is used to push the char back in the ans 
        }

    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<decimalTohexadecimal(n);
    return 0;
}