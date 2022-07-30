import java.util.*;

public class SmallestLargest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        int largest = 0;
        int smallest = 0;
        while (num > 0) {
            int a = num % 10;
            if (a > largest) {
                largest = a;
            }
            if (smallest == 0 || a < smallest) {
                smallest = a;
            }
            num = num / 10;
        }
        System.out.println("The largest digit is: " + largest);
        System.out.println("The smallest digit is: " + smallest);
        sc.close();
    }
}
