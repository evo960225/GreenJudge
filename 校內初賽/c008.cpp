#include<iostream>

using namespace std;

int main(){
	int n;
	while(cin>>n){
		n=n*4/5+30;
		if(n>100)n=100;
		cout<<n<<endl;
	}
	return 0;
}

