#include<iostream>
using namespace std;
int main(){
	int m1,m2,m3,total,avg;
	cout<<"Enter the marks of three subject"<<endl;
	cin>>m1>>m2>>m3;
	total=m1+m2+m3;
	avg=total/3;
	if(avg>=60){
		cout<<"Grade A"<<endl;
	}
	else if(avg>=35 && avg<60){
		cout<<"Grade B"<<endl;
	}
	else if(avg<35){
		cout<<"Grade c"<<endl;
	}
	return 0;
	
	
	
	
}
