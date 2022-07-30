import java.util.*;

public class Palindrome {

    boolean isPalindrome(int number) {
        int check = number;
        int sum = 0;
        while (number > 0) {
            sum = sum * 10 + number % 10;
            number /= 10;
        }
        if (sum == check)
            return true;
        else
            return false;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Palindrome obj = new Palindrome();

        System.out.print("Enter the number: ");
        int n = sc.nextInt();

        if (obj.isPalindrome(n))
            System.out.println(n + " is palindrome");
        else
            System.out.println(n + " is not palindrome");
        sc.close();
    }
}