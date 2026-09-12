/*Create a class named 'Student' with String variable 'name' , integer variable
'roll_no'., String variable ‘phone_no’ and String variable ‘address’
a. Assign the value of roll_no as '2' and that of name as "John" by creating an
object of the class Student.
b. Assign and print the roll number, phone number and address of two students
having names "Sam" and "John" respectively by creating two objects of class
'Student'.*/
public class Student1 {
  String name;
  int roll_no;
  String phone_no;
  String address;
  
  Student1(String n,int r,String p,String A){
	  name=n;
	  roll_no=r;
	  phone_no=p;
	  address=A;
  }
   public static void main(String[]args) {
	   Student1 obj=new Student1("John",2,"8925997777","Pune");
	   Student1 obj2=new Student1("sam",3,"892599756","Pimpri");
	   System.out.println("Name: " + obj.name); 
	   System.out.println("Roll No: " + obj.roll_no); 
	   System.out.println("Phone No: " + obj.phone_no); 
	   System.out.println("Address: " + obj.address);
	   
	   System.out.println("Name: " + obj2.name); 
	   System.out.println("Roll No: " + obj2.roll_no); 
	   System.out.println("Phone No: " + obj2.phone_no); 
	   System.out.println("Address: " + obj2.address);
	   
	   
   }
  
}
