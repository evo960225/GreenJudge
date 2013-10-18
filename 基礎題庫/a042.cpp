#include<iostream>  

using namespace std;  
  
int main(){  

    int n;  
	int arr[]={1,6,9,6,9,0,1,2,7,4,3,8,5,8,5,4,3,2,7,0}; 
    
	while(cin>>n){    
        cout<<arr[(n-1)%20]<<endl;  
    }  
    return 0;  
} 

