#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				if((-i+(j%3))%3==0)cout<<"@";
				else cout<<"-";
			}
			cout<<endl;
		} 
	} 
	return 0;
}

