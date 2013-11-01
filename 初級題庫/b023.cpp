#include<iostream>

using namespace std;

int f(int n,char a,char b,char c){
	if(n!=0){
		f(n-1,a,c,b);
			cout<<"Ring "<<n<<" from "<<a<<" to "<<c<<endl;
		f(n-1,b,a,c);
	}
}

int main(){
	int n;
	while(cin>>n){
		f(n,'1','2','3');
	}
	return 0;
}

