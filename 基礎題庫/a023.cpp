#include<iostream>

using namespace std;

int main(){
	int n;
	int count;
	while(cin>>n){
		count=1;
		while(n!=1){	
			if(n%2==0){
				n=n>>1;
			}else{
				n=3*n+1;
			}
			++count;
		}
		cout<<count<<endl;
	}
	return 0;
}

