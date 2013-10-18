#include<iostream>

using namespace std;

int main(){
	char ch;
	int a,b;
	while(cin>>a>>ch>>b){
		if(ch=='+'){
			cout<<a+b<<endl;
		}else if(ch=='-'){
			cout<<a-b<<endl;
		}else{
			cout<<a*b<<endl;
		}
	}
	return 0;
}

