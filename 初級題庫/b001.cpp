#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int n;
	int arr[10];
	while(cin>>n){
		for(int dx=0;dx<n;++dx){
			cin>>arr[dx];
		}
		for(--n;n>=0;--n){
			cout<<arr[n]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

