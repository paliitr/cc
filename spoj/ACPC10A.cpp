#include<iostream>
using namespace std;

int a=0, b=0, c=0;

int main() {
	cin>>a>>b>>c;
	while(a||b||c){
		if(b==(a+c)/2){
			cout<<"AP "<<(c+c-b)<<endl;
		} else {
			cout<<"GP "<<(c*c/b)<<endl;
		}
		cin>>a>>b>>c;
	}
	return 0;
}