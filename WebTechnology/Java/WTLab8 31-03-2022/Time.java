/* 5. Write a program to create user defined exceptions called HrsException, MinException and
SecException. Create a class Time which contains data members hours, minutes, seconds and throw
the user defined exceptions if hours(&gt;24 &amp; &lt;0),
minutes(&gt;60 &amp; &lt;0), seconds(&gt;60 &amp; &lt;0).*/

import java.util.*;

class HrsException extends Exception {
    HrsException(String s) {
        super(s);
    }
}

class MinException extends Exception {
    MinException(String s) {
        super(s);
    }
}

class SecException extends Exception {
    SecException(String s) {
        super(s);
    }
}

public class Time {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Hour");
        int h = sc.nextInt();
        System.out.println("Enter Min");
        int m = sc.nextInt();
        System.out.println("Enter Sec");
        int s = sc.nextInt();
        try {

            if (h > 24 || h < 0) {
                throw new HrsException("Hour will be in range 0-24");
            }
            if (m > 60 || m < 0) {
                throw new MinException("Minute will be in range 0-60");
            }
            if (s > 60 || s < 0) {
                throw new SecException("Second will be in range 0-60");
            }

        } catch (Exception e) {
            System.out.println(e);
        } finally {
            sc.close();
        }
    }
}
