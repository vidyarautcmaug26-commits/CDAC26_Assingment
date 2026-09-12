/*Write a program by creating an 'Employee' class having the following methods
and print the final salary.
1 - 'getInfo()' which takes the salary, number of hours of work per day of employee
as parameter
2 - 'addSal()' which adds $10 to salary of the employee if it is less than $500.
3 - 'addWork()' which adds $5 to salary of employee if the number of hours of
work per day is more than 6 hours.*/
public class Employee6 {
	double salary;
	double hours;
	
	
void getInfo() {
	
	System.out.println("Enter a Salary");
	salary=ConsoleInput.getFloat();
	
	System.out.println("Enter a number of works");
	hours=ConsoleInput.getFloat();
	
}

double addSal(double salary) {
	if(salary>500)
    salary=salary+10;
	return salary;
	}
double addWork(double salary,double hours) {
	if(hours>6) 
	 salary=salary+5;	
	return salary;
}
public static void main(String[]args) {
	Employee6 obj=new Employee6();
	
	
	obj.getInfo();
	double finalSal=obj.addSal(obj.salary);
	double FinalsalafterovetTime=obj.addWork(obj.salary,obj.hours);
	
	
	System.out.println("Salary After Adding 10 :"+finalSal);
	System.out.println("Salary After Adding 5 :"+ FinalsalafterovetTime);
	}
}
	
	
	
	

