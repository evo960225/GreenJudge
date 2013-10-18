#include<iostream>

using namespace std;

int main(){
	int a,b,c,d;
	while(cin>>a){
		b=a+3;
		c=a*2-5;
		d=c/10*10+b%10;
		cout<<d<<endl;
	}
	return 0;
}

