#include<iostream>

using namespace std;

int main(){
	bool arr[20];
	int n,m,tmp;
	while(cin>>n>>m){
		for(int i=0;i<n;++i){
			arr[i]=true;	
		} 
		for(;m>0;--m){
			cin>>tmp;
			arr[tmp-1]=false;
		}
		for(int i=0;i<n;++i){
			if(arr[i])cout<<i+1<<" "	;
		} 
		cout<<endl;
	} 
	return 0;
}

