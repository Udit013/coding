import java.util.*;

public class EvenNoInRange {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Even numbers in the range 23 - 57 are: ");
        for (int i = 23; i <= 57; i++)
            if (i % 2 == 0)
                System.out.println(i + ", ");
        sc.close();
    }
}
