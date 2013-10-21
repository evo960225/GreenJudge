#include<iostream>

using namespace std;

int main(){
	int y,m;
	int sum;
	while(cin>>y>>m){
		sum=y*12+m;
		sum-=90*12+7;
		if(sum<0 || sum>132)sum=0;
		cout<<sum<<endl;
	}
	return 0;
}

