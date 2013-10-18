#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int h,m;
	while(cin>>h>>m){
		m=h*60+m;
		if(m>=860 && m<=1000){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}

