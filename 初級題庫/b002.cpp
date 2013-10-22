#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int n;
	int tmp;
	int max;
	int indx;
	while(cin>>n){
		max=0xffffffff;
		for(int dx=0;dx<n;++dx){
			cin>>tmp;
			if(tmp>max){
				max=tmp;
				indx=dx+1;
			}
		}
		cout<<indx<<" "<<max<<endl;
	}
	return 0;
}

