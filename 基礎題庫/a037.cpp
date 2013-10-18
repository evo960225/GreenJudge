#include<iostream>
using namespace std;

int main(){
	int si;
	int n,m;
	cin>>si;
	while(si--){
		cin>>n>>m;
			if(n>m){
				cout<<"A "<<n-m<<endl; 
			}else if(n<m){
				cout<<"B "<<m-n<<endl;
			}else{
				cout<<"0"<<endl;
			}	
	}
	return 0;
}

