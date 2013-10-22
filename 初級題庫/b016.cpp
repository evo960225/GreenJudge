#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char st1[100],st2[100];
	char ans[101];
	int dx1,dx2;
	int add;
	int len;
	
	while(cin>>st1>>st2){
		int i;

		add=0;		
		dx1=strlen(st1)-1;
		dx2=strlen(st2)-1;
		//cout<<dx1<<dx1;
		len=(dx1>dx2)? dx1+1 : dx2+1;

		for(i=0;i<len;++i){
			ans[i]=st1[dx1]+st2[dx2]-48+add;
			if(ans[i]>57){
				ans[i]-=10;
				add=1;
			}else{
				add=0;
			}	
			if(dx1>0)--dx1;
			else st1[0]='0';
			if(dx2>0)--dx2;
			else st2[0]='0';
		}
		if(add==1){
			ans[i]=49;
		}else{
			--len;
		}
		
		for(i=len;i>=0;--i)
			cout<<ans[i];
		cout<<endl;


	}
	return 0;
}

