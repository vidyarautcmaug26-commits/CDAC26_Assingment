//============================================================================
// Name        : 2.cpp
// Author      : vidya
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
struct Layout1{
char c1;
int i;
char c2;
};
struct Layout2{
int i;
char c1;
char c2;
};
int main() {
	cout << "Layout1 :"<<sizeof(Layout1)<< endl;
	cout << "Layout2 :"<<sizeof(Layout2)<< endl;


	return 0;
}

/*1.Why the sizes differ?
Because the compiler adds padding bytes between members so that the data is stored at suitable memory addresses.
2.What padding is and why the compiler adds it
extra unused bytes added by the compiler
3.Why member order matters when defining network packet headers or hardware register maps
Member order matters because C++ stores structure members in the order in which they are declared. Padding may be added between members, so changing the order can change their memory addresses and total size.*/
