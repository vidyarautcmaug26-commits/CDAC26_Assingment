//============================================================================
// Name        : 1.cpp
// Author      : vidya
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class Product{
	int productId;
	string name;
	double price;
	int quantity;

public:
	void acceptDetails(){
		cout<<"====Enter a details of product===="<<endl;
		cout<<"Product ID: ";
		cin>>productId;
		cout<<"Name: ";
		cin>>name;
		cout<<"Price: ";
		cin>>price;
		cout<<"Quantity: ";
		cin>>quantity;
	}

	void displayDetails(){
		cout<<productId<<"  "<<name<<"  "<<price<<"  "<<quantity<<"  "<<totalValue()<<"  "<<endl;
	}

	double totalValue()const{
		return price*quantity;
	}
	bool isLowStock(int threshold)const{
		return quantity<threshold;
	}

	const string& getName() const {
		return name;
	}


};


int main(){
	Product arr[5];
	for(int i=0;i<5;i++){
		arr[i].acceptDetails();
	}
	cout<<"=======INVENTORY REPORT========="<<endl;
	cout<<"ID"<<"  "<<"Name"<<"  "<<"Price"<<"  "<<"Qty"<<"  "<<"Total value"<<endl;
	for(int i=0;i<5;i++){
		arr[i].displayDetails();
		}
	cout<<"Low Stock (threshold:10):";
	for(int i=0;i<5;i++){
		if(arr[i].isLowStock(10))
			cout<<arr[i].getName();
	}
	cout<<endl;

    int a=0;
    for(int i=0;i<5;i++){
    	if(arr[i].totalValue()>arr[a].totalValue()){
    		a=i;
    	}
    }

    cout<<"Highest value Product: "<<arr[a].getName()<<"("<<"Rs."<<arr[a].totalValue()<<")"<<endl;

	return 0;
	}
