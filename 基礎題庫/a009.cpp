#include<iostream>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		cout<<n/11*1000+n%11*100<<endl;
	}
	return 0;
}

