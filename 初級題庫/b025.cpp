#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int n,m;
	unsigned long long int sum;
	int dx;
	int tmp;
	while(cin>>n>>m){
		sum=1;
		dx=1;
		for(int i=n+1;i<=(n+m);++i){
			tmp=i;
			while(tmp%dx==0){
				tmp/=dx;
				if(dx!=m)++dx;
				else break;
			}
			sum*=tmp;
			while(sum%dx==0){
				sum/=dx;
				if(dx!=m)++dx;
				else break;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}

