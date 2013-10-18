#include<iostream>

using namespace std;

int main(){
	int n,m;
	while(cin>>n>>m){
		for(int i=n;i<=m;++i){
			cout<<i;
			if(i!=m)cout<<"+";
			else cout<<"="; 
		}
		cout<<(n+m)*(m-n+1)/2<<endl;
	}
	return 0;
}

