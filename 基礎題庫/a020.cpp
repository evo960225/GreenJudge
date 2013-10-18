#include<iostream>

using namespace std;

int main(){
	int n,m;
	int sum;
	while(cin>>n>>m){
		sum=0;
		if(n%2==1){
			sum+=100;
		}
		if(m==2 || m==5 || m==8){
			sum+=200;
		}
		if(n==m){
			sum+=50;	
		}
		cout<<sum<<endl;
	}
	return 0;
}

