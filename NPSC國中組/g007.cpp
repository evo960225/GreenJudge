#include<iostream>

using namespace std;

int main(){
	int arr[41];
	int n,m;
	int tmp;
	int min;
	
	for(;;){
		cin>>n;
		if(n==0)break;
		for(int i=0;i<41;++i){
			arr[i]=0;
		}
		for(;n>0;--n){
			cin>>m;
			for(int i=0;i<m;++i){
				cin>>tmp;
				++arr[tmp-1];
			}
		}
		min=0x7fffffff;
		for(int i=0;i<41;++i){
			if(arr[i]<min)min=arr[i];
		}
		cout<<min<<endl;
	}
	return 0;
}

