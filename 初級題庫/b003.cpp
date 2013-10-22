#include<iostream>

using namespace std;

int main(){
	int n,m;
	int arr[10];
	int a,b;
	while(cin>>n){
		a=0;b=0;
		for(int i=0;i<n;++i){
			cin>>arr[i];
		}
		cin>>m;
		for(int i=0;i<n;++i){
			if(arr[i]>m)
				++a;
			else if(arr[i]<m) 
				++b;
		}
		cout<<a<<" "<<b<<endl;
	}
	
	return 0;
}

