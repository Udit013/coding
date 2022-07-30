import java.util.*;

public class AlphabeticalOrder {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first alphabet: ");
        char x = sc.next().charAt(0);
        System.out.print("Enter second alphabet: ");
        char y = sc.next().charAt(0);

        if (x > y)
            System.out.println(y + " , " + x);
        else
            System.out.println(x + " , " + y);
        sc.close();
    }
}
