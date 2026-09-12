/*
  Print the sum, difference and product of two complex numbers by creating a
class named 'Complex' with separate methods for each operation whose real and
imaginary parts are entered by user.
 */
public class complex {
	int real;
	int imginary;
	
	
	public complex(int real, int imginary) {
		this.real = real;
		this.imginary = imginary;
	}
	
	void sum(complex c) {
		int sumReal=real+c.real;
		int sumImginary=imginary+c.imginary;	
	System.out.println(sumReal +"+"+sumImginary+"i");	
	}
	
	
	public static void main(String[] args) {
		System.out.println("Enter First real number");
		int r1=ConsoleInput.getInt();
		System.out.println("Enter First imaginary number");
		int i1=ConsoleInput.getInt();
		System.out.println("Enter second real number");
		int r2=ConsoleInput.getInt();
		System.out.println("Enter seconf imaginary number");
		int i2=ConsoleInput.getInt();
		complex c1=new complex(r1,i1);
		complex c2=new complex(r2,i2);
		c1.sum(c2);
			
	}
	
}