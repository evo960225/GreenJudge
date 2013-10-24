#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char st1[60],st2[60];
	int ans[120];
	int dx,dx1,dx2;
	int len,len1,len2;

	
	while(cin>>st1>>st2){
		len1=strlen(st1);
		len2=strlen(st2);
		len=len1+len2;
		for(int i=0;i<len;++i){
			ans[i]=0;
		}
		
		for(dx1=len1-1;dx1>=0;--dx1){
			for(dx2=len2-1;dx2>=0;--dx2){
				dx=dx1+dx2+1;
				ans[dx]+=(st1[dx1]-48)*(st2[dx2]-48);
			}
		}
		
	
		for(dx=len-1;dx>0;--dx){
			ans[dx-1]+=ans[dx]/10;
			ans[dx]%=10;
		}
		if(ans[0]==0)dx=1;
		else dx=0;
		
		for(;dx<len;++dx){
			cout<<ans[dx];
		}
		cout<<endl;
	}
	return 0;
}

