import java.util.Scanner;

public class Main {
    public static int prime(int n) {
        if (n == 0) {
            return 2;
        }
          else if (n == 1)
                return 0;
            else if (n < 4) {
                return 1;
            } else {
                for (int i = 2; i < n / 2; i++) {
                    if (i % n == 0) {
                        return 0;
                       // break;
                    }
                }
            }
            return 1;
    }
    public static void main(String[] args) {
        System.out.println("enter a number : ");
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int p=prime(n);
        if(p==0)
            System.out.println("Not prime.");
        else if(p==2)
            System.out.println("0 is niether prime nor composite. ");
        else
            System.out.println("Prime number.");
    }
}