#include<iostream>
using namespace std;

int main(){
	int a1,a2;
	int b1,b2;
	int d;
	while(cin>>a1>>a2>>b1>>b2){
		//a1/a2 + b1/b2 = (a1*b2)+(b1*a2)/a2*b2
		a1=(a1*b2)+(b1*a2);
		a2*=b2;
		if(a1>=a2){
			d=a1/a2;
			a1%=a2;
		}else{
			d=0;
		}
		
		while(a1%2==0 && a2%2==0){
			a1/=2;
			a2/=2;
		}	
		for(int i=3;i<=a1;i+=2){
			while(a1%i==0 && a2%i==0){
				a1/=i;
				a2/=i;
			}
		}
		cout<<d<<"+"<<a1<<"/"<<a2<<endl; 
	}
	return 0;
}

