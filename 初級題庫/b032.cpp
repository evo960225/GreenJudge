#include<iostream>

using namespace std;

int main(){
	int n;
	int tmp[100];
	int arr[100];
	int max;
	int sum;
	while(cin>>n){
		max=0;
		sum=0;
		
		for(int i=0;i<n;++i){
			cin>>arr[i];
			tmp[i]=0;
			for(int j=0;j<i;++j){
				if(arr[i]>arr[j] && tmp[j]>=tmp[i])
					tmp[i]=tmp[j]+1;
			} 	
		}
		
		for(int i=0;i<n;++i){
			if(tmp[i]>max) max=tmp[i];
		} 

		cout<<max+1<<endl;
	} 
	return 0;
}

