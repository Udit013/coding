//1. Write a Java program to generate an ArrayIndexOutofBoundsException and handle it using catch statement.

import java.util.*;

public class ArrayIndex {

    public static void main(String args[])
            throws ArrayIndexOutOfBoundsException {

        Scanner s = new Scanner(System.in);
        int arr[] = new int[3];
        int i=0;
        try {
            while (true) {
                if (i == 3)
                    throw new ArrayIndexOutOfBoundsException();
                arr[i++] = s.nextInt();
            }
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println(
                    "Array out of bounds");
        }
    }
}