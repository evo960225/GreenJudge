#include<iostream>

using namespace std;

int main(){
	int n;
	int d;
	int len;
	string st;
	
	cin>>n;
	for(;n>0;--n){
		cin>>d;
		cin>>st;
		len=st.length();
		for(int i=0;i<len;++i){
			st[i]=(st[i]-39-d)%26 +65;
		}
		cout<<st<<endl;
	}
	return 0;
}

