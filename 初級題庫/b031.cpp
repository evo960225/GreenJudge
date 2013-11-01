#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

int main(){
	int n,m;
	int l[100],s[100];
	int arr[100][1001];
	
	while(cin>>n>>m){
		for(int i=0;i<n;++i)
			cin>>l[i]>>s[i];
			
		memset(arr,0,sizeof(int)*100*1000);	
		
		for(int i=0;i<n;++i){
			for(int j=0;j<=m;++j){
				if(i!=0){
					arr[i][j]=arr[i-1][j];
				}
				if(j>=l[i] && arr[i][j-l[i]]+s[i]>arr[i][j]){
					arr[i][j]=arr[i][j-l[i]]+s[i];
				}
			}
		}
		
		
			cout<<arr[n-1][m]<<endl;
		
	}
	
	return 0;
}

