#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t) {
		cout<<(t*(t+1)*((2*t)+1)/6)<<endl;
		cin>>t;
	}
	return 0;
}