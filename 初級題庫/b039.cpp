#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;



int n;
int dx[12];
bool map[12][12];

bool ok(int x,int y){
	
	for(int i=0;i<n;++i){
		if(map[x][i])return false;
		if(map[i][y])return false;
	}
	//左下 
	int i=x-1;
	int j=y+1;
	for(;;){

		if(i<0 || j==n)break;
		if(map[i][j])return false;
		--i;
		++j;
	}
	//右上 
	i=x+1;
	j=y-1;
	for(;;){
		if(i==n || j<0)break;
		if(map[i][j])return false;
		++i;
		--j;
	}
	//右上 
	i=x+1;
	j=y+1;
	for(;;){
		if(i==n || j==n)break;
		if(map[i][j])return false;
		++i;
		++j;
	}
	//左上 
	i=x-1;
	j=y-1;
	for(;;){
		if(i<0 || j<0)break;
		if(map[i][j])return false;
		--i;
		--j;
	}
	
	return true;
}

void f(int x=0){
	for(int i=0;i<n;++i){
		if(ok(x,i)){
			
			map[x][i]=true;
			dx[x]=i;
			
			if(x+1 != n){
				f(x+1);
			}else{
				for(int j=0;j<n;++j)
					cout<<dx[j]+1<<" ";
				cout<<endl;
			}
			map[x][i]=false;
		}
	}
}



int main(){
	while(cin>>n){
		memset(map,false,12*12);
		f();
	}
	return 0;
}

