//Write a program to print the area and perimeter of a triangle having sides of 3, 4
//and 5 units by creating a class named 'Triangle' with constructor having the three
//sides as its parameters.

public class triangle {
	
	double side1;
	double side2;
	double side3;
	
		triangle(double a,double b,double c){
			side1=a;
			side2=b;
			side3=c;
		}
		double perimeter() {
			return side1+side2+side3;
		}
		
		double area() {
			double s=perimeter()/2;
			return Math.sqrt(s*(s-side1)*(s-side2)*(s-side3));                                          //under root s(s-a)(s-b)(s-c)
		}
	
		
		
		public static void main(String[]args) {
			triangle obj=new triangle(3,4,5);
			System.out.println("Perimeter of Triangle:"+ obj.perimeter());
			System.out.println("Area of Triangle:"+ obj.area());
		}
	}


