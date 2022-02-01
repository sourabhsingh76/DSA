#include<bits/stdc++.h>
using namespace std;

int main(){                          //character array
  char arr[100]= "prince";          //or we can declare arr[n+1] which is arr[7]
  int i=0;
  while(arr[i]!='\0'){               // '\0' is a null character
    cout<<arr[i]<<" ";
i++;
  }
  return 0;

}