#include<iostream>

using namespace std;

int main(){
	int n;
	int count;
	while(cin>>n){
		count=0;
		if(n>=10000){
			count+=n/10000;
			n%=10000;
		}
		if(n>=5000){
			++count;
			n-=5000;
		}
		if(n>=1000){
			count+=n/1000;
			n%=1000;
		}
		if(n>=500){
			++count;
			n-=500;
		}
		if(n>=100){
			count+=n/100;
			n%=100;
		}
		if(n>=50){
			++count;
			n-=50;
		}
		if(n>=10){
			count+=n/10;
			n%=10; 
		}
		if(n>=5){
			++count;
			n-=5; 
		}
		count+=n;
		cout<<count<<endl;
	}
	return 0;
}

