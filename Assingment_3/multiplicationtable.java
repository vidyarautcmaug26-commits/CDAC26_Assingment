import java.util.Scanner;
class Table{
    void printMultiplicationTable(){
System.out.println("Enter a number:");
Scanner sc=new Scanner(System.in);
int num=sc.nextInt();
for(int i=1;i<=10;i++){
int table=i*num;
System.out.println(num +"x"+i+"="+table);
}
}
public static void main(String args[]){

Table obj=new Table();
obj.printMultiplicationTable();
}
}
  
