#include<iostream>

using namespace std;

int main(){
	int ph,pa,pd,ch,ca,cd;
	int round;
	for(;;){
		cin>>ph>>pa>>pd>>ch>>ca>>cd;
		if(ph==0 && pa==0 && pd==0 && ch==0 && ca==0 && cd==0)break;
		pa-=cd;
		ca-=pd;
		for(round=0; ;++round){
			ch-=pa;
			if(ch<=0){
				cout<<"You win in "<<round+1<<" round(s)."<<endl;
				break;
			}
			ph-=ca;
			if(ph<=0){
				cout<<"You lose in "<<round+1<<" round(s)."<<endl;
				break;
			}
		}
	}
	return 0;
}

