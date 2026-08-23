import java.util.Scanner;
class Printarray{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
System.out.print("Enter size of array: ");
int size=sc.nextInt();
String name[]=new String[size];
System.out.println("Enter " + size + " names:");
for(int i=0;i<size;i++){
name[i]=sc.next();
}

for (String e:name) {
  System.out.println(e);
}
}
}