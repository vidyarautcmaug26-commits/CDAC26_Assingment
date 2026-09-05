//============================================================================
// Name        : cppAssingment.cpp
// Author      : vidya
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
/* cpp assingment Question 1
#include <iostream>
using namespace std;

int range(double r){
	if(r<0){
		return -1;
	}else if(r<29){
		return 0;
	}else if(r>=30 && r<=44){
		return 1;
	}else if(r>=45 && r<=59){
		return 2;
	}else{
		return 3;
	}
}

int main(){
	cout<<"Enter a Temperature reading:";
	double r;
	cin>>r;
	double f=(r*1.8)+32;
	cout<<"Temperature:"<<r<<"/"<<f<<endl;
	int result=range(r);

	switch(result){
	case -1:
		cout<<"SENSOR_ERROR"<<endl;
		cout<<"Sensor fault-checking wiring"<<endl;
		break;
	case 0:
			cout<<"Status : NORMAL"<<endl;
			cout<<"Action :No action required"<<endl;
			break;
	case 1:
			cout<<"Status :WARNING"<<endl;
			cout<<"Action :Sensor fault-checking wiring"<<endl;
			break;
	case 2:
			cout<<"Status :CRITICAL"<<endl;
			cout<<"Action :Cooling system triggered"<<endl;
			break;
	case 3:
			cout<<"Status :SHUTDOWN"<<endl;
			cout<<"Action :Emergency shutdown initiated"<<endl;
			break;
	default:
		    cout<<"Invalid input"<<endl;
	}
	cout<<(r>25?"Reading :Above Average":"Reading :Below Average");
	return 0;
}*/

//Question 2
/*#include<iostream>
using namespace std;
int main(){
	cout<<"Enter number of readings:"<<endl;
	int N;
	cin>>N;
	double arr[N];
	cout<<"Enter readings;"<<endl;
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}

	for(int i=0;i<N;i++){
		if(arr[i]<0)
		 cout<<arr[i];
		 continue;
		}

	for(int i=0;i<N;i++){
			if(arr[i]>=45)
			 cout<<i;
			 break;
			}
	int max=arr[0],min=arr[0],avg=0;
	for(int i=0;i<N;i++){
			if(arr[i]>max)
			 max=arr[i];
			if(arr[i]<min)
			min=arr[i];
			}
	avg=(min+max)/2;
	cout<<"Min :"<<min<<endl;
	cout<<"Max :"<<max<<endl;
	cout<<"Avg :"<<avg<<endl;
	int Normal=0,Warning=0,Critical=0,Shutdown=0;
	for(int i=0;i<N;i++){
			if(arr[i]>=0 && arr[i]<=29)
			 Normal++;
			else if(arr[i]>=30 && arr[i]<=44)
			Warning++;
			else if(arr[i]>=45 && arr[i]<=59)
			Critical++;
			else
			Shutdown++;
			}
	cout<<"Normal :"<<Normal<<"  Warning :"<<Warning<<"  Critical :"<<Critical<<"  Shutdown:"<<Shutdown;

	return 0;
}
*/
