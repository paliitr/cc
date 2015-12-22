#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cin>>c;
	while(c--){
		cin>>a>>b;
		if(a==b){
			if(a%2){
				a/=2;
				cout<<(4*a+1)<<endl;
			} else {
				a/=2;
				cout<<(4*a)<<endl;
			}
		} else if (a==b+2) {
			a-=2;
			if(a%2){
				a/=2;
				cout<<(4*a+3)<<endl;
			} else {
				a/=2;
				cout<<(4*a+2)<<endl;
			}
		} else {
			cout<<"No Number"<<endl;
		}
	}
}