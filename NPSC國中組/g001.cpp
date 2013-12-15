#include<iostream>

using namespace std;

int main(){
	int a,b;
	int err;
	bool isans;
	while(cin>>a>>b){
		isans=false;
		err=0;
		if(b>a)a=b;
		for(int i=0;i<30;++i){
			cin>>b;
			if(b==a && err<3)isans=true;
			else if(b!=0)++err;
		}
		cout<<((isans)?"Y":"N")<<endl;
	}
	return 0;
}

