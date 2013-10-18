#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int a;
	while(cin>>a){
		if(a>=75 && a<=90){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}

