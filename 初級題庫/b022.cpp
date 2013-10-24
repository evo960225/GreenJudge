#include<iostream>

using namespace std;

int main(){
	int n;
	long int arr[36];
	long int brr[36];
	arr[0]=0;arr[1]=1;
	brr[0]=1;brr[1]=1;
	for(int i=2;i<36;++i){
		arr[i]=arr[i-1]+arr[i-2];
		brr[i]=brr[i-1]+brr[i-2]+1;
	}
	while(cin>>n){
		cout<<arr[n]<<" ";
		cout<<brr[n]<<endl;
	}
	return 0;
}

