#include<iostream>

using namespace std;

int main(){
	string st;
	int len;
	
	while(cin>>st){
		len=st.length();
		for(;st[len-1]=='0';--len);
		for(int i=len-1;i>=0;--i){
			cout<<st[i];
		}
		cout<<endl;
	}
	return 0;
}

