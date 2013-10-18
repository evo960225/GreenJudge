#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	long long int a,b;
	while(cin>>a>>b){
		if(a>b){
			cout<<"A ";
		}else{
			cout<<"B ";
		}
		cout<<a+b<<endl;
	}
	return 0;
}

