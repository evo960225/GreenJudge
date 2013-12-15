#include<iostream>

using namespace std;

int main(){
	int sti;
	int n,m;
	int tmp;
	cin>>sti;
	
	for(;sti>0;--sti){
		cin>>n>>m;
		tmp=n*m;
		for(;;){
			if(n>m){
				n%=m;
				if(n==0){
					cout<<tmp/m<<endl;
					break;
				}
			}
			if(n<m){
				m%=n;
				if(m==0){
					cout<<tmp/n<<endl;
					break;
				}
			}
			if(n==m){
				cout<<n<<endl;
				break;
			}
		}
	}
	return 0;
}

