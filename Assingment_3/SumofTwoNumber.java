import java.util.Scanner;
class Addition{
      int sumOfTwoNumbers(int a,int b){
          int result;
         result=a+b;
       return result;
}
public static void main(String args[]){
System.out.println("Enter numbers a:");
Scanner sc=new Scanner(System.in);
int a=sc.nextInt();
System.out.println("Enter numbers b:");
int b=sc.nextInt();
Addition obj=new Addition();
int result=obj.sumOfTwoNumbers(a,b);
System.out.println("Sum Of Two Numbers :"+ result);
}
}