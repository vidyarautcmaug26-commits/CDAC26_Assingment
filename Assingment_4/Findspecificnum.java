import java.util.Scanner;
class Findspecificnum{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
System.out.println("Enter size of array:");
int size=sc.nextInt();
System.out.println("Enter number to search:");
int num=sc.nextInt();
System.out.println("Enter elemnts of array:");
int number[]=new int[size];
for(int i=0;i<size;i++){
number[i]=sc.nextInt();
}

for(int i=0;i<size;i++){
if(number[i]==num)
System.out.println("Found");
}
System.out.println("Not Found");
}

}