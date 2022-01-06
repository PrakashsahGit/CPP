#include<iostream>
using namespace std;
int main(){
	int i,n,count=0;
	cout<<"Enter the number";
	cin>>n;
	for(i=1;i<=n;i++){
		if(n%i==0)
			count++;
	
	}
	if(count==2)
	cout<<"its a prime number";
	else
	cout<<"Not a prime";
	return 0;
}
	
