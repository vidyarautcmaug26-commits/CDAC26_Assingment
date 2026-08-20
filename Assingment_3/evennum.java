class Even{
    void printEvenNumbers(){
    int i=1;
    while(i<=50){
if(i%2==0){
System.out.println(i);
}
i++;
}
}
public static void main(String args[]){
Even obj=new Even();
obj.printEvenNumbers();
}
}