#include<iostream>  
 
using namespace std;  
  
int main(){  
    int n;  
    int i;  
    int sum;  
    while(cin>>n){  
        sum=0;  
        for(i=1;i<=n/2;++i){  
            if(n%i==0)sum+=i;  
        }  
        if(sum>n){  
            cout<<"Abundant"<<endl;  
        }else if(sum==n){  
            cout<<"Perfect"<<endl;  
        }else{  
            cout<<"Deficient"<<endl;  
        }  
    }  
    return 0;  
}  

