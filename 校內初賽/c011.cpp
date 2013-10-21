#include<iostream>

using namespace std;

int main(){
	int n;
	int tmp;
	int max,max2;
	while(cin>>n){
		for(int i=0;i<n;++i){
			cin>>tmp ;
			if(tmp>max){
				max2=max;
				max=tmp;
			}else if(tmp>max2){
				max2=tmp;
			}
		} 
		cout<<max2<<endl;
	}
	
	return 0;
}

