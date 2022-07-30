// 5.Write a program in Java which will overload the area () method and
// display the area of a circle, triangle and square as per user choice and
// user entered dimensions.

import java.util.*;

public class Calculate {
    void area(float r) {
        System.out.println("Area of circle is " + (3.14 * r * r));
    }

    void area(float b, float h) {
        System.out.println("Area of Triangle is " + (0.5 * b * h));
    }

    void area(int a) {
        System.out.println("Area of Sqaure  " + (a * a));
    }

    public static void main(String[] args) {

        Calculate obj = new Calculate();
        Scanner sc = new Scanner(System.in);
        System.out.println("1.Area of circle");
        System.out.println("2.Area of triangle");
        System.out.println("3.Area of square");
        System.out.println("Please enter any of the above option: ");
        int num = sc.nextInt();
        switch (num) {
            case 1:
                System.out.println("Please enter radius of circle: ");
                float radius = sc.nextFloat();
                obj.area(radius);
                break;
            case 2:
                System.out.println("Please enter base and height of triangle: ");
                float base = sc.nextFloat();
                float height = sc.nextFloat();
                obj.area(base, height);
                break;
            case 3:
                System.out.println("Please enter side of square: ");
                int side = sc.nextInt();
                obj.area(side);
                break;
            default:
                System.exit(0);
                sc.close();
        }
    }
}
