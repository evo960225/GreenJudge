#include<iostream>

using namespace std;

int main(){
	int tmpdx;
	int dx;
	int tmp;
	int sum;
	string st;
	char arr[]={'I','V','X','L','C','D','M'};
	int irr[]={1,5,10,50,100,500,1000};
	
	while(cin>>st){
		sum=0;
		tmp=0;
		dx=0;
		for(int i=st.length()-1;i>=0;--i){
			for(tmpdx=0;tmpdx<7;++tmpdx){
				if(st[i]==arr[tmpdx]){
					tmp=irr[tmpdx];
					if(tmpdx<dx)tmp=(-tmp);
					dx=tmpdx;
					sum+=tmp;
					break;
				}	
			}			
			
		} 
		cout<<sum<<endl;
	}
	return 0;
}

