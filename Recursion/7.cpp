#include <bits/stdc++.h>
using namespace std;

int firstocc(int a[], int n, int i, int key){
    if(i==n){                    //first and last occurence of a number in array(means printing index of that number)
        return -1;                           
    }
    if(a[i]==key){
        return i;
    }
    return firstocc(a, n, i+1,key);
}

int lastocc(int a[], int n, int i, int key){
    if(i==n){
        return -1;
    }
  int restarray= lastocc(a, n, i+1, key);
    if(restarray!=-1){        //imp
        return restarray;
    }
if(a[i]==key){
    return i;
}
return -1;
}

int main(){
int a[]={2,4,3,6,3,2,4,5};
cout<<firstocc(a,8,0,4);
cout<<endl;
cout<<lastocc(a,8,0,4);

return 0;
}