#include<iostream>
#include<cstdio>
using namespace std;



int main(){
	int arr[20][2];
	int n;
	int tmp;
	int max_index;
	
	while(cin>>n){
		max_index=0;
		for(int i=0;i<20;++i){
			arr[i][0]=0;
			arr[i][1]=0;
		}
		while(n--){
			cin>>tmp;
			for(int i=0;i<20;++i){
				if(arr[i][0]==0){
					arr[i][0]=tmp;
					arr[i][1]=1;
					break;	
				}else if(arr[i][0]==tmp){
					++arr[i][1];
					break;
				}
			}
			for(int i=0;i<20;++i){
				if(arr[i][1]>arr[max_index][1]){
					max_index=i ;
				}		
			}
		}
		cout<<arr[max_index][0]<<" "<<arr[max_index][1]<<endl;	
	}
	return 0;
}

