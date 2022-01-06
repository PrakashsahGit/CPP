#include<iostream>
using namespace std;
int main(){
	int n,r,i,m,rev=0;
	cout<<"Enter the number";
	cin>>n;
	 m=n;
	
	while(n>0){
		r=n%10;
		n=n/10;
		rev=rev*10+r;
	}
	if(m==rev)
	cout<<"Palindrome number";
	else
	cout<<"Not a palindrome number";
}
