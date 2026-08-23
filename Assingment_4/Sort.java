import java.util.Scanner;
import java.util.Arrays;
class Sort{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
System.out.println("Enter elemnts of array:");
int size=sc.nextInt();
int number[]=new int[size];

for(int i=0;i<size;i++){
number[i]=sc.nextInt();
}
Arrays.sort(number);
System.out.println(Arrays.toString(number));

}
}