#include<iostream>

using namespace std;

int main(){
	int n;
	while(cin>>n){
		cout<<90+(n+6)/12 <<" "<<(n+6)%12+1<<endl;
	}
	return 0;
}

