#include<iostream>
using namespace std;

int main(){
	int n;
	short int mon[7]={0,20,16,12,10,5,1};
	int arr[7][101]; 
	
	while(cin>>n){
		for(int i=0;i<7;++i){
			arr[i][0]=0;
			for(int j=1;j<101;++j){
				arr[i][j]=-1;
			}
		}
		for(int i=1;i<7;++i){
			for(int j=0;j<=n;++j){
				
				int tmp1 = 1000,tmp2;
				
				if(j>=mon[i]){
					if(arr[i][j-mon[i]]!=-1){
						tmp1=arr[i][j-mon[i]]+1;
						arr[i][j]=arr[i][j-mon[i]]+1;
					}
				}
				
				if(arr[i-1][j]!=-1){
					tmp2=arr[i-1][j];
					if(tmp1>tmp2)arr[i][j]=tmp2;
				}
			}
		}
		
		cout<<arr[6][n]<<endl;
	}
	return 0;
}

