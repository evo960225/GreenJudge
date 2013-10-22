#include<iostream>

using namespace std;

int main(){
	string st1,st2;
	int dx;
	
	while(cin>>st1>>st2){
		dx=0;
		//while(dx!=st1.length()-1){
			for(int i=0;i<st2.length();++i){
				if(st2[i]==st1[dx])++dx;
				if(dx==st1.length())break;
			}
			
		//}
		if(dx==st1.length()) 
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl; 
	}
	
	return 0;
}

