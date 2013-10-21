#include<iostream>

using namespace std;

int main(){
	string ans,my;
	int dx;
	int mon;
	while(cin>>ans>>my){
		for(dx=7;dx>=0;--dx){
			if(ans[dx]!=my[dx])break;
		}
		dx=7-dx;
		mon=0;
		switch(dx){
			case 3:
				mon=200;
				break;
			case 4:
				mon=1000;
				break;
			case 5:
				mon=4000;
				break;
			case 6:
				mon=10000;
				break;
			case 7:
				mon=40000;
				break;
			case 8:
				mon=200000;
				break;
		}
		cout<<mon<<endl;
	}
	return 0;
}

