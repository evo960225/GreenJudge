#include<iostream>

using namespace std;

int main(){
	string st;
	int len;
	bool is;
	
	while(cin >> st){
		is = true;
		len = st.length();
		for(int i = 0; i <= len/2; ++i){
			if(st[i] != st[len-i-1]){
				is=false;
				break;
			}
		}
		if(is)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}

