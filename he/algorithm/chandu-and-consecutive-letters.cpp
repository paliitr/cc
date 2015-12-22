#include<iostream>
#include<string>
using namespace std;

int main() {
	short t;
	cin>>t;
	while(t--) {
		string s,fin;
		cin>>s;
		fin += s[0];
		for(short i=1; i<s.length(); ++i) {
			if(s[i] != s[i-1]) {
				fin += s[i];
			}
		}
		cout<<fin<<endl;
		fin = "";
	}
	return 0;
}
