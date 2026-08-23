import java.util.Scanner;
class Printelementsofarray{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
System.out.println("Enter elemnts of array:");
int size=sc.nextInt();
int number[]=new int[size];

for(int i=0;i<size;i++){
number[i]=sc.nextInt();
}

for (int e:number) {
  System.out.println(e);
}
}
}