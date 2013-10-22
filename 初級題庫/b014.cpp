#include<iostream>
#include<sstream>
using namespace std;

int main(){
	string st;
	int no=0;
	int tmp;
	int sum;
	int max=0xffffffff;
	int maxno;

	stringstream ss;
	while(getline(cin,st)){
		++no;
		sum=0;
		ss.clear();
		ss<<st;
		while(ss>>tmp){
			sum+=tmp;
		}
		if(sum>max){
			max=sum;
			maxno=no;
		}		
	}
	cout<<maxno<<" "<<max<<endl;
	return 0;
}

