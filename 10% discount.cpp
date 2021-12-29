#include<iostream>
using namespace std;
int main(){
	int q,c=100,price;
	cout<<"Enter the quantity";
	cin>>q;
	price=q*c;
	if(q>1000){
		cout<<"The total price is "<<price-(price*.1);
		
	}
	else{
		cout<<"Total price is"<<price;
	}
	return 0;
	
}
