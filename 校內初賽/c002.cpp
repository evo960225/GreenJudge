#include<iostream>

using namespace std;

int main(){
	int h1,h2,m1,m2;
	int sum;
	while(cin>>h1>>m1>>h2>>m2){
		sum=(h2*60+m2)-(h1*60+m1);
		if(sum>420)
			cout<<"210"<<endl;
		else if(sum>60)
			cout<<(sum-61)/60*30+60<<endl;
		else if(sum>30)
			cout<<(sum-1)/30*30<<endl;
		else
			cout<<"0"<<endl;
	}
	return 0;
}

