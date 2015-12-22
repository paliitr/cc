#include<iostream>
#include<string>
using namespace std;

int main() {
	short t;
	cin>>t;
	while(t--) {
		int n, tot, count, sum=0;
		cin>>n>>tot;
		int a[n];
		for(int i=0; i<n; i++) {
			cin>>a[i];
		}
		for(int i=0; i<n; i++){ 
			sum += a[i];
			if(sum>=tot) {
				sum -= a[count];
				count++;
			}
		}
		if(sum<=tot) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;		
	}
	return 0;
}
