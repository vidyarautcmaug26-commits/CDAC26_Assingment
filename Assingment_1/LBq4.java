import java.util.Scanner;
class Display{
public static void main(String args[]){
System.out.println("Here Enter time in 24 hour format( 00:00 to 23:59):");
Scanner clk=new Scanner(System.in);
System.out.print("Enter a time:");
float time=clk.nextFloat();
if(time<12){
System.out.println("Good Morning");
}
if(time>12 && time<17){
System.out.println("Good Afternoon");
}

else{
System.out.println("Good Evening");
}
}
}

