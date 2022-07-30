import java.util.*;

public class ConvertCase {

    public static void main(String[] args) {
        StringBuffer str1 = new StringBuffer();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string: ");
        str1.append(sc.nextLine());

        StringBuffer newStr = new StringBuffer(str1);
        for (int i = 0; i < str1.length(); i++) {
            if (Character.isLowerCase(str1.charAt(i))) {
                newStr.setCharAt(i, Character.toUpperCase(str1.charAt(i)));
            } else if (Character.isUpperCase(str1.charAt(i))) {
                newStr.setCharAt(i, Character.toLowerCase(str1.charAt(i)));
            }
        }
        System.out.println(str1 + " -> " + newStr);
        sc.close();
    }
}
