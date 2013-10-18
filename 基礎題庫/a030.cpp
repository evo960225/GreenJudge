#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int n,m;
	int sum;
	while(cin>>n>>m){
		sum=0; 
		if(n<=m){
			for(int i=n;i<=m;++i){
				sum+=i;
				cout<<i;
				if(i!=m) cout<<"+";
				else cout<<"=";
			}
		}else{
			for(int i=n;i>=m;--i){
				sum+=i;
				cout<<i;
				if(i!=m) cout<<"+";
				else cout<<"=";
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}

