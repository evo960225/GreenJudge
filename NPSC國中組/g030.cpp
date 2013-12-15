#include<iostream>
#include<cstring>
using namespace std;

int main(){
	short si[101];
	int n;
	int tmp;
	int sum;
	double avg;
	int ans;
	
	while(cin>>n){
		if(n==0)break;
		memset(si,0,sizeof(short)*101);
		sum=0;
		
		for(int i=0;i<n;++i){
			cin>>tmp;
			++si[tmp];
			sum+=tmp;
		}
		
		avg=(double)sum/n;
		ans=0;
		for(int i=0;i<avg;++i){
			ans+=si[i];
		}
		cout<<ans<<endl;
	}
	return 0;
}

