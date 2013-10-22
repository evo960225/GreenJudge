#include<iostream>

using namespace std;

int main(){
	string st;
	int len;
	while(cin>>st){
		len=st.length()-1;
		for(int i=len;i>=0;--i){
			cout<<st[i];
		}
		cout<<endl;
	}
	return 0;
}

