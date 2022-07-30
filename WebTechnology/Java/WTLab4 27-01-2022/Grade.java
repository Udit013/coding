import java.util.*;

public class Grade {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the marks: ");
        int marks = sc.nextInt();
        char ch = 'F';

        if (marks <= 100 && marks >= 90)
            ch = 'O';
        else if (marks < 90 && marks >= 80)
            ch = 'E';
        else if (marks < 80 && marks >= 70)
            ch = 'A';
        else if (marks < 70 && marks >= 60)
            ch = 'B';
        else
            ch = 'F';

        System.out.println("Grade for " + marks + " is " + ch);
        sc.close();
    }
}