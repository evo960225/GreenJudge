#include<iostream>

using namespace std;

int main(){
	int x,y;
	int arr[102][102];
	int max;
	
	while(cin>>x>>y){
		max=0;
		for(int i=0;i<=x+1;++i){
			arr[i][0]=-1;
			arr[i][y+1]=-1;
		}
		for(int j=0;j<=y+1;++j){
			arr[0][j]=-1;
			arr[x+1][j]=-1;
		}	
		
		for(int i=1;i<=x;++i){
			for(int j=1;j<=y;++j){
				cin>>arr[i][j];
				if(arr[i][j]==1){
					arr[i][j]=-1;
				}else{
					if(arr[i-1][j]!=-1 && arr[i][j-1]!=-1 && arr[i-1][j-1]!=-1){
						arr[i][j]=arr[i-1][j-1]+1;
						if(arr[i][j]>max)
							max=arr[i][j];
					}
				}
			}
		}

		cout<<(max+1)*(max+1)<<endl;
	}
	return 0;
}

