//============================================================================
// Name        : 3.cpp
// Author      : vidya
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	double arr[3][3];
	cout<<"Enter a Temperature Reading:"<<endl;
    for(int i=0;i<3;i++){
    	for(int j=-0;j<3;j++){
    		cin>>arr[i][j];
    	}
    }

	for(int i=0;i<3;i++){
	    	for(int j=-0;j<3;j++){
	    		cout<<arr[i][j]<<" ";
	    	}
	    	cout<<endl;
	    }
	double Hottest_Room=arr[0][0];
	int warning_count=0;
	int a=0;int b=0;int c=0;double largest_avg=0.0;double avg;                             //a for store floor number and b for store room number
	for(int i=0;i<3;i++){
		double sum=0;double avg;
		for(int j=0;j<3;j++){
			//double sum=0;double avg;
			if(arr[i][j]>Hottest_Room)
			{
				Hottest_Room=arr[i][j];
			    a=i+1;
			    b=j+1;
			}
			 if(arr[i][j]>=30)
				 warning_count++;

			 sum=sum+arr[i][j];
			 avg=(sum)/3;
		}

	if(avg>largest_avg){
		largest_avg=avg;
		c=i+1;
	}

}

	cout<<"Hottest_Room:"<<"Floor "<< a<<","<<"Room "<<b<<" -> " <<Hottest_Room<<"\u00B0"<<"C"<<endl;
	cout<<"HOTTEST_Floor: "<<"Floor "<<c<<"(avg "<<largest_avg<<"\u00B0"<<"C"<<")"<<endl;
	cout<<"Rooms At WARNING or above :"<<warning_count<<endl;

	return 0;
}
