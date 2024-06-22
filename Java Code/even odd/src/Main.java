import java.util.*;
public class Main {
    public static void evenOdd(int n){
        if(n%2==0)
            System.out.println("The number is even.");
        else
            System.out.println("The number is odd.");
    }
    public static void main(String[] args) {
        System.out.println("Enter a number : ");
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        evenOdd(n);
    }
}