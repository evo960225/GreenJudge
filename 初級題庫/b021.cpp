#include<iostream>

using namespace std;

int main(){
	
	int arr[100][6];
	int so[100];
	int n;
	int tmp;
	int dx,dx2;
	
	while(cin>>n){
		for(int i=0;i<n;++i){
			cin>>tmp;
			arr[i][5]=0;
			for(int j=0;j<5;++j){
				cin>>arr[i][j];
				arr[i][5]+=arr[i][j];
			}
			so[i]=i;
		}
		for(int i=0;i<n-1;++i){
			for(int j=0;j<n-1-i;++j){
				dx=so[j];
				dx2=so[j+1];
				if(arr[dx][5]<arr[dx2][5]){
					tmp=so[j];so[j]=so[j+1];so[j+1]=tmp;
				}else if((arr[dx][5]==arr[dx2][5])){
					if(arr[dx][2]<arr[dx2][2]){
						tmp=so[j];so[j]=so[j+1];so[j+1]=tmp;
					}
				}
			}
		}

		for(int i=0;i<n;++i){
			cout<<so[i]+1<<endl;
		} 
	}
	return 0;
}

