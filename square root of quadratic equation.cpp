#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float r,a,b,c;
	cout<<"enter the a,b and c"<<endl;
	cin>>a>>b>>c;
	r=(-b+sqrt(b*b-4*a*c))/(2*a);
	cout<<"The square no. is"<<r;
	return 0;
	
	
}
