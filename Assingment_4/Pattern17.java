class Pattern{
public static void main(String args[]){
for(int i=1;i<=5;i++){
int N=1;
for(int j=1;j<=i;j++){
System.out.print(N);
if(j<i){
System.out.print("*");
}
N=N+2;
}
System.out.println();
}

}
}