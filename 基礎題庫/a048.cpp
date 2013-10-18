#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		for(int i=0;i<n;++i){
			for(int j=0;j<n-i-1;++j){
				cout<<"_";
			}
			for(int j=0;j<i*2+1;++j){
				cout<<i+1;
			}
			cout<<endl;
		}
	}
	return 0;
}

