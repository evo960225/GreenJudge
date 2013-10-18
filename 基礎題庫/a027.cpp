#include<cstdio>

int main(){
	int n;
	while(scanf("%d",&n)==1){
		for(;n>=0;--n){
			printf("%d",n);
			if(n!=0)printf(" ");
		}
		printf("\n");
	}
	return 0;
}

