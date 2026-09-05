//============================================================================
// Name        : 2.cpp
// Author      : vidya
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

double reorderCost(int qty,double unitPrice){
	return qty*unitPrice;
}

double reorderCost(double qty,double unitPrice){
	return qty*unitPrice;
}

double reorderCost(int qty,double unitPrice,double taxRate){
	double cost=qty*unitPrice;
	double Tax_amount=cost*(taxRate/100);
	return cost+Tax_amount;
}

double applyDiscount(double price,double discountPercent=10.0){
	return price-(price*discountPercent/100);
}
int main() {
	cout<<reorderCost(10,25.2)<<endl;
	cout<<reorderCost(12.5,56.2)<<endl;
	cout<<reorderCost(10,10,0.40)<<endl;
	cout<<reorderCost(12,12.2)<<endl;
	cout<<applyDiscount(100,20)<<endl;
	cout<<applyDiscount(100)<<endl;
	return 0;
}
