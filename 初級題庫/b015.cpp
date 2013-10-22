#include<iostream>
#include<sstream>
using namespace std;

int main(){
	stringstream ss;
	int y = 0;
	string st;
	string tmp;
	int i;
	bool find =false;
	
	for(i=0;i<3;++i){
		getline(cin,st);
		y=0;
		ss.clear();
		ss<<st;
		while(ss>>tmp){
			++y;
			if(tmp=="BILL"){
				cout<<i+1<<" "<<y<<endl;
				find=true;
				break;
			}
		}
		if(find)break;
	}
	if(!find)cout<<"NO"<<endl;
	return 0;
}

