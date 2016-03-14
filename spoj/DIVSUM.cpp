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
		long long root = (int) sqrt(n);
		for(long long i=0; i <= root; i++) {
			if(n%i == 0) {
				if(i ==  root) {
					sum = sum + i;
				} else if(i != root){
					sum = sum + i + (n/i);
				}	
			}
		}
		cout<<sum<<endl;
	}
}