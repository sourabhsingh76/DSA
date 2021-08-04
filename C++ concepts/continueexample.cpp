#include<iostream>
using namespace std;

int main(){             //printing no. 1 to 100 except multiple of 3
    for(int i=1;i<=100;i++){          
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}