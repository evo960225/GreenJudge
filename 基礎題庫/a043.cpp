#include<iostream>

using namespace std;

int main(){
	int a,b;
	while(cin>>a>>b){
		while(a!=b){
			if(a>b)a-=b;
			else b-=a; 
		}
		cout<<a<<endl;
	}
	return 0;
}

