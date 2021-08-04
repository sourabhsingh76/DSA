#include <bits/stdc++.h>
using namespace std;

void conversion(string s){          //printing spelling of digits of n(using recursion)
	if(s.length()==0){        //method 1 (thinked by me)
		return;
	}
	if(s[0]=='0'){
		cout<<"zero ";
	}
	else if(s[0]=='1'){
		cout<<"one ";
	}
	else if(s[0]=='2'){
		cout<<"two ";
	}
	else if(s[0]=='3'){
		cout<<"three ";
	}
	else if(s[0]=='4'){
		cout<<"four ";
	}
	else if(s[0]=='5'){
		cout<<"five ";
	}
	else if(s[0]=='6'){
		cout<<"six ";
	}
	else if(s[0]=='7'){
		cout<<"seven ";
	}
	else if(s[0]=='8'){
		cout<<"eight ";
	}
	else if(s[0]=='9'){
		cout<<"nine ";
	}
	return conversion(s.substr(1));
}

int main(){           
int n;
cin>>n;
string s= to_string(n);
conversion(s);

return 0;
}