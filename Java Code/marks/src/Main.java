import java.util.*;
public class Main {
    public static void main(String[] args) {
        System.out.println("Enter marks : ");
        Scanner sc=new Scanner(System.in);
        int input;
        do{
            int mark=sc.nextInt();
            if(mark>=90 && mark <=100)
                System.out.println("This is Good.");
            else if(mark>=60 && mark<=89)
                System.out.println("This is also good");
            else if(mark>=0 && mark<=59)
                System.out.println("This is also good");
            else
                System.out.println("Invalid");
            System.out.println("Want to continue ? If yes enter 1 else enter 0");
            input=sc.nextInt();
        }while(input==1);
    }
}