#include<iostream>

using namespace std;

int main(){
	int a;
	while(cin>>a){
		if(a>=60){
			cout<<"PASS"<<endl;
		}else{
			cout<<"FAIL"<<endl;	
		}
	}
	return 0;
}

