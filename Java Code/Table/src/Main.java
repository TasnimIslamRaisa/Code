import java.util.*;
public class Main {
    public static void table(int n){
        for(int i=1;i<=10;i++){
            System.out.println(n +" * "+ i +" = "+ i*n);
        }
    }
    public static void main(String[] args) {
        System.out.print("Enter a number : ");
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        table(n);
    }
}