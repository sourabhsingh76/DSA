/* 
Given T test cases and array of size N. Print sum of array in each test case.
Constraints:
1 <= T<= 1000
1 <= N<= 1000
1 <= a[i]<= 1000
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum+=x;
    }
    cout<<sum<<endl;
}

}

//O(T*N) = O(N^2)    (coz value of T,N are same)

