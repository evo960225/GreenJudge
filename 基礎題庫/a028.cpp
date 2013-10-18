#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int n,m;
	int sum;
	while(cin>>n>>m){
		sum=1;
		for(;m>0;--m){
			sum*=n;
			--n;
		}
		cout<<sum<<endl;
	} 
	return 0;
}

