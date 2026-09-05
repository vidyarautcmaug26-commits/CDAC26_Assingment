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
	int statusReg=0b0110001;
	int controlReg=0b00000000;
	int dataReg=0b11001010;

	const int *regPtr1=&statusReg;
	//*regPtr1=40;                               //error: assignment of read-only location '* regPtr1' because here pointer is constant so its value cannot change but this pointer can point to anothe location
	cout<<"statusReg:"<<*regPtr1<<endl;

	int* const regPtr2=&controlReg;
	*regPtr2=60;                                    //here we can not change address of variable but its value can change through pointer
	cout<<"controlReg:"<<*regPtr2<<endl;

	const int* const regPtr3=&statusReg;
	//regPtr3=60;                                 // error: assignment of read-only variable 'regPtr3' beacause pointer and variable bothe are constant
	cout<<"statusReg using regPtr3:"<<*regPtr3<<endl;


	return 0;
}
