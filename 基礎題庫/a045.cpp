#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n;
	int i;
	bool pri;
	
	while(cin>>n){
		
		if(n%2==0 || n==1 || n==4 || n==6){
			pri=false;
		}else{
			pri=true;
			for(i=3;i<=sqrt(n+1);i+=2){
				if(n%i==0){
					pri=false;
					break;	
				}
			}
			
		}

		if(n==2 || n==3 || pri){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
		
		
	}
	return 0;
}

