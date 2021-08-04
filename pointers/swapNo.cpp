#include <iostream>
using namespace std;
 
void swap_pointer(int *a, int *b){
	int count=*a;
	*a=*b;
	*b=count;
	return;
}
 
int main(){
	int s1=10;
	int s2=20;
	int *a;
	int *b;
	a= &s1;
	b= &s2;	
	swap_pointer(&s1, &s2);           
	cout<<s1<<" "<<s2;
    return 0;
}