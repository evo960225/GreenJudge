#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	string st;
	while(cin>>st){
		cout<<"|"<<setw(4)<<setfill('_')<<"_";
		if(st.length()>4){ 
			int i=st.length()-4;
			for(;i<st.length();++i){
				cout<<st[i];
			}
		}
		else{
			cout<<setw(4)<<st;
		}
		cout<<"|"<<endl;
	}
	return 0;
}

