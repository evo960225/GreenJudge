#include<cstdio>

int main(){
	int n,m,sum;
	int a[101];
	a[0]=0;
	for(int i=0;i<100;++i)
		a[i+1]=a[i]+i*2+1;

	for(;scanf("%d",&n),n;){
		sum=0;
		for(;scanf("%d",&m),sum+=a[m],--n;);
		printf("%d\n",sum);
	}
	
}
