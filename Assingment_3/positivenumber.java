import java.util.Scanner;
class PositiveNumbers{
    void askForPositiveNumber(){
Scanner sc=new Scanner(System.in);
int num;
do{
System.out.println("Please Enter a Positive Number");
num=sc.nextInt();
}
while(num<=0);
System.out.println("You entered a positive number:"+num);
}
public static void main(String args[]){

PositiveNumbers obj=new PositiveNumbers();
obj.askForPositiveNumber();
}
}
  
