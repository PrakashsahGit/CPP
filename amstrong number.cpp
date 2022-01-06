#include<iostream>
using namespace std;
int main(){
	int n,i,r,sum=0;
	cout<<"Enter the number";
	cin>>n;
	int m=n;
	while(n>0){
		r=n%10;
		n=n/10;
		sum=sum+r*r*r;
		
	}
	if(m==sum)
	cout<<"Amstrong number";
	else
	cout<<"not a Amstrong number";
}
