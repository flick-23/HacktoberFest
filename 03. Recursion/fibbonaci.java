import java.util.Scanner;
public class fibbonaci {
    public static void main(String[] args) {
        Scanner scn=new Scanner(System.in);
        int n=scn.nextInt();
        System.out.println(nthFibbonachiElement(n));
        printFibbonachiSeries(n); //until n
    }

    private static void printFibbonachiSeries(int n) {
        for (int i = 0; i <=n; i++) {
            System.out.print(nthFibbonachiElement(i)+" ");
        }
    }

    private static int nthFibbonachiElement(int n) {
        if(n<=1)
            return n;
        return nthFibbonachiElement(n-1)+nthFibbonachiElement(n-2);
    }
}
