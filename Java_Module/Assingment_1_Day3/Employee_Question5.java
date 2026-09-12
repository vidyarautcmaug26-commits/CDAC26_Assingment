/*Write a program that would print the information (name, year of joining, salary,
address) of three employees by creating a class named 'Employee'. The output
should be as follows:
Name Year of joining Address
Robert 1994 64C- WallsStreat
Sam 2000 68D- WallsStreat
John 1999 26B- WallsStreat*/
public class Employee {
String name;
int year;
double salary;
String address;

Employee(String n,int y,double s,String A){
	name=n;
	year=y;
	salary=s;
	address=A;
}
	
	public static void main(String[] args) {
		Employee e1=new Employee("Robert",1994,85000,"64C- WallsStreat");
		Employee e2=new Employee("sam",2000,85000,"66C- WallsStreat");
		Employee e3=new Employee("jhon",1999,85000,"68B- WallsStreat");
		System.out.println("Name  "+"   "+"Year of Joining"+"       "+"Address");
	    System.out.println(e1.name  +"   "+e1.year+"          "+e1.address+"   ");
	    System.out.println(e2.name  +"   "+e2.year+"           "+e2.address+"   ");
	    System.out.println(e3.name  +"   "+e3.year+"           "+e3.address+"   ");
	}
}
