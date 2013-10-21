#include<iostream>

using namespace std;

int main(){
	
	int ph,ch;
	int pa,ca;
	int round = 0;
	
	while(cin>>ph>>pa>>ch>>ca){
		round=0;
		
		for(;;){
			++round;
			cout<<"Round "<<round<<":"<<endl;;
				ch-=pa;
				cout<<"You hit Dragon "<<pa<<" points."<<endl;
				if(ch<0)ch=0;
				cout<<"You:"<<ph<<" Dragon:"<<ch<<endl;
				if(ch<=0){
					cout<<"You Win!"<<endl;
					break;
				}
				ph-=ca;
				cout<<"Dragon hits You "<<ca<<" points."<<endl;
				if(ph<0)ph=0;
				cout<<"You:"<<ph<<" Dragon:"<<ch<<endl;
				if(ph<=0){
					cout<<"You Lose!"<<endl;
					break;
				}

		}
		cout<<endl;
	}
	return 0;
}

