#include<iostream>

using namespace std;

int main(){
	int n,m;
	int day;
	while(cin>>n>>m){
		for(day=0; n<m; ++day){
			n*=3;
		}
		cout<<day<<endl;
	}
	return 0;
}

