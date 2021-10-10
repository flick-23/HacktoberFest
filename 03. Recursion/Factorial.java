import java.util.Scanner;

public class Factorial {
    public static int factorial(int n) {
        //base case
        if(n<=1) return 1;
        return n*factorial(n-1);
    }
    public static void main(String[] args) {
        Scanner scn=new Scanner(System.in);
        int n=scn.nextInt();
        if(n >= 0)
        System.out.println(factorial(n));
    }
}
