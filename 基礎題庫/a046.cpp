#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int w,h;
	while(cin>>w>>h){
		for(int i=0;i<h;++i){
			for(int j=0;j<w;++j){
				cout<<"#";
			}
			cout<<endl;
		}
	}
	return 0;
}

