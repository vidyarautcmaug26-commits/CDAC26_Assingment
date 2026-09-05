//============================================================================
// Name        : 1.cpp
// Author      : vidya
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void resetSensorPairv1(int reading1,int reading2){
	int temp=reading1;
	reading1=reading2;
	reading2=temp;
	//cout<<"After: "<<"A= "<<reading1<<"B= "<<reading2<<endl;
}
void resetSensorPairv2(int &reading1,int &reading2){
	int temp=reading1;
		reading1=reading2;
		reading2=temp;
		//cout<<"After: "<<"A= "<<reading1<<" B= "<<reading2<<endl;

}
void resetSensorPairv3(int *reading1,int *reading2){
	int temp=*reading1;
		*reading1=*reading2;
		*reading2=temp;
		//cout<<"After: "<<"A= "<<*reading1<<" B= "<<*reading2<<endl;

}


int main() {
	int a=10;
	int b=20;
	cout<<"---V1: call by value---"<<endl;
	cout<<"Before: "<<"A= "<<a<<"  B= "<<b<<endl;
	 resetSensorPairv1(a,b);
	 cout<<"After: "<<"A= "<<a<<"  B= "<<b<<endl;   //v1 fails because when we call function by value ...value pass void resetSensorPairv1()..
	                                                  //here this function return type is void so when we print output in main function then value no change

     cout<<"---V2: call by Reference---"<<endl;
	 cout<<"Before: "<<"A= "<<a<<" B= "<<b<<endl;     // in v2 create alise of a and b variable ...so swapping of function reflects in a and b
	 resetSensorPairv2(a,b);
	 cout<<"After: "<<"A= "<<a<<"  B= "<<b<<endl;

	 cout<<"---V3: call by pointer---"<<endl;
	 cout<<"Before: "<<"A= "<<a<<"  B= "<<b<<endl;    //in v3 due to pointer we can change the value through address
	  resetSensorPairv3(&a,&b);
	  cout<<"After: "<<"A= "<<a<<"  B= "<<b<<endl;


	return 0;
}
