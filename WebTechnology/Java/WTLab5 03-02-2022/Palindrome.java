import java.util.*;

public class Palindrome {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter A 3digit no: ");
        int n = sc.nextInt();
        if (n / 100 == n % 10)
            System.out.println(n + " is a Palindrome");
        else
            System.out.println(n + " is not a Palindrome");
        sc.close();
    }
}
