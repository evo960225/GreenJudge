#include<iostream>
using namespace std;

int main(){
	
	int n;
	int arr[40][2];
	int tmp;
	int sum;
	
	int dx;
	int i;
	
	while(cin>>n){
		//init
		dx=0;

		//get 1 string 
		for(int sti = 0;sti<n;++sti){
			cin>>tmp ;
			for(i=0;i<dx;++i){
				if(arr[i][0]==tmp){
					++arr[i][1]	;
					break;
				}
			}
			if(dx==i){
				arr[dx][0]=tmp;
				arr[dx][1]=1;
				++dx;
			}
		}
		
		//get 2 string
		cin>>n;
		for(int sti = 0;sti<n;++sti){
			cin>>tmp ;
			for(i=0;i<dx;++i){
				if(arr[i][0]==tmp){
					++arr[i][1];
					break;
				}
			}
			if(dx==i){
				arr[dx][0]=tmp;
				arr[dx][1]=1;
				++dx;
			}
		}
		
		//processing
		sum=0;
		for(int ii=0;ii<dx;++ii){
			if(arr[ii][1]==2)
				++sum;
		}
		cout<<sum<<"\n"<<endl;
	}
	return 0;
}

