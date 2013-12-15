#include<cstdio>

int main(){
	long long n,m;
	for(;scanf("%lld%lld",&n,&m)==2;){
		!n?:printf((n>m)?"Unfair\n":"Fair\n");
	}
}
