/*input
2
5.5
5x
 */
#include<iostream>
using namespace std;

long long int gcd(long long int a, long long int b) {
	return b == 0 ? a:gcd(b, a%b);
}

int main() {
	int t;
	long double b;
	cin>>t;
	while(t--) {
		cin>>b;
		long long int c = (long long int) (b*10000);
		cout<<(10000/gcd(c, 10000))<<endl;
	}
}