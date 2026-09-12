
public class student {
	static void oddNumber(int num1) {
		for(int iTemp=1;iTemp<num1;iTemp++) {
			if(iTemp%2!=0)
				System.out.print(iTemp+" ");
		}
		System.out.println("");
	}
	static void evenNumber(int num2){
		for(int iTemp=1;iTemp<num2;iTemp++) {
			if(iTemp%2==0)
				System.out.print(iTemp+" ");
		} 
		System.out.println("");
	}
	
	static void seventhNumber(int num3) {
		for(int iTemp=1;iTemp<num3;iTemp++){
			if(iTemp%10==7)
				System.out.print(iTemp+" ");
		}
		System.out.println("");
	}
	static void pattern() {
		for(int iTemp=0;iTemp<5;iTemp++) {
			for(int cTemp=0; cTemp<=iTemp;cTemp++) {
				System.out.print("*");
			}
			System.out.println();
		}
		System.out.println();
		for(int iTemp=5;iTemp>=1;iTemp--) {
			for(int cTemp=0; cTemp<iTemp;cTemp++) {
				System.out.print("*");
			}
			System.out.println();
		}
		
		System.out.println();
		for(int iTemp=5;iTemp>=1;iTemp--) {
			for(int cTemp=1; cTemp<=iTemp;cTemp++) {
				System.out.print(cTemp);
			}
			System.out.println();
		}
		
		
		System.out.println();
		for(int iTemp=1;iTemp<=5;iTemp++) {
			for(int cTemp=1; cTemp<=iTemp;cTemp++) {
				System.out.print(cTemp);
			}
			System.out.println();
		}
		
		System.out.println();
		int num=1;
		for(int iTemp=1;iTemp<5;iTemp++) {
			for(int cTemp=1; cTemp<=iTemp;cTemp++) {
				
				System.out.print(num++ +"  ");
			}
			//System.out.print(iTemp+1);
			System.out.println();
		}
		
	}
		
	public static void main(String[]args) {
		int num1=20;
		int num2=20;
		int num3=200;
		System.out.println("Odd numbers :");
		oddNumber(num1);
		System.out.println("Even numbers :");
		evenNumber(num2);
		System.out.println("Seventh  numbers :");
		seventhNumber(num3);
		pattern();
	}
}
