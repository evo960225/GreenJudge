#include<iostream>

using namespace std;

int main(){
	int n;
	unsigned long long int arr[91];
	arr[0]=1;arr[1]=1;
	for(int i=2;i<91;++i){
		arr[i]=arr[i-1]+arr[i-2];
	}
	
	while(cin>>n){
		cout<<arr[n]<<" "<<arr[arr[n]%n]<<endl;	
	}
	return 0;
}

