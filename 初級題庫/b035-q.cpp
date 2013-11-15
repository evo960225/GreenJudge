#include<iostream>
#include <stdlib.h>
using namespace std;

static int cmp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main(){
	int n;
	int tmp;
	long long int sum;
	int arr[10000];
	while(cin>>n){
		for(int i=0;i<n;++i){
			cin>>arr[i];
		}
		qsort (arr, n, sizeof(int), cmp);
		sum=0;
		for(int i=0;i<n;++i){
			sum+=arr[i]*(n-i-1);
		}
		cout<<sum*100<<endl;
	}
	return 0;
}

