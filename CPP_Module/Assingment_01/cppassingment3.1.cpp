//============================================================================
// Name        : 1.cpp
// Author      : vidya
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Employee{
private:
	int empId;
	string name;
	string department;
	char grade;
	double basicSalary;
	bool isActive;
	static int employeeCount;
public:
	Employee()
	{
	    empId = 1001 + employeeCount;
	    employeeCount++;

	    isActive = true;
	    name = "";
	    department = "";
	    grade = 'D';
	    basicSalary = 0;
	}
	void acceptDetails(){
		 string n;
		 string d;
		 char g;
		 double salary;
		cout<<"Enter Name: ";
		cin>>n;
		setName(n);

		cout<<"Enter Department Name: ";
		cin>>d;
		setDepartment(d);

		cout<<"Enter Grade: ";
		cin>>g;
		setGrade(g);

		cout<<"Enter Basic Salary: ";
	     cin>>salary;
		setBasicsalary(salary);

	}




double computeAllowances() const{
		if (grade == 'A')
		return basicSalary * 0.40;

		else if (grade == 'B')
		return basicSalary * 0.30;

        else if (grade == 'C')
		return basicSalary * 0.20;

		else
		return basicSalary * 0.10;
		}

double computeGrossSalary() const{
		 return basicSalary+computeAllowances();
	}

double computeTax()const{
		 double gross = computeGrossSalary();
if (gross <= 50000)
{
return 0;
}
else if (gross<=100000)
 {
return (gross-50000) * 0.10;
}
else
{
return 5000+(gross-100000)*0.20;
}

}


double computeNetSalary()const{
 return computeGrossSalary()-computeTax();
}

void printPayslip()const{
	cout<<"============================================"<<endl;
	cout<<"EMPLOYEE PAYSLIP — AUG 2026"<<endl;
	cout<<"============================================"<<endl;
	cout<<"Emp ID   :"<<empId<<endl;
	cout<<"Name   :"<<name<<endl;
	cout<<"Department   :"<<department<<endl;
	cout<<"Grade   :"<<grade<<endl;
	cout<<"Status   :"<<isActive<<endl;
	cout<<"--------------------------------------------"<<endl;
	cout<<"Basic Salary :"<<basicSalary<<endl;
	cout<<"Allowances   : "<<computeAllowances()<<endl;
	cout<<"Gross Salary : "<<computeGrossSalary()<<endl;
	cout<<"--------------------------------------------"<<endl;
	cout<<"Tax Deduction : "<<computeTax()<<endl;
	cout<<"Net Salary    : "<<computeNetSalary()<<endl;
}


	void setName(const string &n){
		if(n=="")
		{
			cout<<"Name should Not be Empty: "<<endl;
		}
		else{
			name=n;
		}
	}
	void setDepartment(const string &dept){
		if(dept=="")
		{
			cout<<"Department name Should Not be Empty:"<<endl;
		}
		else{
			department=dept;
		}
	}
	void setGrade(char g){
		grade=g;
	}
	void setBasicsalary(double salary){
		if(salary==0){
			cout<<"Salary should Not be zero:"<<endl;
		}
		else{
		basicSalary=salary;
		}
	}
	void deactivate(){
		isActive=false;
	}

	    // Getters
	    int getEmpId() const
	    {
	        return empId;
	    }

	    string getName() const
	    {
	        return name;
	    }

	    string getDepartment() const
	    {
	        return department;
	    }

	    char getGrade() const
	    {
	        return grade;
	    }

	    double getBasicSalary() const
	    {
	        return basicSalary;
	    }

	    bool getIsActive() const
	    {
	        return isActive;
	    }

	    // Static getter
	    static int getemployeeCount()
	    {
	        return employeeCount;
	    }


	};
int Employee::employeeCount = 0;

	int main(){
		Employee emp1;
		Employee *emp2=new Employee();
		Employee *emp3=new Employee();

		emp1.acceptDetails();
		emp2->acceptDetails();
		emp3->acceptDetails();

		emp1.printPayslip();
		emp2->printPayslip();
		emp3->printPayslip();
				;
		emp3->deactivate();
		if(!emp3->getIsActive())
		cout<<emp3->getName()<<" is no longer active. Payroll skipped."<< endl;
		cout <<"Total Employees : "<< Employee::getemployeeCount()<< endl;
		delete emp2;
		delete emp3;
		return 0;

	}









