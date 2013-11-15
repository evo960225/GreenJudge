#include<iostream>

using namespace std;

int main(){
	int n;
	int tmp;
	long long int sum;
	int arr[10000];
	while(cin>>n){
		for(int i=0;i<n;++i){
			cin>>arr[i];
		}
		for(int i=0;i<n-1;++i){
			for(int j=0;j<n-1-i;++j){
				if(arr[j]>arr[j+1]){
					tmp=arr[j];arr[j]=arr[j+1];arr[j+1]=tmp;
				}
			}
		}
		sum=0;
		for(int i=0;i<n;++i){
			sum+=arr[i]*(n-i-1);
		}
		cout<<sum*100<<endl;
	}
	return 0;
}

