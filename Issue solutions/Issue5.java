import java.util.Scanner;

//Program to print nth odd number
public class Issue5 {
    public static void main(String[] args) {
        //taking input of n
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        //printing out nth odd number
        //using formula nth odd number = 2 * n - 1
        System.out.println(2 * n - 1);
    }
}
