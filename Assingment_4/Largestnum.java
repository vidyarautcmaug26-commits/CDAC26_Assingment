import java.util.Scanner;
class Largestnum{
public static void main(String args[]){
Scanner sc=new Scanner(System.in);
System.out.println("Enter elemnts of array:");
int size=sc.nextInt();
int number[]=new int[size];

for(int i=0;i<size;i++){
number[i]=sc.nextInt();
}

int largest=0;
for(int i=0;i<size;i++){
if(number[i]>=largest)
{
largest=number[i];
}
}
System.out.println("largest number of array:"+largest);

}
}