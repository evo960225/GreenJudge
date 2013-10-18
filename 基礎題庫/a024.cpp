#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int n;
	int sum;
	while(cin>>n){
		sum=0;
		while(n!=0){
			sum+=n%10;
			n=(n>>1)/5;
		}
		cout<<sum<<endl;
	}
	return 0;
}

