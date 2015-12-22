#include<iostream>
#include<string>
using namespace std;

int main() {
	short t;
	cin>>t;
	while(t--) {
		string s,rev="";
		cin>>s;
		short len = s.length()-1;
		for(short i=len; i>=0; --i) {
			rev += s[i];
		}
		cout<<rev<<endl;
		rev = "";
	}
	return 0;
}
