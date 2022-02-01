/* 
Given T test cases and array of size N. Print sum of array in each test case.
Constraints:
1 <= T<= 100000
1 <= N<= 100000
1 <= a[i]<= 1000
Sum of N over all test cases is < 10^7
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
int ct=0;
while(t--){
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum+=x;
        ct++;
    }
    cout<<sum<<endl;
}

}

//O(ct) = O(10^7)       //refer notes

