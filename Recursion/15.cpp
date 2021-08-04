#include <bits/stdc++.h>
using namespace std;              

void subSequences(char in[], char out[],int i,int j){    //print all the subsequences of a string
    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<",";
        return;
    }

    out[j]=in[i];
    subSequences(in,out,i+1,j+1);     //yaad kr lo iss code ko
    subSequences(in,out,i+1,j);

}

int main(){           
char in[4];
cin>>in;

char out[4];
subSequences(in,out,0,0);

return 0;
}