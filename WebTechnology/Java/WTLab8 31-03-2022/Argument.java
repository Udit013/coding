// Create an user defined exception named Check Argument to check the number of arguments
// passed through command line. If the number of arguments is less than four, throw the Check
// Argument exception, else print the addition of squares of all the four elements.

class CheckArgument extends Exception {
    CheckArgument(String s) {
        super(s);
    }
}

public class Argument {
    public static void main(String[] args) {
        try {
            if (args.length != 4) {
                throw new CheckArgument("Argument needs to be 4");
            }
            int sum = 0;
            for (String i : args) {
                int n = Integer.parseInt(i);
                sum += n;
            }
            System.out.println("Sum of args is : " + sum);
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
