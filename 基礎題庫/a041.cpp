#include<iostream>

using namespace std;

int main(){
	int n;
	int sum;
	int tmp;
	while(cin>>n){
		sum=n;
		for(;;){
			tmp=n%5;
			n=n/5;
			if(n==0)break; 
			sum+=n;
			n+=tmp;
		}
		cout<<sum<<endl;
	}
	return 0;
}

