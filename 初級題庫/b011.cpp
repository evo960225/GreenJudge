#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	string st;
	char ch[8];
	int dx;
	int sum=0;
	int sti;
	
	for(sti=0;sti<3;++sti){
		cin>>st;
		dx=0;

		
		for(int i=0;i<st.length();++i){
			if(st[i]>=48 && st[i]<=57){
				ch[dx]=st[i];
				++dx;
			}
		}
		ch[dx]=0;
		sum+=atoi(ch);
	}
	cout<<sum<<endl;
	
	return 0;
}

