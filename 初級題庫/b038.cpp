#include<iostream>
#include<cstring>
using namespace std;

void f(char arr[],bool tmp[],int n,int m = 0){
	if(n!=m){
		for(int i=0;i<n;++i){
			if(tmp[i]){
				arr[m]=i+48+1;
				tmp[i]=false;
				f(arr,tmp,n,m+1);
				arr[m]='0';
				tmp[i]=true;
			}
		}	
	}else{
		cout<<arr<<endl;
	}
}

int main(){
	
	char arr[9];
	bool tmp[8];
	int n;
	
	while(cin>>n){
		memset(tmp,true,sizeof(bool)*n);
		memset(arr,'0',sizeof(char)*n);
		arr[n]=0;
		f(arr,tmp,n);
	}
	return 0;
}

