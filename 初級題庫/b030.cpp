#include<iostream>

using namespace std;

int main(){
	int n,m;
	int arr[101][1001];
	int hap[101];
	int len[101];
	while(cin>>n>>m){
		//input 
		for(int i=1;i<=n;++i){
			cin>>len[i]>>hap[i];
		}
		//init
		for(int i=0;i<=n;++i){
			for(int j=0;j<=m;++j){
				arr[i][j]=0;
			}
		}
		//DP
		for(int i=1;i<=n;++i){
			for(int j=1;j<=m;++j){
				if(j>=len[i])
					arr[i][j]=arr[i-1][j-len[i]]+hap[i];
				if(arr[i-1][j]>arr[i][j])
					arr[i][j]=arr[i-1][j];
			}			
		}
		//print
		cout<<arr[n][m]<<endl;
	}
	return 0;
}

