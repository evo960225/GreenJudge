#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		for(int i=1;i<=n;++i){
			for(int j=1;j<=n;++j){
				cout<<j<<"x"<<i<<"="<<setw(2)<<i*j<<"  ";
			}
			cout<<endl;
		}
	}
	return 0;
}

