import java.util.Scanner;
class Age{
      void checkAgeCategory(int age){
          if(age<18){
          System.out.println("minor");
          }else if(age<60){
          System.out.println("adult");
          }else{
          System.out.println("Senior Ceitizen");}
}
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
System.out.println("Enter Your age:");
int age=sc.nextInt();
Age obj=new Age();
obj.checkAgeCategory(age);

}
}