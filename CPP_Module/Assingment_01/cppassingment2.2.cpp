//============================================================================
// Name        : 2.cpp
// Author      : vidya
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

double computeRMS(double *signal,int n){
	double sum=0;
	for(int i=0;i<n;i++){
	sum=sum+((*(signal+i))*(*(signal+i)));
	}

	return sqrt(sum/n);
}
void normalise(double *signal,int n){
	double max_abs=0;
	for(int i=0;i<n;i++){
		if(abs(*(signal+i))>max_abs){
				max_abs=abs(*(signal+1));
		}
	}
	for(int i=0;i<n;i++){
		*(signal+i)=(*(signal+i))/max_abs;
	}
	cout<<"After: "<<"Noramlise "<<endl;
	for(int i=0;i<n;i++){
		cout<<(*(signal+i));
	}
	cout<<endl;
}

int countZeroCrossings(double *signal,int n){
	int count=0;
	for(int i=0;i<7;i++){
	if(*(signal+i)<0)
		count++;
	}
	return count;
}

void applyGain(double *signal,int n,double gainFactor){
	for(int i=0;i<7;i++){
		*(signal+i)=*(signal+1)/gainFactor;
	}
	cout<<"After: "<<"Apply gain "<<endl;
	for(int i=0;i<7;i++){
		cout<<*(signal+i);
		}
	cout<<endl;
}

int main() {
	double result;
	int count;
	double arr[7]={0.5,-1.2,0.8,-0.3,1.0,-0.9,0.1};
	//double *signal=&arr[0];
	result=computeRMS(arr,7);
	cout<<"RMS Result:"<<result<<endl;
	cout<<"Before: "<<"Noramlise "<<endl;
	for(int i=0;i<7;i++){
	    cout<<arr[i];
		}
	cout<<endl;
	normalise(arr,7);
	count=countZeroCrossings(arr,7);
	cout<<"countZeroCrossing: "<<count<<endl;
	applyGain(arr,7,5.3);



	return 0;
}
