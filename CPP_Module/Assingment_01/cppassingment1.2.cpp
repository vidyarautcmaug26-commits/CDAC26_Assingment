//============================================================================
// Name        : 2.cpp
// Author      : vidya
// Version     :
// Copyright   : Your copyright notice
// Description : Assingment Question 1.2
//============================================================================

//Question 2
#include<iostream>
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
		if(arr[i]<0){
		 cout<<arr[i];
		 continue;
		}
		}
//int b=0;
	for(int i=0;i<N;i++){
			if(arr[i]>=45){
			 break;
			 cout<<i;
			}
		//cout<<"Index "<<b<<" "<<arr[i]<<endl;
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

