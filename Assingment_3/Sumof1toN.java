import java.util.Scanner;
class Sumofn{
    void calculatesum(){
System.out.println("Enter a number:");
Scanner sc=new Scanner(System.in);
int num=sc.nextInt();
int sum=0;
for(int i=1;i<=num;i++){
 sum=sum+i;
}
System.out.println("The sum of numbers from 1 to"+ num +" is:"+sum);
}
public static void main(String args[]){

Sumofn obj=new Sumofn();
obj.calculatesum();
}
}
  
