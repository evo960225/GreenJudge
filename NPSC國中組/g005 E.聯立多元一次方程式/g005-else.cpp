#include<stdio.h>
#include<string.h>

int main(){
	int t,s;
	int n,m;
	double max,tmp,sum;
	int maxdx;
	bool ans;
	bool is[1001];
	
	scanf("%d",&t);
	for(int ii=0;ii<t;++ii){
		scanf("%d",&s);
		ans=1;
		memset(is,0,s);
		for(int i=0;i<s;++i){
			max=sum=0;
			maxdx=1001;
			for(int j=0;j<s;++j){
				scanf("%lf",&tmp);
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
		printf(ans?"yes\n":"no\n");
	}
	
}
