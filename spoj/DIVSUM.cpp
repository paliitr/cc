#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		long long n;
		cin>>n;
		long long sum;
		for(long long i=0; i*i <= n; i++) {
			if(i*i ==  n) {
				sum = sum + i;
			} else if(i*i != n){
				if(n%i == 0) {
					sum = sum + i + (n/i);
				}	
			}
		}
		cout<<sum<<endl;
	}
}