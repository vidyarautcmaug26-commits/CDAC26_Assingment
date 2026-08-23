import java.util.Scanner;
class Averageofarray{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
System.out.println("Enter elemnts of array:");
int size=sc.nextInt();
int number[]=new int[size];

for(int i=0;i<size;i++){
number[i]=sc.nextInt();
}
int positive=0;
int negative=0;
for(int i=0;i<size;i++){
if(number[i]>0)
positive=positive+1;
else
negative=negative+1;
}
System.out.println("Positive numbers:"+positive);
System.out.println("negative numbers:"+negative);
}
}