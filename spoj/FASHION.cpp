#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,i;
		cin>>n;
		int m[n];
		int w[n];
		for(i=0; i<n; i++){
			cin>>m[i];
		}
		for(i=0; i<n; i++){
			cin>>w[i];
		}

		sort(m, m + ((sizeof m) / (sizeof m[0])));
		sort(w, w + ((sizeof w) / (sizeof w[0])));
		
		int sum=0;
		for(i=0; i<n; i++) {
			sum = sum + m[i]*w[i];
		}
		cout<<sum<<endl;
	}
}