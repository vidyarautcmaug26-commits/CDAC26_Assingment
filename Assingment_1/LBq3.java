import java.util.Scanner;
class OddEven{
public static void main(String args[]){
System.out.print("Enter a number:");
Scanner sc=new Scanner(System.in);
int num=sc.nextInt();
if(num%2==0){
System.out.println("Given number is even number");
}
else{
System.out.println("Given number is odd number");
}
}
}