import java.util.Scanner;
class Menudriven{
byte a;
short b;
int c;
long d;
float e;
double f;
char g;

void GradeEvalutaionSystem(){
System.out.println("Enter a marks:");
Scanner sc=new Scanner(System.in);
System.out.println("Maths:");
int maths=sc.nextInt();
System.out.println("science:");
int science=sc.nextInt();
System.out.println("English:");
int english=sc.nextInt();
int avg=(maths+science+english)/3;
if(avg>80){
System.out.println("Grade A");
}else if(avg>65){
System.out.println("Grade B");
}else if(avg>45 && avg<65){
System.out.println("Grade c");
}else{
System.out.println("Fail");
}
}
void Leapyearcheck(){
System.out.println("Enter a Year:");
Scanner sc=new Scanner(System.in);
int year=sc.nextInt();
if((year%4==0 && year%100!=0)||year%400==0){
System.out.println("Given year is leap year");
}else{
System.out.println("Given year is not leap year");
}
}
void Daysofweek(){
System.out.println("Enter a  day number");
Scanner sc=new Scanner(System.in);
int day=sc.nextInt();
switch(day){
case 1:
System.out.println("Monday");
break;
case 2:
System.out.println("Tuesday");
break;
case 3:
System.out.println("Wednesday");
break;
case 4:
System.out.println("Thursday");
break;
case 5:
System.out.println("Friday");
break;
case 6:
System.out.println("Saturday");
break;
case 7:
System.out.println("sunday");
break;
default:
System.out.println("Invalid day");
}
}

void defaultvalueofvariables(){
System.out.println(a);
System.out.println(b);
System.out.println(c);
System.out.println(d);
System.out.println(e);
System.out.println(f);
System.out.println(g);
System.out.println(b);
}

public static void main(String args[]){
System.out.println("1:Grade Evaluation System");
System.out.println("2:Leap Year Check");
System.out.println("3:Day of Week");
System.out.println("4:Identify Default Values of Variables ");
System.out.println("5:Exit");

System.out.println("Enter a choice");
Scanner sc=new Scanner(System.in);
int choice=sc.nextInt();
switch(choice){
case 1:
Menudriven obj1=new Menudriven();
obj1.GradeEvalutaionSystem();
break;
case 2:
Menudriven obj2=new Menudriven();
obj2.Leapyearcheck();
break;
case 3:
Menudriven obj3=new Menudriven();
obj3.Daysofweek();
break;
case 4:
Menudriven obj4=new Menudriven();
obj4.defaultvalueofvariables();
case 5:
System.out.println("You Selected Exit");
break;
default:
System.out.println("Invalid day");
}
}
}







