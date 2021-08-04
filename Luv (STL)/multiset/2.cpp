#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;                       //hackerearth qsn
	while(t--){
multiset<long long> m;       //Ai is 10^10 and range of int is 10^9 thats why we have used long long
int n,k;
cin>>n>>k;
while(n--){
	long long x;
	cin>>x;
	m.insert(x);
}
long long sum=0;
for(int i=0;i<k;i++){
    auto it_mx= (--m.end());  //always put datatype of iterator as auto //m.end() is next to last element that why we have put --
    long long a=*it_mx;
    sum+=a;
    m.erase(it_mx);      //pass iterator not a
    m.insert(a/2);
}
cout<<sum<<endl;

}
	return 0;
}