#include<iostream>
#include<iomanip> 
using namespace std;

int main(){
	int n;
	const int MAX_arr = 650;
	int arr[MAX_arr];
	int dx;
	
	while(cin>>n){
		for(int i=0;i<MAX_arr-1;++i){
			arr[i]=0;
		}
		
		arr[MAX_arr-1]=1;
		
		for(int i=1;i<=n;++i){
			for(int j=0;j<MAX_arr;++j){
				arr[j]*=i;
				if(arr[j]>9999){
					arr[j-1]+=arr[j]/10000;
					arr[j]%=10000;
				}
			}
		}
		
		//¦A¶i¦ì 
		for(dx=MAX_arr-1;dx>=0;--dx){
			if(arr[dx]>9999){
				arr[dx-1]+=arr[dx]/10000;
				arr[dx]%=10000;
			}
		}
		
		//print
		for(dx=0;arr[dx]==0;++dx);
		cout<<arr[dx];
		cout<<setfill('0');	
		for(++dx;dx<MAX_arr;++dx){
			cout<<setw(4)<<arr[dx];
		}
		cout<<endl;
	}	
	return 0;
}

