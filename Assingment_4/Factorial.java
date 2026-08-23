import java.util.Scanner;
class Factorial{


public static void main(String args[]){
Scanner sc=new Scanner(System.in);
System.out.println("Enter a Number:");
int Num=sc.nextInt();
int N=Num;
for(int i=1;i<N;i++){
Num=Num*i;
}
System.out.println("Factorial of "+ N + " is " + Num);
}
}
