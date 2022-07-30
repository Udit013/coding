// Write a program in Java to overload subtract method with various parameters in a class.
public class MethodOverloading {
    void subtract(int a, int b) {
        System.out.println("1.Difference is " + (a - b));
    }

    void subtract(int a, int b, int c) {
        System.out.println("2.Difference is " + (a - b - c));
    }

    void subtract(float a, float b) {
        System.out.println("3.Difference is " + (a - b));
    }

    void subtract(double a, double b) {
        System.out.println("4.Difference is " + (a - b));
    }

    public static void main(String[] args) {
        MethodOverloading obj = new MethodOverloading();
        obj.subtract(8, 5);
        obj.subtract(30, 15, 9);
        obj.subtract(4.6f, 3.8f);
        obj.subtract(6.9, 5.6);
    }
}
