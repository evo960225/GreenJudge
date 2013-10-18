#include<iostream>
using namespace std;

int main(){
	int a,b;
	while(cin>>a>>b){
		if(b<a)a=b;
		cin>>b;
		if(b<a)a=b;
		cout<<a<<endl;
	}
	return 0;
}

