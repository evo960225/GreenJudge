#include<iostream>
using namespace std;

int main(){
	int n,m;
	int si;
	cin>>si;
	for(int i=1;i<=si;++i){
		cin>>n>>m;
		cout<<"Case "<<i<<": "; 
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

