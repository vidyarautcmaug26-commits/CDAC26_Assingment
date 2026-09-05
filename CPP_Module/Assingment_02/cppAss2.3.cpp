//============================================================================
// Name        : 3.cpp
// Author      : vidya
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Patient{
	int PatientId;
	string name;
	int age;
	string ward;
	const string bloodGroup;
public:

	Patient():PatientId(0),name("unknown"),age(0),ward("Genral"),bloodGroup("O+"){
    cout<<"constructor 1 call"<<endl;
	 }
	Patient(int id,const string &name):PatientId(id),name(name),age(0),ward("Emergency"),bloodGroup("O+"){
    cout<<"[constructor_2] Emergency :"<<name<<endl;

	}
	Patient(int id,const string& name,int age,const string &ward,const string &bg):PatientId(id),name(name),age(age),ward(ward),bloodGroup(bg){
	cout<<"[constructor_3] Full Admission :"<<name<<endl;

	}
	~Patient(){
	cout<<"destructor call"<<endl;
	cout<<"patient"<<name<<"discharged.";
	}
	void displayRecord()const{
		cout<<"Patient Record:";
		cout<<"Patient_Id  :"<<PatientId<<endl;
		cout<<"Name        :"<<name<<endl;
		cout<<"Age         :"<<age<<endl;
		cout<<"Ward        :"<<ward<<endl;
		cout<<"Blood Grp   :"<<bloodGroup<<endl;
	}
	void transferWard(const string& newWard){
      cout<<"ward Transfer :"<<name<<"->"<<newWard<<endl;
	}
};
int main() {
Patient p1;
Patient p2(1002,"Raj Patel");
Patient p3(1001,"Meera Joshi",34,"Cardiology","B+");
p3.displayRecord();

Patient *arr=new Patient[4];
//for(int i=0;i<4;i++){
//	arr[i].displayRecord();
//}

arr[1].transferWard("ICU");

delete[] arr;
	return 0;
}
