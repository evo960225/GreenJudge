#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	
	int n;
	int arr[20];
	int brr[20];
	double avga,avgb;
	bool isno;
	string tmp;
	
	while(cin>>n){
		avga=0;
		avgb=0;
		for(int i=0;i<n;++i)
			cin>>arr[i];
		for(int i=0;i<n;++i)
			cin>>brr[i];
		for(int i=0;i<n;++i){
			avga+=arr[i];
			avgb+=brr[i];
		}
		avga/=n;
		avgb/=n;
		isno=true;
		for(int i=0;i<n;++i){
			if(arr[i]>=avga && brr[i]>=avgb){
				cout<<i+1<<" ";
				isno=false;
			}
		}
		if(isno) cout<<"NO";
		cout<<"\n"<<endl;
	}
	return 0;
}

