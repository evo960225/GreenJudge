#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int t,s;
	int n,m;
	double max,tmp,sum;
	int maxdx;
	bool ans;
	bool is[1001];
	
	cin>>t;
	for(int ii=0;ii<t;++ii){
		ans=1;
		cin>>s;
		memset(is,0,s);
		for(int i=0;i<s;++i){
			max=sum=0;
			maxdx=1001;
			for(int j=0;j<s;++j){
				cin>>tmp;
				if(tmp<0)tmp*=-1;	
				sum+=tmp;
				if(tmp>max){
					max=tmp;
					maxdx=j;
				}
			}
			(max>sum-max)?is[maxdx]=1:ans=0;
		}
		for(int i=0;i<s&&(ans&=is[i]);++i);
		cout<<(ans?"yes":"no")<<endl;	
	}
	
}
