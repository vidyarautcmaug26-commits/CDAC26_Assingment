class Leap{
public static void main(String args[]){
int Year=2024;
if((Year%4==0 && Year%100!=0) || Year%400==0){
System.out.println("Given year is leap year");
}else{
System.out.println("Given year is not leap year");
}
}
}


