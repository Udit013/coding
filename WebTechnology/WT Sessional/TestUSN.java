import java.util.*;

class USNException extends Exception {
    public USNException(String str) {
        super(str);
    }
}

public class TestUSN {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the USN: ");
        String s_556 = sc.nextLine();
        try {
            if (TestUSN.is_Valid_556(s_556)) {
                throw new USNException("Succuss.");
            } else {
                throw new USNException("Failure.");
            }
        } catch (USNException s) {
            System.out.println(s);
        }

    }

    public static boolean is_Valid_556(String usn_556) {
        char ch1 = usn_556.charAt(0);
        char ch2 = usn_556.charAt(1);
        char ch3 = usn_556.charAt(2);
        char ch4 = usn_556.charAt(3);
        char ch5 = usn_556.charAt(4);
        char ch6 = usn_556.charAt(5);
        char ch7 = usn_556.charAt(6);
        char ch8 = usn_556.charAt(7);
        char ch9 = usn_556.charAt(8);
        char ch10 = usn_556.charAt(9);
        String sixseven_556 = Character.toString(ch6) + Character.toString(ch7);

        int legit_556 = 0;

        if (is_oneortwo_556(ch1))
            legit_556++;
        if (is_upper_556(ch2))
            legit_556++;
        if (is_upper_556(ch3))
            legit_556++;
        if (is_digit_556(ch4))
            legit_556++;
        if (is_digit_556(ch5))
            legit_556++;
        if (is_combi_556(sixseven_556))
            legit_556++;
        if (is_digit_556(ch8))
            legit_556++;
        if (is_digit_556(ch9))
            legit_556++;
        if (is_digit_556(ch10))
            legit_556++;

        return (legit_556 == 9);
    }

    public static boolean is_oneortwo_556(char ch) {
        return (ch == '1' || ch == '2');
    }

    public static boolean is_digit_556(char ch) {
        return (ch >= '0' && ch <= '9');
    }

    public static boolean is_upper_556(char ch) {
        return (ch >= 'A' && ch <= 'Z');
    }

    public static boolean is_combi_556(String str) {
        int count = 0;
        if (str.contains("CS"))
            count++;
        if (str.contains("IS"))
            count++;
        if (str.contains("EC"))
            count++;
        if (str.contains("ME"))
            count++;
        return (count >= 1 && count <= 4);
    }

}
