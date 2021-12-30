#include<iostream>
using namespace std;
int main(){
	int sum=0,i,n,perfect;
	cout<<"Enter the number";
	cin>>n;
	for(i=i;i<=n;i++){
		if(n%i==0){
			sum=sum+i;
			cout<<sum<<endl;
		}
		}
		if(2*n==sum)
			cout<<"it is perfect no";
		
		else
			cout<<"Not a perfect no";
		return 0;
	}

