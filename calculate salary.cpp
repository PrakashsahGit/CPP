#include<iostream>
using namespace std;
int main(){
	float basicsalary;
	float percentageofallowances;
	float percentageofdeducations;
	float netsalary;
	cout<<"Enter the basic salary"<<endl;
	cin>>basicsalary;
	cout<<"Enter the percentage of allowances"<<endl;
	cin>>percentageofallowances;
	cout<<"Enter the percentage of deducations"<<endl;
	cin>>percentageofdeducations;
	netsalary=basicsalary+basicsalary*percentageofallowances/100-basicsalary*percentageofdeducations/100;
	cout<<"The net salary is"<<netsalary;
	return 0;
}
