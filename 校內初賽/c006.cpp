#include<iostream>

using namespace std;

int main(){
	int n;
	int dx,dx2;
	int arr[20],brr[20];
	int sum,sum2;
	int tmp;
	
	while(cin>>n){
		sum=0;sum2=0;
		dx=0;dx2=0;
		for(int i=0;i<n;++i){
			cin>>tmp;
			if(sum<=sum2){
				sum+=tmp+10;
				arr[dx++]=i+1;
			}else{
				sum2+=tmp+10;
				brr[dx2++]=i+1;
			}
		}
		for(int i=0;i<dx;++i){
			cout<<arr[i]<<" ";
		}
		cout<<sum-10<<endl;
		for(int i=0;i<dx2;++i){
			cout<<brr[i]<<" ";
		}
		cout<<sum2-10<<"\n"<<endl;
	}
	return 0;
}

