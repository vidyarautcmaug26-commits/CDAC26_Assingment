/*Write a program to print the area of two rectangles having sides (4,5) and (5,8)
respectively by creating a class named 'Rectangle' with a method named 'area'
which returns the area and length and breadth passed as parameters to its
constructor.*/


public class Rectangle {
	
	double length;
	double breadth;
	
		Rectangle(double l,double b){
			length=l;
			breadth=b;
		}
		double area() {
			return length*breadth;
		}
		
		
		public static void main(String[]args) {
			Rectangle R1=new Rectangle(4,5);
			Rectangle R2=new Rectangle(5,8);
			System.out.println("Area of Recangle:"+ R1.area());
			System.out.println("Area of Recangle:"+ R2.area());

		}
	}


