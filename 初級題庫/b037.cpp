#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int l;
	int m;
	int arr[10];
	int dx;
	while(cin>>l>>m){
		for(int i=0;i<l;++i){
			arr[i]=0;
		}
		for(;;){
			//print
			for(int i=0;i<l;++i){
				cout<<arr[i];
			}
			cout<<endl;
			//proceesing
			dx=l-1;
			++arr[dx];
			while(arr[dx]>m){
				arr[dx]=0;
				--dx;
				if(dx<0)break;
				++arr[dx];
			}
			if(dx<0)break;
		}
	}
	return 0;
}

