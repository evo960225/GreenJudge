#include<iostream>

using namespace std;

int main(){
	int n;
	while(cin>>n){
		while(n%2==0){
			n=n>>1;
		}
		cout<<n<<endl;
	}
	return 0;
}

