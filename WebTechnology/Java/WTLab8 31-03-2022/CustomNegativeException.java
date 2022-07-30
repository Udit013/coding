// Write a Java class which has a method called ProcessInput(). This method checks the number
// entered by the user. If the entered number is negative then throw an user defined exception called
// NegativeNumberException, otherwise it displays the double value of the entered number.

import java.util.*;

class NegativeNumberException extends Exception {

    NegativeNumberException(String s) {

        super(s);

    }
}

class CustomNegativeException {

    static void ProcessInput(int n) throws NegativeNumberException {

        if (n < 0)
            throw new NegativeNumberException("Number is Negative");
        else
            System.out.println(n * 2);
    }

    public static void main(String args[]) throws Exception {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number");
        int n = sc.nextInt();

        try {
            ProcessInput(n);

        } catch (Exception m) {
            System.out.println("Exception occured: " + m);
        }

    }
}