#include<iostream>

using namespace std;

int main(){
	string st;
	int sum;
	while(cin>>st){
		sum=0;
		for(int i=0;i<7;++i){
			sum+=(st[i]-48)*(i+1);
		}
		cout<<(10-(sum%10))%10<<endl;
	}
	return 0;
}

