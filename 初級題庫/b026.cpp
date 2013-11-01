#include<iostream>
using namespace std;

void test(int brr[100]){
	for(int i=0;i<100;++i){
		cout<<brr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int n;
	int arr[101];
	int brr[101];
	int max;
	while(cin>>n){
		
		brr[0]=0;
		for(int i=1;i<=n;++i){
			cin>>arr[i];
			if(arr[i]+brr[i-1]>0){
				brr[i]=arr[i]+brr[i-1];
			}else{
				brr[i]=0;
			}
		}
		max=0;
		for(int i=1;i<=n;++i){
			if(brr[i]>max)max=brr[i];
		}
		cout<<max<<endl;
	}
	return 0;
}

