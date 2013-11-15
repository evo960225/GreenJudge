#include<iostream>
#include<cstdlib>
using namespace std;

static int cmp(const void* a ,const void* b){
	return *(int *)b - *(int *)a;
}

void insort(int* arr,int n,int size){
	int dx;
	
	for(dx=size-2;dx>=0;--dx){
		if(arr[dx]>=n)break;
	}
	for(int i=size-1;i>dx+1;--i){
		arr[i]=arr[i-1];
	}

	arr[dx+1]=n;

}

int main(){
	int arr[1000];
	int n;
	int sum;
	int dx;
	int max;
	
	while(cin>>n){
		for(int i=0;i<n;++i){
			cin>>arr[i];
		}
		
		sum=0;
		qsort(arr,n,sizeof(int),cmp);
		for(;;){
			 
			arr[n-2]+=arr[n-1];
			arr[n-1]=0;
			sum+=arr[n-2];
			--n;
			
			if(n==1)break;
			insort(arr,arr[n-1],n);
			
		}
		cout<<sum<<endl;
	}
	return 0;
}

