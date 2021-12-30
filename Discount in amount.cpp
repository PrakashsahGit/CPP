#include<iostream>
using namespace std;
int main(){
	float amount,totalamount,discount;
	cout<<"Enter the total amount";
	cin>>amount;
	if(amount>=100 && amount<500){
		discount=amount*10/100;
		cout<<"Discount amount"<<" "<<discount<<endl;
		totalamount=amount-discount;
		cout<<"The total amount is"<<" "<<totalamount;
	}
	else if(amount>=500){
		discount=amount*20/100;
		cout<<"Discount amount"<<" "<<discount<<endl;
		totalamount=amount-discount;
		cout<<"The total amount is"<<" "<<totalamount;
	}
	else if(amount<100){
		cout<<"No discount\n"<<amount;
		
	}
	
}
