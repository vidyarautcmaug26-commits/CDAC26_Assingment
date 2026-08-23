import java.util.Scanner;
class MultiplesuptoN{

public static void main(String args[]){
Scanner sc=new Scanner(System.in);
System.out.println("Enter a Number:");
int N=sc.nextInt();
System.out.println("Multiples of 3:");
int num=3;
for(int i=1;i<=N;i++){
int result=num*i;
System.out.println(result);
}
}
}