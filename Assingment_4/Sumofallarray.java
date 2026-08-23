import java.util.Scanner;
class Sumofallarray{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
System.out.println("Enter elemnts of array:");
int size=sc.nextInt();
int number[]=new int[size];

for(int i=0;i<size;i++){
number[i]=sc.nextInt();
}
int sum=0;
for (int e:number) {
  sum=sum+e;
}
System.out.println("The sum of all numbers is:"+sum);
}
}