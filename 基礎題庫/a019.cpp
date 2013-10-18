#include<iostream>

using namespace std;

int main(){
	int n,m;
	int ans;
	while(cin>>n>>m){
		ans=0;
		if(n==m){
			ans=50;
		}
		if(n%2==1){
			ans=100;
		}
		if(m==2 || m==5 || m==8){
			ans=200; 
		}
		cout<<ans<<endl;
	}
	return 0;
}

