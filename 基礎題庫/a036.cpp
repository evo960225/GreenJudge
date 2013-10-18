#include<iostream>
using namespace std;

int main(){
	int n,m;
	while(cin>>n>>m){
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

