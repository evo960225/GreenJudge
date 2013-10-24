#include<iostream>

using namespace std;

int main(){
	bool user;
	string fname;
	string tmp;
	int count;
	int n;
	int no;
	
	while(cin>>n){
		count=0;
		user=false;
		fname="";
		for(;n>0;--n){
			cin>>tmp>>no;
			if(no==0){
				++count;
			}else if(no==1){
				if(fname!=""){
					++count;
				}	
				fname=tmp;
			}else{
				user=true;
			}
		}	
		//print
		if(!user && fname==""){
			cout<<count<<" people like this."<<endl; 
		}else if(!user && fname!=""){
			
			cout<<fname;
			if(count!=0)
				cout<<" and "<<count<<" others";
			cout<<" like this."<<endl;
			
		}else if(user && fname!=""){
			
			cout<<"You";
			if(count!=0)
				cout<<", "<<fname<<" and "<<count<<" others";
			else
				cout<<" and "<<fname;
			cout<<" like this."<<endl;
			
		}else if(user && fname==""){
			cout<<"You ";
			if(count!=0)
				cout<<"and "<<count<<" others ";
			cout<<"like this."<<endl;
		}
		
	}
	return 0;
}

