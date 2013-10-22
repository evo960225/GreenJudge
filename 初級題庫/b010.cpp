#include<iostream>
using namespace std;

int main(){
	
	string st;
	while(cin>>st){
		for(int i=0;i<st.length();++i){
			st[i]=(st[i]-67+26)%26+65;
		}
		cout<<st<<endl;
	}
	
	return 0;
}

