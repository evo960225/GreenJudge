#include<iostream>

using namespace std;

int main(){
	int arr[6][1001];
	int mon[6]={0,2,5,10,20,25};
	int n;
	
	while(cin>>n){
		for(int i=0;i<6;++i){
			arr[i][0]=1;
			for(int j=1;j<=n;++j){
				arr[i][j]=0; 
			} 
		}
		for(int i=1;i<6;++i){
			for(int j=1;j<=n;++j){
				arr[i][j]=arr[i-1][j];
				if(j>=mon[i]){
					arr[i][j]+=arr[i][j-mon[i]];
				}
			}
		}
		cout<<arr[5][n]<<endl;
	}
	return 0;
}

