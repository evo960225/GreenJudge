#include<iostream>

using namespace std;

int main(){
	int arr[101][101];
	string st1,st2;
	int len1,len2;
	bool isin;
	while(cin>>st1>>st2){
		
		len1=st1.length();
		len2=st2.length();
		//init
		for(int i=0;i<=len1;++i){
			for(int j=0;j<=len2;++j){
				arr[i][j]=0;
			}
		}
		//proceesing
		for(int i=1;i<=len1;++i){
			for(int j=1;j<=len2;++j){
				if(st1[i-1]==st2[j-1])
					arr[i][j]=arr[i-1][j-1]+1;
				if(arr[i][j]<arr[i][j-1])
					arr[i][j]=arr[i][j-1];
				if(arr[i][j]<arr[i-1][j])
					arr[i][j]=arr[i-1][j];
			}
		} 
		
		cout<<arr[len1][len2]<<endl;
	}
	return 0;
}

