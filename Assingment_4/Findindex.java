import java.util.Scanner;
import java.util.Arrays;
class Findindex{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
System.out.println("Enter size of array:");
int size=sc.nextInt();
System.out.println("Enter the number to search:");
int num=sc.nextInt();
System.out.println("Enter elemnts of array:");
int number[]=new int[size];
for(int i=0;i<size;i++){
number[i]=sc.nextInt();
}
Arrays.sort(number);
System.out.println(Arrays.toString(number));
System.out.println("Searching for "+ num +" in number: " + Arrays.binarySearch(number, num)); 

}
}